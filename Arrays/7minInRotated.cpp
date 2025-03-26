#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] <= nums[e])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    return nums[e];
}
int main()
{
    vector<int> a = {11, 13, 15, 17};
    cout << findMin(a) << endl;
}