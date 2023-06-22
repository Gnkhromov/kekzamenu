x = float(input())
y = float(input())
if abs(x) <= 1 and abs(y) <= 1 and abs(x) + abs(y) <= 1:
    print('Точка попадает в область')
else:
    print('Точка не попадает в область')