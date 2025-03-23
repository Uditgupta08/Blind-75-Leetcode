#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int n : nums)
    {
        if (sum < 0)
        {
            maxi = max(maxi, sum);
            sum = 0;
        }
        sum += n;
        maxi = max(maxi, sum);
    }
    return maxi;
}
int main()
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(a) << endl;
}