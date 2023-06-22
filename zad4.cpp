#include <iostream>

using namespace std;

int main()
{
    int mes = 0;
    int date = 0;
    cout << "Введите месяц рождения";
    cin >> mes;
    cout << "Введите день месяца рождения";
    cin >> date;
    if( mes==1 and date <= 20 || mes==12 and date >= 22)
    {
        cout << "Козерог";
    }
    else if( mes==1 and date >= 21 || mes==2 and date <=18)
    {
        cout << "Водолей";
    }
    else if( mes==2 and date >= 19 || mes==3 and date <= 20)
    {
        cout << "Рыбы";
    }
    else if( mes==3 and date >= 21 || mes==4 and date <= 20)
    {
        cout << "Овен";
    }
    else if( mes==4 and date >= 21 || mes==5 and date <= 20)
    {
        cout << "Телец";
    }
    else if( mes==5 and date >= 21 || mes==6 and date <= 21)
    {
        cout << "Близнецы";
    }
    else if( mes==6 and date >= 22 || mes==7 and date <= 22)
    {
        cout << "Рак";
    }
    else if( mes==7 and date >= 23 || mes==8 and date <= 23)
    {
        cout << "Лев";
    }
    else if( mes==8 and date >= 24 || mes==9 and date <= 23)
    {
        cout << "Дева";
    }
    else if( mes==9 and date >= 24 || mes==10 and date <= 23)
    {
        cout << "Весы";
    }
    else if( mes==10 and date >= 24 || mes==11 and date <= 22)
    {
        cout << "скорпион";
    }
    else
    {
        cout << "Стрелец";
    }
}