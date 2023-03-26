#include<iostream>
using namespace std;
int binary_search(int arr[],int key,int start, int end)
{
    
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(key==arr[mid])
        {
         return mid;
        }
        else if(key<arr[mid])
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int range(int arr[],int val)
{
    int start =0;
    int end = 1;
    while(val>arr[end])
    {
        int newstart = end+1;
        end = end+(end-start+1)*2;
        start = newstart;
    }
   
    return binary_search(arr,val,start,end);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    cin>>target;
    int res = range(arr,target);
    cout<<res<<endl;
    return 0;
}