Username = input("Please Enter your ID: ")
Password = input("Please Enter your Password: ")
if Username == "B007" and Password == "1234":
    print("Welcome to the self-service buying system")
    print("Please select the following options:")
    print("1. Banana 10 THB")
    print("2. Orange 20 THB")
    print("3. Apple 30 THB")
    item = input("Please Enter a product item: ")
    quantity = int(input("Please Enter a quantity: "))
    if item == "1":
        print("Total price is: ", 10 * quantity, "THB")
    elif item == "2":
        print("Total price is: ", 20 * quantity, "THB")
    elif item == "3":
        print("Total price is: ", 30 * quantity, "THB")
    else:
        print("Invalid item")
else:
    print("Invalid ID or Password")
print("Thank you for using the self-service buying system")