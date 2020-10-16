#include <bits/stdc++.h>
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
#define int long long
# define mod 1000000007 
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
#define bs binary_search
#define lb lower_bound
#define ub upper_bound

#define all(v) v.begin(), v.end()
#define ss(v) stable_sort(all(v))
#define fori(i, a, b) for (int i = a; i <= b; i++)
#define rofi(i, a, b) for (int i = a; i >= b; --i)
#define scn(v1) for(auto &x : v1) cin >> x;
#define deb(x) cout << #x << "=" << x << endl;
#define R(x) reverse(all(x));

#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define stprs(x) cout << fixed << setprecision(x);

int power(int a, int b, int m = mod)
{if(b==0)return 1;
 else if(b==1)return a%m;
 else{ll t=power(a,b>>1,m);
      t=(t * t)%m;
      if(b&1)
          return (t * a)%m;
      else 
          return t;
     }

const char nl = '\n';
const char sp = ' ';
const int mod1 = 1e9 + 7;
const int mod2 = 998244353;
const ld PI = acos(-1);

#define debug cerr
#define name(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

template<class A>
ostream& operator << (ostream& out, const set<A> &a) {
    out << "[";
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (it != a.begin())
            out << ", ";
        out << *it;
    }
    return out << "]";
}

template<class A>
ostream& operator << (ostream& out, const vector<A> &a) {
    // out << "[";
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (it != a.begin())
            // out << ", ";
            out << ' ';
        out << *it;
    }
    return out;
    return out << "]";
}

template<class A, class B>
ostream& operator << (ostream& out, const pair<A, B> &a) {
    return out <<  "(" << a.first << ", " << a.second << ")";
}

template<class A, class B>
ostream& operator << (ostream& out, const map<A, B> &a) {
    out << "[";
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (it != a.begin()) {
            out << ", ";
        }
        out << *it;
    }
    return out << "]";
}
template<class A, class B>
ostream& operator << (ostream& out, const unordered_map<A, B> &a) {
    out << "[";
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (it != a.begin()) {
            out << ", ";
        }
        out << *it;
    }
    return out << "]";
}

template<typename... T>
void read(T&... args) {
    ((cin >> args), ...);
}

template<typename... T>
void print(T... args) {
    ((cout << args), ...);
}

// variables and consts
// -- variables and consts --

void solve(void) {
    
}

int32_t main(void) {
    fastio
    int __ = 1;
    // read(__);
    while (__--) {
        solve();
    }
    return 0;
}