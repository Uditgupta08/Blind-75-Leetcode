#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &a)
{
    int n = a.size();
    vector<int> ans(n);
    ans[0] = 1;
    int pre = 1;
    int post = 1;
    ans[0] = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        pre = pre * a[i - 1];
        ans[i] = pre;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        post = post * a[i + 1];
        ans[i] = ans[i] * post;
    }
    return ans;
}
int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(a);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}