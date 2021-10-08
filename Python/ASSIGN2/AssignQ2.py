# 3. Create a Student class. This class should inherit
# from the Person class. Additionally it should contain
# the following fields and methods:-
# A. GPA
# B. Department
# C. Relevant getters and setters (methods)
# D. get_info() (method that prints name, age, GPA and
# Department)
# Use constructors appropriately. 


class Person:
    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

    def set_name(self, name):
        self.name = name
        return()

    def set_age(self, age):
        self.age = age
        return()

    def get_age(self):
        return self.age

    def get_gender(self):
        return self.gender

    def get_name(self):
        return self.name

    def get_info(self):
        print(self.name)
        print(self.age)

class Student(Person):
    def __init__ (self, name, age, gender, GPA, Department):
        super().__init__(name,age,gender)
        self.GPA = GPA
        self.Department = Department

    def set_GPA(self, GPA):
        self.GPA = GPA
        return()

    def set_Department(self,Department):
        self.Department = Department
        return()

    def get_info(self):
        print(self.name)
        print(self.age)
        print(self.GPA)
        print(self.Department)

S1 = Student("Anurag",18,"M", 9.9, "IT")
print(S1.get_age())
print(S1.get_info())


