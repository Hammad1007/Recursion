# Factorial program

# Factorial function
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)
        
num = int(input("Enter the number: "))
print("The number is: ", num)
if num < 0:
    print("Invalid.\n")
elif num >= 0:
    res = factorial(num)
    print("The answer is: ", res)
