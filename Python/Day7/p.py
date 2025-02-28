# File input / output in python
# Python can be used to perform operations on a file.(read & write)
# Types of all files 
# 1. Text files: .txt, .docx, .log etc
# 2. Binary Files : .mp4, .mov, .png, .jpeg etc

# Open , read & close file: we have to open a file before reading or writing

# f= open(" file_name", "mode")
# "file_name " --> sample.txt, demo.txt:: "mode"--> r:read mode, w: write mode
# data =f.read()
#f.close
import os
f=open("Python/Day7/Python.txt", "r+")
data =f.read(50)
# print(data)
f.close()

# r: open for reading(default)
# W: open for writing , truncating the file from django.conf import settings
# X: create a new file and open it for writing
# a: open for writing , appending  to the end of the file if it exists
# b: binary mode
# t: text mode
# +: open a disk file for updating (reading and writing)
# data_=f.readline()
# print( data_)
f=open("Python/Day7/Python.txt", "w+")
# Writing to a file 
f.write("This is a new line I added to the file ")
f.write("\nThis is a another line I added to the file ")
f.close()
ff=open("Python/Day7/Python.txt", "r")
dt=ff.read()
print(dt)
ff.close()
ff=open("Python/Day7/Python.txt", "a")
ff.write("\nThis line is appended to the existing file at the end.")
ff.close()

t=open("Python/Day7/Tareen.txt", "w")
t.write("Hello World! \n My name is Muhammad Ishaque Tareen. \n I am currently learning Python")
t.close()
with open("Python/Day7/Tareen.txt", "r") as f: # no need of f.close()
    da=f.read()
    print(da)

# Deleting a file 
# Using the os module
# Module like a code library is a file written by another programmer that generally has a function we use.
temp=open("Python\Day7\dp.txt", "w")
temp.close()


os.remove("Python\Day7\dp.txt")

print("Create a new file 'Practice.txt' using python. Add the following data in it")
with open("Python/Day7/Practice.txt", "w") as f:
    f.write("Hi everyone \n We are learning file i/o \n using Java \n I like programming in Java")
f.close()
print("write a program that replace the 'Java' with 'Python' from the above file")
with open("Python/Day7/Practice.txt", "r") as f:
    data=f.read()
new_data=data.replace("Java", "Python")
print(new_data)
with open("Python/Day7/Practice.txt", "w") as f:
    f.write(new_data)
    
print("Write a program to find 'learning in Practice.txt'")
def check_for_word(word):
    findword=word
    with open("Python/Day7/Practice.txt", "r") as f:
        data=f.read()
        if(data.find(findword)!=-1):
            return "Found"
        else:
            return "Not Found"
        
print("The word is ", check_for_word("learning"))

def check_for_line(word):
    find=word
    data= True 
    line_no=1
    with open("Python/Day7/Practice.txt", "r") as f:
        while data:
            data=f.readline()
            if(find in data):
                return line_no
            else:
                line_no+=1
            return -1


print("Write a program to find and return the line no of the word 'learning'")
print("The line no of 'learning is :'", check_for_line('leag'))
    



