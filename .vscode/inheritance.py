#parent class
class car:
    @staticmethod
    def start():
        print("get started")
    @staticmethod
    def stop():
        print("get stopped")

#childclass
class toyoto_car(car):
    def __init__(self, name):
        self.n = name

#object
car1 = toyoto_car("innova")
car2 = toyoto_car("fortuner")
print(car1.n)
print(car1.start())