# Dictionary in Python
# Dictionaries are used to store data values in key: value pairs, They are unordered, mutable and do not allow duplicate keys

dictionary={
    "Name": "Muhammad Tayyab Saleem",
    "CGPA": 2.73,
    "marks": [78,67,89]
}

#print(dictionary, "type of dictionary is :" , type(dictionary ), "Length of dictionary is :", len(dictionary))

dictionary["Name"]=" Abdul Wadood" #Assignment is allowed in dictionary
dictionary["CGPA"]=2.89
dictionary["District"]="kharan, Balochistan"
#print(dictionary)
Abdullah={
    "Name ": "Muhammad Abdullah Nasar",
    "District": "Quetta , Balochistan",
    "Subjects": ["Biology","Physics", "English"],
    "future_goal: ": ("Doctor", "Physician", "Pragmatist"),
    "age": 20 ,
    "is_adult": True,
    "marks": 98.09
}
#print(Abdullah["Name "])

null_dict={} #we can create null dictionary also and if we want to use in the future then we can
#print(null_dict, type(null_dict)) 

# Nested Dictionary is also allowed in the dictionary like nested loops or conditional statements

student={
    "name": "Ramazan", 
    "score": {
        "Physics": 98,
        "Chemistry": 67.87,
        "Mathematics ": 33.8
    }
}     # it means that we can create nested dictionary in a dictionary
#print(student["score"]["Physics"])

# Methods in Dictionary
keys=student.keys()
#print(type(keys), keys)
dict_values=student.values # returns all values
#print(dict_values)
items=student.items() # it returns all (key, value) pairs as tuples
#print(items)

ret_val=student.get("score") # Returns the value according to key
#print(ret_val)

student.update({"city": "Ziarat"}) #you can add new value to dictionary by using update method
#print(student)

# Sets in Python
# Set is the collection of unordered items, each element in the set must be unique and immutable
nums={1,2,3,4,5,2,3,4}
set2={1,1,2,3,4,4,5,4,5,} # duplicate items are neglected in the set
print(set2, type(set2), nums)

mix_set={1,2,3.4, "Junaid", (4,6,7), } # You can store all data types except dict, lists
print(mix_set)

# Set methods
sett={2,4,5,6,7,8}
sett.add(9) #it adds an element
print(sett)
sett.remove(5) #it removes an element
print(sett)

sett.pop() #it removes the random value
print(sett)
sett.clear() # it empties the set
print(sett)
set1={1,3,4,5,7}
set2={2,0,9, 6,7,8,6,5,4,8}
set3=set2.union(set1)
print(set3)
intersection=set1.intersection(set2)
print(intersection)

print("Store the following word meanings in a python dictionary")

dic={
    "table":["a piece of furniture", "list of facts & figures"],
    "cat ": "a small animal"
}
print(dic)



print("You are given a list of subjects for students. Assume one classroom is required for 1 subject. How many classrooms are needed by all students.")

lis={"python", "java", "c++", "python", "javascript", "c","python", "java", "c++", "python", "javascript", "c"}

print(len(lis))