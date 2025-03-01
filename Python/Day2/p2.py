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





