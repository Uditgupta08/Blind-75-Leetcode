#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    int prev2 = 1;
    int prev1 = 1;
    for (int i = 1; i < n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
int main()
{
    cout << climbStairs(4) << endl;
}