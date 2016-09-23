# Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of
# cells and carries the "instructions" for the development and functioning of living organisms.

# If you want to know more http://en.wikipedia.org/wiki/DNA

# In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G".
# You have function with one side of the DNA (string, except for Haskell); you need to get
# the other complementary side. DNA strand is never empty or there is no DNA at all.

def DNA_strand(dna)
	dna = String(dna)
	dna.length.times do |c|
		# dna[c] = 
		if dna[c] == "A"
			dna[c] = "T"
			next
		end
		if dna[c] == "T"
			dna[c] = "A"
			next
		end
		if dna[c] == 'G'
			dna[c] = 'C'
			next
		end
		if dna[c] == 'C'
			dna[c] = 'G'
		end
	end
	return dna
end

puts DNA_strand("ATTGC")
puts DNA_strand("GTAT")
puts DNA_strand("TTGTGCCTGGTCACGAGATCTAGCAAA")