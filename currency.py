rates = {
    1: {"USD": 1/83, "EUR": 1/90, "Bhat": 1/2.4, "Dirham": 1/22.6},
    2: {"INR": 83, "EUR": 0.93, "Bhat": 35.25, "Dirham": 3.67},
    3: {"INR": 90, "USD": 1.07, "Bhat": 38, "Dirham": 3.95},
    4: {"INR": 2.4, "USD": 0.029, "EUR": 0.025, "Dirham": 0.1},
    5: {"INR": 22.6, "USD": 0.27, "EUR": 0.25, "Bhat": 9.6}
}

print("1.INR\n2.USD\n3.EUR\n4.Bhat\n5.Dirham")
choice = int(input("Choose currency to convert from (1-5): "))
amount = float(input("Enter amount: "))

if choice in rates:
    print("\nConverted Amounts:")
    for currency in rates[choice]:
    converted = amount * rates[choice][currency]
    print(f"{amount} to {currency}: {round(converted, 2)}")

else:
    print("Invalid Choice!")
