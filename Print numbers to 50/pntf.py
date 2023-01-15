# Question

# Function
def Printnums(n):
    if n <= 50:
        print(n, end = ' ')
        Printnums(n + 1)
    

print('Numbers from 1 to 50:')
print(Printnums(1))
