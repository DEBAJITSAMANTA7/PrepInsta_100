// Largest Element in an array using C++
#include <iostream>
using namespace std;
#include <algorithm>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            /* code */
        }
        
    }
    cout<<max;
    return 0;
}
