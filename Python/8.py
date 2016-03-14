# Define a function isPrime that takes one integer argument and
# returns true or false depending on if the integer is a prime.

# Per Wikipedia, a prime number (or a prime) is a natural number
# greater than 1 that has no positive divisors other than 1 and itself.

import pdb

def is_prime(num):
	if num > 1:
		for number in range(2, num):
			if num % number == 0:
				return False
		return True
	else:
		return False


def main():
	pdb.set_trace()
	print(is_prime(5))
	for i in range(1000):
		if is_prime(i) == True:
			print(i)
main()
