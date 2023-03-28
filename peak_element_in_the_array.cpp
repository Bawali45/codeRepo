#include<iostream>
using namespace std;
int main()
{
    int arr[] {1,2,3,4,5,6,4,3,2};
    int n = 9;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start = mid+1;
        }
        else 
        {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
   cout<<"The peek element at the index is "<<start<<endl; 
    
 return 0;   
}