# Create a function with two arguments that will return a list of length (n) with multiples of (x).

# Assume both the given number and the number of times to count will be positive numbers greater than 0.


def count_by(x, n)
	# list is of length n
	# and the value whose multiples are to be returned is x
	retArray = Array.new
	(n+1).times do |i|
		retArray.push(x*i) if i != 0
	end
	return retArray
end

p count_by(1, 5)