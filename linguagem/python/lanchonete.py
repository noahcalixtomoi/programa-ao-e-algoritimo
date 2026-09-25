from itertools import product
import json
import os
from datetime import date
import shutil
import csv
DATA_FILE = "lanchonete_dados.json"

products = []
orders = []


def load_data():
    global products, orders

    if not os.path.exists(DATA_FILE):
        products = []
        orders = []
        return

    with open(DATA_FILE, "r", encoding="utf-8") as file:
        data = json.load(file)
        products = data.get("products", [])
        orders = data.get("orders", [])


def save_data():
    data = {
        "products": products,
        "orders": orders
    }

    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(data, file, indent=4, ensure_ascii=False)


def register_product():
    code = input("Código do produto: ")

    if find_product_by_code(code) is not None:
        print("Já existe um produto com este código.")
        return

    name = input("Nome do produto: ")
    price = float(input("Preço do produto: "))
    stock = int(input("Quantidade em estoque: "))

    product = {
        "code": code,
        "name": name,
        "price": price,
        "stock": stock
    }

    products.append(product)
    save_data()

    print("Produto cadastrado com sucesso!")


def list_products():
    if len(products) == 0:
        print("Nenhum produto cadastrado.")
        return

    print("\n--- Produtos cadastrados ---")
    for product in products:
        print(f"Código: {product['code']}")
        print(f"Nome: {product['name']}")
        print(f"Preço: R$ {product['price']:.2f}")
        print(f"Estoque: {product['stock']}")
        sells = product.get("sells", 0)
        print(f"Vendas: {sells}")
        print("-" * 30)


def find_product_by_code(code):
    for product in products:
        if product["code"] == code:
            return product
    return None


def make_order():
    if len(products) == 0:
        print("Nenhum produto cadastrado.")
        return

    customer_name = input("Nome do cliente: ")

    list_products() 

    code = input("Digite o código do produto: ")
    product = find_product_by_code(code)

    if product is None:
        print("Produto não encontrado.")
        return

    quantity = int(input("Quantidade desejada: "))

    if quantity <= 0:
        print("Quantidade inválida.")
        return

    if quantity > product["stock"]:
        print("Estoque insuficiente.")
        return

    total = quantity * product["price"]
    product["stock"] -= quantity
    product["sells"] = product.get("sells", 0) + quantity

    order = {
        "customer_name": customer_name,
        "date": date.today().strftime("%d/%m/%Y"),
        "product_code": product["code"],
        "product_name": product["name"],
        "quantity": quantity,
        "total": total
    }

    orders.append(order)
    save_data()

    print("Pedido realizado com sucesso!")
    print(f"Total: R$ {total:.2f}")


def list_orders():
    if len(orders) == 0:
        print("Nenhum pedido realizado.")
        return

    print("\n--- Pedidos realizados ---")
    for order in orders:
        print(f"Cliente: {order['customer_name']}")
        print(f"Produto: {order['product_name']}")
        print(f"Quantidade: {order['quantity']}")
        print(f"Total: R$ {order['total']:.2f}")
        print(f"data do pedido: {order.get('date', 'N/A')}")
        print("-" * 30)

def most_sold():
    best_product = max(products, key=lambda p: p.get("sells", 0))
    sells = best_product.get("sells", 0)
    if sells == 0:
        print("Nenhum produto vendido ainda.")
        return
    elif sells >= 1:
        print(f"Produto mais vendido: {best_product['name']} com {sells} unidades vendidas.")

def big_day():
    today = date.today().strftime("%d/%m/%Y")
    todays_orders = [order for order in orders if order.get("date") == today]
    if not  todays_orders:
            print(f"Não houve vendas hoje.")
            return
    sells_today = {}
    for order in todays_orders:
        product_code = order["product_code"]
        quantity = order["quantity"]
        sells_today[product_code] = sells_today.get(product_code, 0) + quantity
    best_product_code = max(sells_today, key=sells_today.get)

    max_qty = sells_today[best_product_code]

    best_product = next((p for p in products if p["code"] == best_product_code), None)

    print(f"Produto mais vendido do dia ({today}): {best_product['name']} com {max_qty} unidades vendidas.") 

def create_backup():
    if not os.path.exists(DATA_FILE):
        print("Arquivo de dados ainda não existe para gerar backup.")
        return

    backup_file = "lanchonete_dados_backup.json"
    
    shutil.copy(DATA_FILE, backup_file)
    print(f"Backup criado com sucesso em: {backup_file}")

def export_to_csv():
    if not orders:
        print("Nenhum pedido realizado para exportar.")
        return
    filename = "pedidos.csv"
    with open(filename, mode="w", newline="", encoding="utf-8-sig") as file:
        writer = csv.writer(file, delimiter=";")
        writer.writerow(["Cliente", "Produto", "Quantidade", "Total (R$)", "Data"])
        for order in orders:
            writer.writerow([
                order["customer_name"],
                order["product_name"],
                order["quantity"],
                f"{order['total']:.2f}",
                order.get("date", "N/A")
            ])

    print(f"Relatório exportado com sucesso para '{filename}'!")   
def show_menu():
    print("\n=== Sistema para Lanchonete ===")
    print("1 - Cadastrar produto")
    print("2 - Listar produtos")
    print("3 - Fazer pedido")
    print("4 - Ver pedidos realizados")
    print("5 - Produtos mais vendidos")
    print("6 - produto mais vendido do dia")
    print("7 - criar backup")
    print("8 - exportar para CSV")
    print("9 - Sair")


def main():
    load_data()

    while True:
        show_menu()
        option = input("Escolha uma opção: ")

        if option == "1":
            register_product()
        elif option == "2":
            list_products()
        elif option == "3":
            make_order()
        elif option == "4":
            list_orders()
        elif option == "5":
            most_sold()
        elif option == "6":
            big_day()
        elif option == "7":
            create_backup()
            
        elif option == "8":
            export_to_csv()
        elif option == "9":
            save_data()
            print("Sistema encerrado.")
            break
        else:
            print("Opção inválida.")


main()
