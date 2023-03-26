#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int number = num;
    int sum = 0;
    while(num!=0)
    {
        int digit = num%10;
        sum = sum + pow(digit,3);
        num = num/10;
    }
    if( sum == number)
    {
        cout<<"The number is the armstrong number"<<endl;
    }
    else{
        cout<<"The number is not the armstong number"<<endl;
    }
    return 0;
}