#parent class
class car:
    @staticmethod
    def start():
        print(" get car started")
    @staticmethod
    def stop():
        print("car stopped")
#child class
class tata(car):
    def __init__(self, type):
        self.type = type
        super().__init__()
        super().start()
        super().stop()
#object
car1 = tata("petrol")
print(car1.type)
