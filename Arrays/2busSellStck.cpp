#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &a)
{
    int n = a.size();
    int maxi = INT_MIN;
    int mini = a[0];
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, a[i] - mini);
        mini = min(mini, a[i]);
    }
    if (maxi > 0)
    {
        return maxi;
    }
    return 0;
}
int main()
{
    vector<int> a = {2, 7, 11, 15};
    cout << maxProfit(a) << endl;
}