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

void solve()
{
    // TODO: Implement your solution here
    int x, n, a;
    cin >> x >> n;
    set<int> s;
    s.insert(0);
    s.insert(x);
    multiset<int> ms;
    ms.insert(x);
    while (n--)
    {
        cin >> a;
        auto it = s.lower_bound(a);
        auto it2 = it;
        --it2;
        // debug2(*it,*it2)
        ms.erase(ms.find(*it - *it2));
        ms.insert(a - *it2);
        ms.insert(*it - a);
        // joker(ms)
        // auto last = ms.end()[1];
        cout << *--ms.end() << " ";
        s.insert(a);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    solve();

    return 0;
}