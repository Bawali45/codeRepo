#include <bits/stdc++.h>
using namespace std;
int square_root(int val)
{
    int start = 0;
    int end = val;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        int square = mid * mid;
        if (square < val)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (square > val)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double pricision(int val, int freq, int res)
{
    double ans = res;
    double factor = 1;
    for (int i = 0; i < freq; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < val; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    int res = square_root(num);
    double final_res = pricision(num, 3, res);
    cout << final_res << endl;
    return 0;
}