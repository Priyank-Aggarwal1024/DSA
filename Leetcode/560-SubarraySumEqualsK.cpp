#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> nums, int k)
{
    unordered_map<int, int> m;
    int sum = 0;
    int ans = 0;
    m[0]++;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        int x = sum - k;
        if (m.find(x) != m.end())
        {
            ans += m[x];
        }
        m[sum]++;
    }
    return ans;
}
int main()
{
    /*
    Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

    A subarray is a contiguous non-empty sequence of elements within an array.



    Example 1:

    Input: nums = [1,1,1], k = 2
    Output: 2
    Example 2:

    Input: nums = [1,2,3], k = 3
    Output: 2
    */
    vector<int> nums = {1, 1, 1};
    int k = 2;
    int ans = subarraySum(nums, k);
    cout << "Ans = " << ans << endl;
    return 0;
}