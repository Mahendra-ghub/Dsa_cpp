#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n, index;
    cout << "Enter the number: ";
    cin >> n;
    if (n < 100)
    {
        cout << "Enter the elements of the array" << endl;
        for (size_t i = 0; i < n; i++)
        {
            cout << "Enter the value at " << i << ": ";
            cin >> arr[i];
        }
        cout << "Array values: " << endl;
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "Enter the index value you where you want to insert the value: ";
        cin >> index;
        cout << endl;
        if (index >= 0 && index < n)
        {
            cout << "Enter the value: ";
            cin >> arr[index];
            for (int i = 0; i < n; ++i)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    else
    {
        cout << "Array index out of range";
    }
}

//d1