t = int(input("Введите время начала разговора (от 0 до 24 часов): "))
dt = int(input("Введите продолжительность разговора в минутах: "))
s = float(input("Введите стоимость минуты разговора: "))
d = int(input("Введите день недели (от 1 до 7): "))
if (t >= 22 or t < 8) and (d == 6 or d == 7):
    cost = dt * s * 0.7
elif t >= 22 or t < 8:
    cost = dt * s * 0.8
elif d == 6 or d == 7:
    cost = dt * s * 0.9
else:
    cost = dt * s
print("Стоимость: ", cost)