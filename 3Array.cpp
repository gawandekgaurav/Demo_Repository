#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size:" << endl;
    cin >> size;
    int arr[size], large, small;
    cout << "Enter elements in array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is =" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    large = arr[0];
    small = arr[0];
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        //  cout << "array sorted=";
        cout << "\n"
             << arr[i] << "\t";
        if ((arr[i] == arr[1]))
        {
            large = arr[1];
        }
        if (arr[i] == arr[size-2])
        {
            small = arr[size-2];
        }
    }
    cout << "\nsecond largest=" << large << endl;
    cout << "second smallest=" << small << endl;
    return 0;
}