s = input("Enter your scale (c,f,k): ").lower()
num = float(input("Enter your number: "))

if s == 'c':
    f = (num * 9 / 5) + 32
    k = num + 273.15
    print(f"{f:.2f} °F and {k:.2f} °k")
elif s == 'f':
    c = (num - 32) * 5 / 9
    k = c + 273.15
    print(f"{c:.2f} °C and {k:.2f} °K")
elif s == 'k':
    c = num - 273.15
    f = (c * 9 / 5) + 32
    print(f"{c:.2f} °C and {f:.2f} °F")
else:
    print("Invalid Scale!")