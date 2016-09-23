# Your goal in this kata is to implement an difference function,
# which subtracts one list from another.

# It should remove all values from list a, which are present in list b.

def array_diff(a, b)
	# puts a.length
  a.length.times {|i| a.delete(a[i]) if b.include?(a[i])}
  
  return a
end

p array_diff([1,2,2], [2])
a = [1, 2, 2]
b = [2]



puts a.length.times {|i| puts i}