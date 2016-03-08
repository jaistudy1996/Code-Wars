# Make them bark

# You have been hired by a dogbreeder to write a program to keep
# record of his dogs.

# You've already made a constructor Dog, so no one has to hardcode
# every puppy.

# The work seems to be done. It's high time to collect the payment.

# ..hold on! The dogbreeder says he wont pay you, until he can make
# every dog object .bark(). Even the ones already done with your
# constructor. "Every dog barks" he says. He also refuses to rewrite
# them, lazy as he is.

# You can't even count how much objects that bastard client of yours
# already made. He has a lot of dogs, and none of them can .bark().

# Can you solve this problem, or will you let this client outsmart u for good?


def bark(self):
    return "Woof!"

Dog.bark = bark
