# st="Hello"
# print(st.upper())#Here upper is method
# #Here string is kind of object with class string(str)

# class Dog:
#     def bark(self):
#         print("bark")

# d= Dog() #Here d is object 
# d.bark() #Here bark is method

# class Dog:
#     def __init__(self, name, age):
#         self.name =name #Here name is an attribute
#         print(name)
#     def add_One(self,x):
#         return x+1

#     def bark(self):
#         print("Baark")

#     def set_age (self,age):
#         self.age = age

#     def get_age (self):
#         return self.age

# d= Dog("Tim", 34)
# d.set_age(22)
# print(d.get_age())

# class Student:
#     def __init__(self,name,age,grade):
#         self.name = name #attribute
#         self.age = age
#         self.grade= grade

#     def get_grade(self):
#         return self.grade


# class Course:
#     def __init__(self, name, max_Student):
#         self.name = name
#         self.max_student = max_Student
#         self.students = []

#     def add_student(self,student):
#         if len(self.students) < self.max_student:
#             self.students.append(student)
#             return True
#         return False

#     def get_average_grade(self):
#         value = 0
#         for student in self.students:
#             value += student.get_grade()

#         return value / len(self.students)

# s1 = Student("Tim",19, 95)
# s2 = Student("Bill",19, 75)
# s3 = Student("Jill", 19, 65)

# course = Course("Science", 2)
# course.add_student(s1)
# course.add_student(s2)
# course.add_student(s3)
# print(course.get_average_grade())



##########Inheritance


# class Cat:
#     def __init__(self,name,age):
#         self.name = name
#         self.age =age
    
#     def speak(self):
#         print("Meow")

# class Dog:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age

#     def speak(self):
#         print("Bark")

# ## In these two see they are almost same beside we just have bark in one and meow in other, beside that no diffrence is there so 
# #we can use inheritance so to make use once written code in both which we will see below

# class Pet:
#     def __init__ (self,name,age):
#         self.name = name
#         self.age = age

#     def show(self):
#             print(f"I am {self.name} and I am {self.age} years old")

#     def speak(self):
#             print("I don't know what to speak")  #This will be overriden by below if it is defined in below classes



# class Cat(Pet):  #Inheritance
#     def __init__(self,name, age, color):# So that if we want to want to add more attribute than parent class and still want parent class to act
#         super().__init__(name, age)
#         self.color = color


#     def speak(self):
#         print("Meow")

#     def show(self):
#         print(f"I am {self.name} and I am {self.age} years old and my color is{self.color}")

    

# class Dog(Pet):
#     def speak(self):
#         print("Bark")

# p  = Pet("Tim", 19)
# p.show()

# c = Cat("Bill",34, "Brown")
# c.show()
# c.speak()

# d= Dog("Hill", 25)
# d.show()
# d.speak()




##________________________________________________________________________________________________________

## Class Attribute

# class Person:
#     numberOfPeople = 0  # Class attribute

#     def __init__(self,name):
#         self.name =name
#         Person.numberOfPeople+=1


# p1 = Person("Tim")
# print(Person.numberOfPeople)
# p2 = Person("Jill")
# print(Person.numberOfPeople)

# Class Method

# class Person:
#     numberOfPeople = 0  # Class attribute

#     def __init__(self,name):
#         self.name =name
#         Person.addPerson()
        

#     @classmethod
#     def numberOfPeople_(cls):
#         return cls.numberOfPeople

#     @classmethod
#     def addPerson(cls):
#         cls.numberOfPeople += 1

# p1 = Person("Tim")
# p2 = Person("Jill")
# print(Person.numberOfPeople_())


# Abstraction and encapsulation

class Dog:
    def __init__(self, name, age):
        self.name =name #Here name is an attribute
        self._age = age #Here applying before name
        #make it private that ia it will not be available outside the class
        
        print(name)
    def add_One(self,x):
        return x+1

    def bark(self):
        print("Baark")

    def set_age (self,age):
        self._age = age

    def get_age (self):
        return self._age

d= Dog("Tim", 34)
d._age = 12
print(d.get_age())

#Polymorphism
# In programming, polymorphism means 
# same function name 
# (but different signatures) 
# being uses for different types

class Dog:
    def __init__(self, name, age):
        self.name =name #Here name is an attribute
        self._age = age #Here applying before name
        #make it private that ia it will not be available outside the class
        
        print(name)
    def add_One(self,x):
        return x+1

    def bark(self):     
        print("Baark")

    def bark(self, pitch): #Example Polymorphism
        print("Baark2")

    def set_age (self,age):
        self._age = age

    def get_age (self):
        return self._age

d= Dog("Tim", 34)
d._age = 12
print(d.get_age())




