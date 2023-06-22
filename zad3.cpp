
#include <iostream>

using namespace std;

int main()
{
    int chislo = 0;
    cout << "Введите день года"; 
    cin >> chislo;
    if (chislo%7 == 1)
    {
        cout << "понедельник";    
    }
    else if (chislo%7 == 2)
    {
        cout << "вторник";    
    }
    else if (chislo%7 == 3)
    {
        cout << "среда";    
    }
    else if (chislo%7 == 4)
    {
        cout << "четверг";    
    }
    else if (chislo%7 == 5)
    {
        cout << "пятница";    
    }
    else if (chislo%7 == 6)
    {
        cout << "суббота";    
    }
    else
    {
        cout << "воскресение";
    }
}