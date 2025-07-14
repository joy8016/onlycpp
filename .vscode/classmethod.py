class person:
    name = "joydeb"
@classmethod
def changename(cls, name):
    cls.n = name
#object
p1 = person()
p1.changename("rahul")
print(p1.n)
print(person.name)
