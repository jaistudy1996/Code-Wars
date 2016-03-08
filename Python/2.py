# A string is considered to be in title case if each word in the string is
# either (a) capitalised (that is, only the first letter of the word is in
# upper case) or (b) considered to be an exception and put entirely into
# lower case unless it is the first word, which is always capitalised.

# Write a function that will convert a string into title case, given an
# optional list of exceptions (minor words). The list of minor words will
# be given as a string with each word separated by a space. Your function
# should ignore the case of the minor words string -- it should behave in
# the same way even if the case of the minor word string is changed.


def title_case(title, minor_words=[]):
    if len(title) == 0:
        return title
    if len(minor_words) != 0:
        minor_words = minor_words.lower()
        minor_words = minor_words.split()
    title = title.split()
    first = title[0].lower()
    first = list(first)
    first[0] = first[0].upper()
    first = "".join(first)
    title[0] = first

    for index in range(1, len(title)):
        if title[index].lower() not in minor_words:
            word = list(title[index].lower())
            word[0] = word[0].upper()
            title[index] = "".join(word)
        else:
            title[index] = title[index].lower()
    # print(title, minor_words)
    return " ".join(title)


def main():
    print(title_case('a clash of KINGS', 'a an the of'))
    print(title_case('THE WIND IN THE WILLOWS', 'The In'))
    print(title_case('the quick brown fox'))

main()
