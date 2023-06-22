A = int(input())
B = int(input())
C = int(input())
if ((A % 2 == 0) and (B % 2 != 0)) or ((A % 2 != 0) and (B % 2 == 0)):
    print('YYE')
elif ((A % 3 == 0) and (B % 3 == 0) and (C % 3 == 0)):
    print('YEE')

