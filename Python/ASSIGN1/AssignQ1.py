import math
inpu= int(input("Enter the value you want operation on: "))



while(math.floor(inpu/10)!=0):

    Dummy= inpu
    st1 = str(inpu)
    N = len(st1)
    x = math.ceil(N/2)
    for j in range(0,x):
        inpu = inpu/10
    inpu= math.floor(inpu)
    for j in range(0,x):
        Dummy2= inpu*10
    Sub=Dummy-Dummy2
    inpu= inpu + Sub    
print(inpu)



    
    
