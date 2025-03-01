#today goal
#strings and conditional statements
print("String is a datatype that stores a sequence of characters")
#Basic Operations. 1) concatenation like "hello"+ "world"-------> helloworld
#ii) length of the string like len(str)
str1="This is a string .\n you can create string in double quotes"
print(str1)
str2='this is string 2 and you can create str in single quotes also'
print(str2)
str3="""This is string 3 and you can create using triple quotes"""
print(str3)

# Escape sequence characters are used for next line in python like \n for next line etc
#concatenation
str4=str1+" "+str2+" "+str3
print(str4) 
#string length
print(len(str4))
#indexing! it helps to access characters
ch=str4[6]
print(ch)
#string does not support item assignment like str4[0]="n"
#str1[0]='T'
#Slicing , accessing parts of the string like str[startingindex: endingindex]
str5="i am Muhammad Ishaque Tareen."
print(str5)
print(str5[4: ]) #it starts from index four till last index
print(str5[ : 6]) # it starts from index 0 till 6
print(str5[4:8]) #it starts from index 4 and ends with index 8
# Slicing can also be done with negative indexing like str[-5:-7]
print(str5[: -6])

# String Functions
print("Functions used in the string are given bellow! \n")
print(str5.endswith("en.")) # return true if string ends with en.
print(str5.capitalize()) # it will capitalize the first character in the string
print(str5.replace('u', 'oo')) #it will replace the old character with new character users wants
print(str5.find('s') ) # it return the first index of 1st occurrence 
print(str5.count('a')) # it counts the occurrence of substr in the string

#practice Problems 
print("Write a program to input user's first name and print its length")
name=input("Enter your First Name :")
print(len(name))
print("Write a program to find out the occurrence of 'S' in name \n")
print(name.find('S'))


# Conditional statements

age=17
if(age>=18):
        print("You can vote")
        print("you can drive")
else:
        print("You can not drive")

#multiple conditional statements
light=" "
if(light=="Green"):
    print("Do not stop")
elif(light=="Red"):
    print(" stop")
elif(light=="Yellow"):
    print("Slow") #indentation is used in python except {}
else:
    print("Light system does not work be aware")

print("Write a program that take marks from user and prints his grade")
marks=float(input("Enter Your marks: "))
if(marks>=90):
    print(" Your Grade is A")

elif(marks<90 and marks>=80):
    print(" Your Grade is B")
elif(marks<80 and marks>=70):
    print(" Your Grade is C")
elif(marks<70 and marks>=33):
    print(" Your Grade is D")
else:
    print(" You are Fail")

#Python also allows the nesting statements
age_=15
if(age_>18):
    if(age_>=80):
        print("You cannot drive because you are old")
    else:
        print("You can drive")
else:
    print("You can't drive.")

print("Write a program to check if a number entered by user is odd or even")
inn=int(input("Enter a number: "))
if((inn%2)!=0):
    print("You entered odd number.")
else:
    print("You entered even number.")

print("WAP to check if the number is multiple of 7 or not: \n")
inp=int(input("Enter the number: "))
if((inp%7)==0):
    print("Yes, Number is multiple of 7.")
else:
    print("No number is not multiple of 7.")

numbers=[]
for i in range(8):
    num=int(input(f"Enter number{ i+1}: "))
    numbers.append(num)
greatest_num=numbers[0]
for number in numbers:
    if(number>greatest_num):
        greatest_num=number

print(f"The greatest number is : {greatest_num}")