t = int(input())
for _ in range(t):
    n = input().split()
    n = [float(i) for i in n]
    total = sum(n) - n[0]
    avr = total / n[0]
    h = [float(i) for i in n if i > avr and i != n[0]]
    print("%.3f%%" % ((len(h)/n[0])*100))