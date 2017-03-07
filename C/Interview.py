# Interview


# fibonacci numbers

fib_numbers = {} # store numbers here

def fib(n):
	global fib_numbers
	if n fib_numbers:
		return fib_numbers[n]
	else:
		if (n == 0) or (n == 1):
			number = 1
		else:
			number = fib(n-1) + fib(n-2)
			fib_numbers[n] = number
		return number


n = 0

while(n < 10):
	print(fib(n))
