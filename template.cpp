#include "bits/stdc++.h"
using namespace std;

// https://atcoder.jp/posts/518
// #include <atcoder/convolution>
// #include <atcoder/dsu>
// #include <atcoder/fenwicktree>
// #include <atcoder/lazysegtree>
// #include <atcoder/math>
// #include <atcoder/maxflow>
// #include <atcoder/mincostflow>
// #include <atcoder/modint>
// #include <atcoder/scc>
// #include <atcoder/segtree>
// #include <atcoder/string>
// #include <atcoder/twosat>
// using namespace atcoder;

using ld = long double;
using ll = long long;

#define F first
#define S second
#define s(x) set<x>
#define um(x, y) unordered_map<x, y>
#define m(x, y) map<x, y>
#define p(x, y) pair<x, y>
#define v(x) vector<x>
#define min_heap(t) priority_queue<t, vector<t>, greater<t>>
#define max_heap(t) priority_queue<t>

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define bs binary_search
#define lb lower_bound
#define ub upper_bound

#define all(v) v.begin(), v.end()
#define ss(v) stable_sort(all(v))
#define fori(i, a, b) for (int i = a; i <= b; i++)
#define rofi(i, a, b) for (int i = a; i >= b; --i)
#define R(x) reverse(all(x));

const char nl = '\n';
const char sp = ' ';
const int mod1 = 1e9 + 7;
const int mod2 = 998244353;
const ld PI = acos(-1);

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define stprs(x) cout << fixed << setprecision(x);

// Taken from errichto's submissions.
// https://codeforces.com/contest/1408/submission/94342467
#define sim template <class c
#define ris return *this
#define dor > debug &operator<<
#define eni(x)                                                                    \
    sim > typename enable_if<sizeof dud<c>(0) x 1, debug &>::type operator<<(c i) \
    {
sim > struct rge
{
    c b, e;
};
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug
{
#ifdef LOCAL
    ~debug()
    {
        cerr << endl;
    }
    eni(!=) cerr << boolalpha << i;
    ris;
} eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair<b, c> d)
{
    ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d)
{
    *this << "[";
    for (auto it = d.b; it != d.e; ++it)
        *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
    sim dor(const c &)
    {
        ris;
    }
#endif
}
;
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

// variables and consts
// const int mod = mod1;
// const int mod = mod2;
// using mint = static_modint<mod>;
// -- variables and consts --

void solve()
{
}

int32_t main()
{
    int T = 1;
    // fastio
    // stprs(10);
    // cin >> T;
    // scanf("%d", &T);
    for (int test = 1; test <= T; test++)
    {
        // cout << "Case " << test << ": ";
        // cout << "Case #" << test << ": ";
        // cout << nl;
        // printf("Case %d: ", test);
        // printf("Case #%d: ", test);
        solve();
    }
    return 0;
}
