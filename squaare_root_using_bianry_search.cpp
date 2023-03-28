#include<iostream>
using namespace std;
int square_root(int val)
{
    int start =0;
    int end = val;
    long long int mid = start+(end-start)/2;
    long long int ans =-1;
    while(start<=end)
    {
      long long int square = mid*mid;
      if(square == val)
      {
       return mid; 
      }
      if(square<val)
      {
        ans = mid;
        start = mid+1;
      }
      else {
        end = mid-1;
      }
      mid = start+(end-start)/2;
    }
    return ans;

}
int main()
{
    int num;
    cout<<"Enter the number which you want to square"<<endl;
    cin>>num;
    int res = square_root(num);
    cout<<"The answer the number is"<<res<<endl;
    return 0;
}