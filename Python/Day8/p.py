# OOP in python
# To map with real world scenarios , we started using objects in code, This is called object oriented programming

#class : Class is a blue print for creating objects
# class Student: # it is class declaration with definition 
#     name ="Muhammad Ishaque Tareen"
#     department="Information Technology"
#     institute="Akhuwat College University Kasur"
#     address="Gochina valley, Nakus, District Harnai"
    

# s1=Student() #s1 is the object
# print("The name of student is ", s1.name)
# print("The department of student is :", s1.department)
# class Car:
#     color="dark red"
#     brand="mercedes"
# c=Car()
# print("The color of cars are ", c.color)
# print("The brand of my car company is ", c.brand)




# Constructor
# all classes have a function called _init_(), which is always executed when the object is being initiated.
# it is called during the new object creation always
# Encapsulation : Wrapping data and functions into a single unit (object)
# class teachers:  
#     institute="Akhuwat College University"
#     name="anonyms" #class attribute
#     #Default Constructor
#     def __init__(self):
#         print("default constructor.")
        
#     # Parameterized Constructor
#     def __init__(self, username,subject):        
#         self.name = username #obj attr , precedence of obj attr > class attr
#         self.subject=subject
#         print(" Adding a new Teacher in the Database.")  
    
#     # methods in class
#     def welcome(self):
#         print("Welcome Dear Sir", self.name)
    
#     def get_subject(self):
#         print("My favorite subject is to teach is : ", self.subject)
    
#     # Static Method
#     # Methods that don't use the self parameter ( work at class level)
    
#     @staticmethod # Decorator : it is used to change the behavior of normal function
#     def Static_Method():
#         print("This is static method and it does not take any parameter.")


# s = teachers("Saleem Akhter", "Software Engineering")  
# print(s.name, s.subject, teachers.institute)
# s2 = teachers('Naeem Akhtar', "Web Technology")
# print(s2.name, s2.subject, teachers.institute)

# # calling the methods 
# s.welcome()
# s.get_subject()
# s2.welcome()
# s2.get_subject()
# s.Static_Method()

#Important
# Abstraction : Hiding the implementation details of a class and only showing the essential features to user
# class Car:
#     def __init__(self):
#         self.accelerator=False
#         self.Break= False
#         self.clutch=False
        
#     def start(self):
#         self.clutch=True
#         self.accelerator=True
#         print("Car is started....")

# cr=Car()
# cr.start()

print("Create Account class with 2 attribute- balance and account no")
class Account:
    def __init__(self):
        self.balance=0
        self.account_no=0
    
    def __init__(self, balance, account_no):
        self.balance=balance
        self.account_no=account_no
    
    

acc1=Account(10000, 1234)
acc2=Account(15000, 1235)
print(acc1.balance, acc1.account_no)






