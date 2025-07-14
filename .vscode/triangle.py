n = int(input("enter the number:"))
#for i in range(n):
    #for j in range(i+1):
       # print("a", end = '')
    #print('')
#decreasing triangle 
#for i in range(n):
    #for j in range(i, n):
        #print("*", end = '')
    #print('')

#right sided triangle inceasing
for i in range(n):
    for j in range(i, n):
        print(' ', end = '')
    for j in range(i+1):
        print("*", end ='')
    print('')