#### Luhn Algorithm  ######

# Given a positive integer of up to 16 digits, return true if it is
# a valid credit card number, and false if it is not.

# Here is the algorithm:

# If there are an even number of digits, double every other digit
# starting with the first, and if there are an odd number of digits,
# double every other digit starting with the second. Another way to
# think about it is, from the right to left, double every other digit
# starting with the second to last digit.

# 1714 => [1*, 7, 1*, 4] => [2, 7, 2, 4]

# 12345 => [1, 2*, 3, 4*, 5] => [1, 4, 3, 8, 5]

# 891 => [8, 9*, 1] => [8, 18, 1]
# If a resulting doubled number is greater than 9, replace it with
# either the sum of it's own digits, or 9 subtracted from it.

# [8, 18*, 1] => [8, (1+8), 1] => [8, 9, 1]

# (or)

# [8, 18*, 1] => [8, (18-9), 1] => [8, 9, 1]
# Sum all of the final digits
# [8, 9, 1] => 8+9+1 => 18
# Finally, take that sum and divide it by 10. If the remainder
# equals zero, the original credit card number is valid.

# 18 (modulus) 10 => 8.  

# 8 does not equal 0, so 891 is not a valid credit card number

def validate(n):
    n = list(str(n))
    if len(n) <= 16:
        for index in range(-2, -(len(n) + 1), -2):
            n[index] = int(n[index]) * 2
            if n[index] > 9:
                n[index] -= 9
        total = 0
        for item in n:
            total += int(item)
        if total % 10 == 0:
            return True
        else:
            return False
    else:
        return None

def main():
    print("1234: ", validate(1234))
    print("12345: ", validate(12345))
    print("891: ", validate(891))
    print("49927398716: ", validate(49927398716))
    print("49927398717: ", validate(49927398717))
    print("1234567812345678: ", validate(1234567812345678))
    print("1234567812345670: ", validate(1234567812345670))
    print("378282246310005: ", validate(378282246310005))

main()