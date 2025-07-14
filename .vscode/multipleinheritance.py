#parent class
class car:
    @staticmethod
    def start():
        print("get car started")
    @staticmethod
    def stop():
        print("car stopped")
#parent of next child
class tata(car):
    def __init__(self, country):
        self.c = country
#child of upper parent
class punch_ev(tata):
    def __init__(self, color, type):
        self.col = color
        self.type = type
#object
car1 = tata("india")
print(car1.c)
car1 = punch_ev("sky", "electric")
print(car1.col)
print(car1.type)
print(car1.start())
print(car1.stop())

