#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (auto it : nums)
    {
        m[it]++;
    }
    for (auto it : m)
    {
        if (it.second > 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> a = {2, 7, 11, 15};
    cout << containsDuplicate(a) << endl;
}