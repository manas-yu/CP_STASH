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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int N;
    cin >> N;

    vector<long long> M(N);
    long long psums = 0;
    M[psums] = 1;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        psums += a;
        // Remember to account for negative sums
        M[(psums % N + N) % N]++;
    }
    //* find the prefix pair sum(0,j) and sum(0,i-1) which are equal while considering the negative numbers
    long long ans = 0;
    for (long long x : M)
    {
        /*
         * Calculating the # of pairs.
         * This calculates the pairs without
         * duplicates and reverse groups.
         */
        ans += x * (x - 1) / 2;
    }
    cout << ans << endl;
    return 0;
}
