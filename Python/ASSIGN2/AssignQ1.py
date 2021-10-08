# 2. Create a Person class. This class should contain the
# following fields and methods:-
# A. name (field)
# B. age (field)
# C. gender (field)
# D. Relevant getters and setters (methods)
# E. get_info() (method that prints name and age)
# Use constructors appropriately.

class Person:
    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

    def set_name(self, name):
        self.name = name

    def set_age(self, age):
        self.age = age

    def get_age(self):
        return self.age

    def get_gender(self):
        return self.gender

    def get_name(self):
        return self.name

    def get_info(self):
        print(self.name)
        print(self.age)


P1 = Person("Anurag", 18, "M")
P1.set_age(15)
print(P1.get_name())
P1.set_name("Sup")
print(P1.get_age())
print(P1.get_gender())
print(P1.get_info())
