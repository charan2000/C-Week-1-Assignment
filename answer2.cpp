//Given an array arr of N integers.
//Find the contiguous sub-array with
//maximum sum. eg: N = 5

// There is a little confusion about longest sub-array
// from the question statement and output !!
// ? Proceeding based on output:

#include <bits/stdc++.h>
using namespace std;

int max_sum(int *arr, int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, -2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout << max_sum(arr, size, sum) << endl;
    return 0;
}