#include<iostream>
using namespace std;
//  Celling number in the array  = Samallest element in the array which is grater than target or equal to the target.
int celling_number(int arr[],int size,int val)
{
    int start = 0;
    int end = size-1;
    int mid=start + (end-start)/2;
    while(start<=end)
    {
        if(val>arr[mid])
        {
         start = mid+1;
        }
        else if(val<arr[mid])
        {
           end =  mid-1;
        }
        else{
            return mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main()
{
int arr[] = {1,2,3,4,7,8,9};
int n = 7;
int key;
cin>>key;
int res = celling_number(arr,n,key);
cout<<res<<endl;
return 0;
}
