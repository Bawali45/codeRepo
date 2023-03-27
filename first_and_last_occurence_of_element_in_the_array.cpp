#include<iostream>
using namespace std;
int first_occurence(int arr[],int size,int val)
{
    int start = 0;
    int end =  size-1;
    int mid = start+(end-start)/2;
    int ans =-1;
    while(start<=end)
    {
        if(arr[mid] ==val)
        {
          ans = mid;
          end = mid-1;
        }
        else if(arr[mid]<val)
        {
         start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int second_occurence(int arr[],int size,int val)
{
    int start = 0;
    int end =  size-1;
    int mid = start+(end-start)/2;
    int ans =-1;
    while(start<=end)
    {
        if(arr[mid] ==val)
        {
          ans = mid;
          start = mid+1;
        }
        else if(arr[mid]<val)
        {
         start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[5] = {1,2,3,3,5};
    int key;
    cin>>key;
    int first = first_occurence(arr,5,key);
    int second = second_occurence(arr,5,key);
    cout<<"The first occurene of the element is"<<first<<" "<<"The second occurence of the element is"<<second<<endl;
    return 0;
}