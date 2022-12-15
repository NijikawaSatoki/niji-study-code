# ==========================================================
# Exercise II
# ==========================================================
# 
# Author: Satoki Nijikawa
# Version: 1.00a

# Declaring the variables
mystring = "Hello!"
myfloat = float(10)
myint = 20

# Prints the variables based on if these conditions are met
if mystring == "Hello!":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Floating Point: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)
