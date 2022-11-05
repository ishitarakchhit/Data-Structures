#include <iostream>
using namespace std;

bool unique(int arr[], int size)
{
    int a[100] = {0};
    int i, j;

    for (i = 0; i < size; i++)
    {   
        int count=0;
        if(arr[i]==1001)
        continue;

        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] == 1001;
            }
        }


        if(a[count]==1)
        return false;

        else 
        a[count]=1;
    }

    return true;
}




int main()
{
    int arr[6] = {1,2,2,1,1,3};

    cout << unique(arr, 6);
}