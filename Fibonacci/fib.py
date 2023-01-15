# Question

# Function
def Fib(n):
    if n < 2:       # if n is less than 2, then return n
        return n;
    else:
        return Fib(n - 1) + Fib(n - 2)      # recursion
        
n = int(input("Enter the number: "))
print("The number is: ", n)
if n <= 0:
    print("Invalid values.\n")
else:
    res = Fib(n)

print("The answer is: ", res)
