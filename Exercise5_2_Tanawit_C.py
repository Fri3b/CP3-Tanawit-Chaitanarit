s = int(input("Enter a Distance: "))
t = int(input("Enter a time: "))
if s < 0 or t < 0:
    print("Invalid Input")
else:
    print(int(s/t), "km/h")
