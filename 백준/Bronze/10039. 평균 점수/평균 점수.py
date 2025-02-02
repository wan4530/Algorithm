sum = 0
for i in range(5):
    temp = int(input())
    if(temp < 40):
        temp = 40
    sum += temp 
print("%d" % (sum / 5))