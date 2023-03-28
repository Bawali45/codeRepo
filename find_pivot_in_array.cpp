#include<iostream>
using namespace std;
int find_pivot(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int main()
{
    int arr[] = {3,4,5,1,9};
    int res = find_pivot(arr,5);
    cout<<res<<endl;
    return 0;
}