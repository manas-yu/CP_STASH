#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define f(i, s, e) for (int i = s; i < e; i++)
#define cf(i, s, e) for (int i = s; i <= e; i++)
#define rf(i, e, s) for (int i = e - 1; i >= s; i--)
#define all(v) v.begin(), v.end()

void solve()
{
    // TODO: Implement your solution here
}
int maxSubArray(vector<int> &nums)
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        currentSum = max(0, currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
