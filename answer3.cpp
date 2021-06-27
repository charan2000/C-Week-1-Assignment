#include <bits/stdc++.h>
using namespace std;

int removes_duplicates(int arr[], int size)
{
    if (size == 0 || size == 1)
        return size;

    int temp[size];

    int j = 0;
    for (int i = 0; i < size - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    temp[j++] = arr[size - 1];

    for (int i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    size = removes_duplicates(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}