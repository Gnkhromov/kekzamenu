#include <iostream>

using namespace std;

int main()
{
    int god = 0;
    int jesus = 0;
    cout << "МЫ СЧИТАЕМ ПО ПРОЛЕПТИЧЕСКОМУ ЮЛИАНСКОМУ КАЛЕНДАРЮ\n";
    cout << "Введите год от 0 до 2000\n";
    cin >> god;
    cout << "Введите до нашей эры = 1 или нашей эры = 2\n";
    cin >> jesus;
    if(god%4 == 0 && jesus == 2)
    {
        cout << "Ваш год високосный\n";
    }
    else if((god-1)%4 == 0 && jesus == 1 && god <= 45)
    {
        cout << "Ваш год високосный\n";
    }
    else 
    {
        cout << "Ваш год невисокосный";
    }
}