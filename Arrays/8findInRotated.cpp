#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums, int t)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] == t)
        {
            return mid;
        }
        else if (nums[mid] >= nums[s])
        {
            if (t >= nums[s] && t <= nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (t <= nums[e] && t >= nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {4, 5, 6, 7, 0, 1, 2};
    cout << findMin(a, 3) << endl;
}