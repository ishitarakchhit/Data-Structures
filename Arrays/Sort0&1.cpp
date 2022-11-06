#include <iostream>
using namespace std;

void sort01(int arr[], int size)
{
    int i = 0, j = size - 1;

    while (i <= j)
    {
        if (arr[i] == 1 && arr[j] == 0)
            swap(arr[i], arr[j]);

        else if (arr[i] == 1 && arr[j] == 1)
            j--;
        else
            i++;
    }
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[7] = {0, 1, 0, 1, 1, 0, 1};

    sort01(arr1, 7);
    printarr(arr1, 7);
}
