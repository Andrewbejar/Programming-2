for x in range(1500, 2100):
    if x%4 == 0 and x%100 != 0 or x%400 == 0:
	print("{} is a leap year".format(x))
