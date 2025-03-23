#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int rem = target - nums[i];
        if (m.find(rem) != m.end() && m[rem] != i)
        {
            return {i, m[rem]};
        }
    }
    return {};
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
}