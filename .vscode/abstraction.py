#class
class person:
    def __init__(self, bal, acc_no):
        self.balance = bal
        self.account = acc_no
#create credit method
    def credit(self, amount):
        self.acc = amount
        print("Rs.", amount, "credited")
        print("total amount: Rs.",self.balance+self.acc)
#create debit method
    def debit(self, amount):
        self.aee = amount
        print("Rs.", amount, "debited")
        print("total amount:", self.balance - self.aee)
#create total amount method
   # def get_balance(self):
        #print(self.get_balance)

#object
p1 = person(10000, 12345678980)
print(p1.balance)
print(p1.account)
p1.debit(1000)
p1.credit(200)
#person.get_balance()
