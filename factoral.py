# n = 5
def fun(n):
    if n == 1:
        return n
    else:
        return n+fun(n-1)
    
print(fun(int(input("enter your number: "))))