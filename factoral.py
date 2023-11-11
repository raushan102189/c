# n = 5
def fun(n):
    if n != 1:
        return n+fun(n-1)
    else:
        return n
    
print(fun(int(input("enter your number: "))))