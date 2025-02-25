array = [0,1]
for i in range(2,10001):
    array.append(array[i-1]+array[i-2])

n = int(input())
print(array[n])
