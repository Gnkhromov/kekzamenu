
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int kal = 0;
    int number = 0;
    cout << "Введите количество элементов массива\n";
    cin >> n;
    int arr[n];
    cout << "Введите числа массива\n";
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    for(int k = 0; k < n; k++)
        {
            for(int j = 0; j < n ; j++)
            {
                if(arr[k] == arr[j] & k!=j)
                {
                    kal = kal+1;
                }
            }
        }
    if(kal == 0)
    {
        cout <<  "все числа уникальны";
    }
    else 
    {
        cout << "не Все числа уникальны";
    }
    return 0;
}
