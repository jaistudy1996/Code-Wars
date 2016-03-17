# This time no story, no theory. The examples below
# show you how to write function accum:

# Examples:

# accum("abcd") --> "A-Bb-Ccc-Dddd"
# accum("RqaEzty") --> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
# accum("cwAt") --> "C-Ww-Aaa-Tttt"


def accum(s):
    string = ""
    for i in range(len(s)):
        string += s[i].upper()
        for j in range(i):
            string += s[i].lower()
        if i != (len(s) - 1):
            string += "-"
    return string
