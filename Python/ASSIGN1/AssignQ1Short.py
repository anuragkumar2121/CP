num = input()
while len(num) > 1:
    first = int(num[0:len(num)//2])
    second = int(num[len(num)//2:len(num)])
    num = str(first + second)
print(num)

#Slicing in python of string is basicallly the thing that has happenend here
#So if I want to slice input which is stored in num variable
#So type print(num[0:3]) if I want first 4 characters of string
#Now remember that we can convert string to int if we know that string is numeric
#Do write as above