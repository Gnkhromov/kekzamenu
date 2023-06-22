import math
x = float(input())
y = float(input())
if (y>=-1) and (y<=1) and (x>=-1) and (x<=1) and (math.sqrt(x*x+y*y)<=1):
    print('Yes')
else:
    print('No')
