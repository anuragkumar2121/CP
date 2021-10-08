x=123
print(x)
s='Hello Python How are you'
word=s.split()
print(word)
#s1='1, 2, 3, 4, 5, 6'
#print(s1.strip(','))

sentence= ' '.join(('Python','is','easy'))
sentence2= '-'.join(('Python','is','easy'))
print(sentence)
print(sentence2)
sentence3= '_'.join(word)
print(sentence3)

my_list = [1, 2, 'Anurag']
"""print(my_list)
print(my_list[2])
print(len(my_list))"""

# arr= [] USE Ctrl+K+C to cooment whole block
# arr.append(56)
# print(arr)
# arr.clear()
# print(arr)

arr = [1,2,3]
arr.append(56)
arr2= arr.copy()

arr2.append(68)

print(arr)
print(arr2)

arr=[3,2,4,6,1]
arr.reverse()
print(arr)
arr.sort()
print(arr)

tuppleArr = (3.14,0.87)

mySet = set()
mySet.add(5)
mySet.add(4)
mySet.add(5)
print(mySet)

# set_1 = {1,2,3}                                #@@@@@@see it
# set2  = {4,5}

# set3 = set_1.intersection(set2)
# print(set3)

diction = {
    'First':1,
    'Second':2,                               #@@@@@@@ see it
    'BigNumber':5
 }
print(diction['First'])
print(diction['BigNumber'])
print(diction.items())
