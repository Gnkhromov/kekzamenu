
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int number = 0;
    cout << "Введите количество элементов массива\n";
    cin >> n;
    int arr[n];
    cout << "Введите числа массива\n";
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    for(int j = 0; j < n-1;j++)
    {
        if(arr[j] < 0 & arr[j] < arr[j+1])
        {
            number = number + 1;
        }
        else if(arr[j] > 0 & arr[j] > arr[j+1])
        {
            number = number + 1;
        }
    }
    cout << number;
}
