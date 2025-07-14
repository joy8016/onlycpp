#parent class
class a:
    name = "joydeb maity"
class b:
    study = "joydeb study in clg"
#child class
class c(a,b):
    course = "b. tech in cse"
#object
c1 = c()
print(c1.name)
print(c1.study)
print(c1.course)

