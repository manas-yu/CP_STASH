#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool cmp(vector<int> a, vector<int> b)
    {
        return b[0] > a[0];
    }
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), cmp);
        vector<vector<int>> ans;
        if (intervals.size() < 2)
            return intervals;

        ans.push_back(intervals[0]);
        int j = 0;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (ans[j][1] >= intervals[i][0])
            {
                int k1 = ans[j][0];
                int k2 = max(intervals[i][1], ans[j][1]);
                ans.pop_back();
                ans.push_back({k1,
                               k2});
            }
            else
            {
                ans.push_back(intervals[i]);
                j++;
            }
        }
        return ans;
    }
};