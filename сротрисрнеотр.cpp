
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    double perem1 = 0;
    double musor1 = 0;
    double perem2 = 0;
    double musor2 = 0;
    double srotr = 0;
    double srpol = 0;
    cout << "Введите количество элементов массива\n";
    cin >> n;
    double arr[n];
    cout << "Введите числа массива\n";
    arr[n]=-1000;
    for(int i = 0; i < n-1;i++)
    {
        cin >> arr[i];
    }
    for(int j = 0; j <= n;j++)
    {
        if(arr[j] < 0)
        {
          musor1 = musor1 + 1;
          perem1 = perem1 + arr[j];
          srotr = perem1/musor1;
        }
        if(arr[j] >= 0)
        {
          musor2 = musor2 + 1;
          perem2 = perem2 + arr[j];
          srpol = perem2/musor2;
        }
    }
    cout << "Среднее арифметическое отрицательных чисел:" << srotr;
    cout << "Среднее арифметическое неотрицательных чисел:" << srpol;
    
}
