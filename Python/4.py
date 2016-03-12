# Implement the function unique_in_order which takes as argument
# a sequence and returns a list of items without any elements with
# the same value next to each other and preserving the original order
# of elements.

# For example:

# unique_in_order('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
# unique_in_order('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
# unique_in_order([1,2,2,3,3])       == [1,2,3]

import pdb

def unique_in_order(listParam):
    uniqueList = []
    uniqueIndex = 0
    for index in range(len(listParam)):
        if index == 0:
            uniqueList.append(listParam[0])
            uniqueIndex += 1
            continue
        if listParam[index] == uniqueList[uniqueIndex - 1]:
            continue
        else:
            uniqueList.append(listParam[index])
            uniqueIndex += 1
    return uniqueList

def main():
    pdb.set_trace()
    print(unique_in_order('AAAABBBCCDAABBB'))
    print(unique_in_order('ABBCcAD'))
    print(unique_in_order([1,2,2,3,3]))

main()
