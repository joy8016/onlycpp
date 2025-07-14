class student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def welcome(self):
        print("welcome", self.name)
    def marks(self):
        return self.marks
#object
s1 = student("joy", 89)
s1.welcome()
print(s1.marks)
        