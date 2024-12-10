import openpyxl

class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age
 
    def display_info(self):
        print(f"Name: {self.name}  Age: {self.age}")

class Cat:
    def __init__(self, name, age):
        self.name = name
        self.age = age
 
    def display_info(self):
        print(f"Name: {self.name}  Age: {self.age}")

class Humster:
    def __init__(self, name, age):
        self.name = name
        self.age = age
 
    def display_info(self):
        print(f"Name: {self.name}  Age: {self.age}")
    
book = openpyxl.open("/Users/inautum/Documents/проги/python/python/test.xlsx", read_only=True)

sheet = book.active

