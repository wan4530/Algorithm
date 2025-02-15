def factorial(n):
    if n == 1 or n == 0:
        return 1
    return n*factorial(n-1)

t = int(input())
for _ in range(t):
    W,E = map(int,input().split(' '))
    W = (W)
    E = int(E)
    print(factorial(E)//(factorial(W)*factorial(E-W)))