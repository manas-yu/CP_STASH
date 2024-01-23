
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define f(i, s, e) for (int i = s; i < e; i++)
#define cf(i, s, e) for (int i = s; i <= e; i++)
#define rf(i, e, s) for (int i = e - 1; i >= s; i--)
#define all(v) v.begin(), v.end()
const int maxN = 2e5;
void solve()
{
    // TODO: Implement your solution here
}
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return b.ss > a.ss;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    sort(a.begin(), a.end());
    int s = 0;
    for (int &v : a)
    {
        if (v > s + 1)
        {
            cout << s + 1 << '\n';
            return 0;
        }
        s += v;
    }
    cout << s + 1 << '\n';
    return 0;
}
