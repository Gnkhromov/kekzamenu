#include <iostream>

using namespace std;

int main()
{
    int kopeyka = 0;
    cout << "Введите число копеек от 1 до 99\n";
    cin >> kopeyka;
    cout << kopeyka;
    if(kopeyka == 11 || kopeyka == 12 || kopeyka == 13 || kopeyka == 14)
    {
     cout << " копеек";   
    }
    else if(kopeyka%10 == 1)
    {
        cout <<  " копейка";
    }
    else if(kopeyka%10 == 2 || kopeyka%10 == 3 || kopeyka%10 == 4)
    {
        cout << " копейки";
    }
    else 
    {
        cout << " копеек";
    }
    return 0;
}
