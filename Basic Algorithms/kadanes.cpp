#include <bits/stdc++.h>
using namespace std;
int maxSumSubarray(vector<int> nums)
{
    int mx = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            mx = max(mx, sum);
        }
    }
    return mx;
}
int kadanes(vector<int> nums)
{
    int sum = 0;
    int mx = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        mx = max(mx, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return mx;
}
int main()
{
    /*
     *  # It is an Algorithm to find the maximum sum subarray (It is the most important Algorithm).
     *  => Time  Complexity -: O(n).
     *  => Approach 1
     *      > Take a Loop from 0->size-1.
     *      > Then calculate the sum of each subarray.
     *      > Now Take a max variable and update max after calculate each subarray.
     *  => Approach 2 (Kadane's Algorithm)
     *      > take max = ar[0]
     *      > take sum = 0.
     *      > add each element in sum.
     *      > update max(variable).
     *      > if(sum<0) sum=0.
     */

    /*--------------------------------Approach 1--------------------------*/
    // Test cases  1.) [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    // Test cases  2.) [2 -1 2 3 4 -5]
    // Test cases  3.) [5,4,-1,7,8]
    // Test cases  4.) [1]
    // Test cases  5.) [-2 -3 -1 -4 -6]
    // Output  1.) 6
    // Output  2.) 10
    // Output  3.) 23
    // Output  4.) 1
    // Output  5.) -1
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = kadanes(v);
    cout << "The Maximum sum of subarray is : " << sum;
    return 0;
}