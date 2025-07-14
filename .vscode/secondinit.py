class student:
    def __init__(self, fullname):
        self.name = fullname
        print("adding the new student database")

#object
s1 = student("joy")
print(s1.name)
s2 = student("maity")
print(s2.name)