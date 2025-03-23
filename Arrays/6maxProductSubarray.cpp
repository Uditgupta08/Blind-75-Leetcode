#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int pre = 1;
    int suff = 1;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
        {
            pre = 1;
        }
        if (suff == 0)
        {
            suff = 1;
        }
        pre = pre * nums[i];
        suff = suff * nums[n - i - 1];
        maxi = max(maxi, max(pre, suff));
    }
    return maxi;
}
int main()
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxProduct(a) << endl;
}