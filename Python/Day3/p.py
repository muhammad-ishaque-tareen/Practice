# Lists in Python 
# A built in data type that stores set of values, It can store elements of different data type(integer , string, float etc)
# it is a mutable sequence of values

print("List of marks! ")

marks=[87,85,33,65,77,44,70]

student=["Ibrahim", 67, "lahore"] #student[0], student[1]

print(student)

student[0]="Tareen" # allowed in lists

print(student)

print("Length of student list is :", len(student))


for mark in marks:
    if(mark>60):
        print( mark," is Good results")
    else:
        print(mark, "is Poor results")

#List slicing allowed in python like string slicing. e.g: list_name[start_idx, end_idx]
print(" List Slicing: ")
print("Slicing from idx 1 to end: ", marks[1: ])
print("Slicing from idx 0 to 3: ", marks[: 3])
print("Slicing from idx 1 to 4: ", marks[1: 4])


#List Methods 
list1=[1,6,-1,4]

list1.append(5) #it adds the element at the end
print(list1)

list1.sort() #it sorts the list in ascending order
print(list1)

list1.sort(reverse=True) # it sorts the list in descending order
print(list1)

list1.reverse() #it reverse the list 
print(list1)

list1.insert(2, "I am added now") # it adds the element to list on the given index
print(list1)

list1.remove(1) #it removes the first occurrence of an element
print(list1)

list1.pop(1) #it removes the element of the given index
print(list1)


print("Now, lets explore tupples in the python: ")
#Tuples in Python : a built in data type that lets to create immutable sequence of elements
marksintup=(86,78.7,49, 67.7,56.7,23.56,21.4,49)
print(marksintup)

#marksintup[3]=67 this is not allowed in the python like in lists
print(marksintup[5])
tup=(3, ) # it is single value tuple
tup2=() #it is empty tuple
tup1=(1) # it is not a tuple but int
print("Type of tup :", type(tup), "Type of tup2: ", type(tup2), "Type of tup1: ", type(tup1))

#slicing is same in tuple as in list

print(" Tuple Slicing: ")
print("Slicing from idx 1 to end: ", marksintup[1: ])
print("Slicing from idx 0 to 3: ", marksintup[: 3])
print("Slicing from idx 1 to 4: ", marksintup[1: 4])


# Tuple Methods
idx=marksintup.index(23.56)
print(idx)
count=marksintup.count(49)
print(count)

print("Write a program to ask the user to enter names of their 3 favorite fruits and store them in list ")

fruits=[]
for i in range(3):
    fruit=input(f"Enter you {i+1} favorite fruit: ")
    fruits.append(fruit)

print("My favorite fruits are :", fruits , " Type of fruits is ", type(fruits))

print("Write a program to check if a list contains palindrome or not")
# A function to check if a list is a palindrome  
def is_palindrome(lst):  
    # Creating a reversed copy of the list  
    reverse_lst = lst[::-1]  # This gives us the reversed list  
    return lst == reverse_lst  # Check if the original list and reversed list are the same  

# Input list  
lisst = [1, 2, 3, 4, 3, 2, 1]  

# Calling the function and printing the output  
if is_palindrome(lisst):  
    print("Yeah, it is a palindrome")  
else:  
    print("It is not a palindrome")  

print("Write a program that counts the students of grade 'A' :")
# Tuple of student grades  
grades = ('A', 'B', 'A', 'C', 'B', 'A')  
count=grades.count('A')
print("The count of students in Grade 'A' are " , count)