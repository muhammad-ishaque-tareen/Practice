# Loops in the python
# Loops are used to repeat instructions

#while loops while(condition):
# Statements
count=1
while(count<=50):
    # print("Hello world" , count)
    count+=1
print(count)
while(count):
    # print("The value of count is :", count)
    count-=1

print("print numbers from 1 to 100")
i=1
while i<=100:
    # print("i is : ",i)
    i+=1
i-=1
print("print numbers from 100 to 1")
while i>=1:
    # print("i is :", i)
    i-=1

print("Print the multiplication of n numbers")
n=int(input("Enter the number: "))
i=1
while i<=20:
    # print(n,'*',i,'=',i*n)
    i+=1
print('Print the numbers in square form')
i=1
while i<=10:
    # print(i*i)
    i+=1

print(" Print the following sequence of numbers:")
num=[1,2,9,16,25,36,49,64,81,100]
i=0
while i<10:
    # print(num[i])
    i+=1

# For loop
# loops are used for sequential traversal. For traversing list, string, tuples etc

nums=[1,2,3,4,5]
for val in nums:
    print(val)

vegetables=["Ladies Fingers", "cucumber", "tomato", "potato"]
for val in vegetables:
    print(val)

str="I am Tanveer Ahmed."
for ch in str:
    print(ch)
    if(ch=='e'):
        print(ch,"found")
        break
else:
    print("END")

# Range()
# Range function returns a sequence of numbers, starting from zero by default, and increments by 1(by default) and stops before a specific number

for eel in range(5):
    print(eel)
for ell in range(1,5):
    print(ell)

for i in range (0, 100,2): # (star, end, increase by)
    print(i)