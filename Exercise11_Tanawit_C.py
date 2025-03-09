inputround = int(input("Enter the number of rounds: "))
for x in range(inputround):
    for y in range(inputround):
        if y == x:
            print(" "*(inputround-(y+1)),end="")
            print("*"*(2*(y+1)-1))
        else:
            continue
