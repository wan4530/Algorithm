h,m,s = map(int,input().split(' '))
r = int(input())
if(r/3600>1):
    h += r//3600
    r %= 3600
if(r/60>1):
    m += r//60
    r %= 60
s += r
if(s>=60):
    m += s//60
    s %= 60
if(m>=60):
    h += m//60
    m %= 60
if(h>=24):
    h %= 24 
print(h,m,s)