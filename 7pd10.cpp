#include <iostream>
using namespace std;
bool consecutive(int n, int arr[])
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j + 1])
            {
                temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
cout<<arr[i];
        if (arr[i] + 1 != arr[i + 1] || arr[i] == arr[i+1])
        {
            return false;
           break;
        }
    }

    return true;
}

main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    cout << "Enter the elements of array: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Can be arranged: ";
    cout << consecutive(n, arr);
}
