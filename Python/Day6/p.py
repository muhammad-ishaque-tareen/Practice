# Functions in python
# Block of statements that perform a specific task
#def func_name(param1, param2):
#   some work
# return value


def sum(a, b):
    s=a+b
    return s

print("sum is ", sum(3, 7))



def factorial(n):
    fact=1
    for i in range(1, n+1):
        fact *=i
        i+=1
        
    return fact

inr=int(input("Enter the number to find its factorial: "))
print("The factorial of", inr, "is :", factorial(inr))
        
    
    
def Avg(a, b, c):
    avg=(a+b+c)/3
    return avg

print("Average of three numbers :", Avg(4,5,67.6))
def call_prod(a=1, b=1):
    print(a*b)
    return a*b

call_prod(3,4)
list=["Harnai","Ziarat", "Duki", "Quetta", "Loralai", "Zhorb"]
def show_city(cities):
    for item in cities:
        print(item, end=",")
print("District of Balochistan" ,end=": ")
show_city(list)
print()

print("Write a program that converts the USD to PKR: ")
def converter(usd_val):
    return (usd_val*280)
inp=float(input("Enter the amount of used to convert into PKR: "))
print(inp, "are equals to ", converter(inp), "PKR")
print("WAP that check a number either it is odd or even , if even then return even or vise versa")
def check(num):
    if num%2==0:
        return "EVEN"
    else:
        return "ODD"
inn=int(input("Enter the to check wether it is odd or even: "))
print(inn,"is ", check(inn), "Number")





#Recursion: when a function calls itself repeatedly
def factorial_(n):
    if(n==1):
        return n
    return n*factorial_(n-1)
inn=int(input("Enter a number to find the factorial of that number through recursion: "))
print("The Factorial of ", inn, "is ", factorial_(inn))
