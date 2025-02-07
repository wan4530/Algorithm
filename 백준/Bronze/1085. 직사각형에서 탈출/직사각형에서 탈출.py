x, y, w, h = map(int,input().split(' '))
min_x = 0
min_y = 0
if (w / 2) >= x:
    min_x = x
elif (w / 2) < x:
    min_x = w-x
if (h / 2) >= y:
    min_y = y
elif (h / 2) < y:
    min_y = h - y
if min_x < min_y:
    print(min_x)
else:
    print(min_y)