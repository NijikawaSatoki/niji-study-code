# ==========================================================
# Using Operators on Numbers
# ==========================================================
# 
# Author: Satoki Nijikawa
# Version: 1.00a

"""

You can use operators on numbers to perform mathematical
calculations.

Available mathematical operators are:
'+'	Addition (e.g. 5 + 4)		More info: https://en.wikipedia.org/wiki/Addition
'-'	Subtraction (e.g. 5 - 4)	More info: https://en.wikipedia.org/wiki/Subtraction
'*'	Multiplication (e.g. 5 * 4)	More info: https://en.wikipedia.org/wiki/Multiplication
'/'	Division (e.g. 5 / 4)		More info: https://en.wikipedia.org/wiki/Division_(mathematics)
'%'	Modulus (e.g. 5 % 4)		More info: https://en.wikipedia.org/wiki/Modulo_operation
'**'	Exponents (e.g. 5 ** 4)		More info: https://en.wikipedia.org/wiki/Exponentiation
'//'	Floor division (e.g. 5 // 4)	More info: https://en.wikipedia.org/wiki/Division_(mathematics)#Of_integers

You can see examples of these below.

"""

# Setting up the math
twentyfour = float(24)
fourtyone = float(41)

# Setting up the answers
sum = twentyfour + fourtyone
difference = twentyfour - fourtyone
product = twentyfour * fourtyone
quotient = twentyfour / fourtyone
modulo = twentyfour % fourtyone
power = twentyfour ** fourtyone
floorquotient = twentyfour // fourtyone

# Printing the answers
print("The sum of 24 + 41 is %f." % sum)
print("The difference of 24 - 41 is %f." % difference)
print("The product of 24 * 41 is %f." % product)
print("The quotient of 24 / 41 is %f." % quotient)
print("The modulus of 24 %% 41 is %f." % modulo)
print("The answer to 24 ** 41 is %f." % power)
print("The floor of 24 // 41 is %f." % floorquotient)
