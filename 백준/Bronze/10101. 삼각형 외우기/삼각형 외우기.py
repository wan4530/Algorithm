e1 = int(input())
e2 = int(input())
e3 = int(input())
if(e1 == e2 == e3 == 60):
    print("Equilateral")
elif(e1+e2+e3 ==180):
    if(e1 == e2 or e2 == e3 or e1 == e3):
        print("Isosceles")
    else:
        print("Scalene")
else:
    print("Error")