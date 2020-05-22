for x in range(1, 200):
    prime = 0
    for y in range(1, x):
        if x%y == 0:
            prime = prime+1

    if prime == 2:
        print(x)

    else:
        print("{} is not a prime number".format(x))
