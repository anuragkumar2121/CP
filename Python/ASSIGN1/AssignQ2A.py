# https://www.w3schools.com/python/ref_func_map.asp link to learn map
array = list(map(int, input("These are inputs: " ).split(" ")))
output = []
for num in array:
    if num not in output:
        output.append(num)
print(output)