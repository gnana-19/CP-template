#include "bits/stdc++.h"
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
struct errichto_hash {
    const uint64_t RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        return splitmix64(x + RANDOM);
    }
};

// https://atcoder.jp/posts/518
// #include <atcoder/all>
// using namespace atcoder;

using ld = long double;
using ll = long long;


#define F first
#define S second
#define s(x) set<x>
#define m(x, y) map<x, y>
#define um(x, y) unordered_map<x, y>
#define Um(x, y) gp_hash_table<x, y, errichto_hash>
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
#define debb bool f = 1; string res = ""; for (auto it = a.begin(); it != a.end(); ++it) { auto x = *it; if (!f) { res += " "; } f = 0; res += to_string(x); }
#define dbbb bool f = 1; string res = ""; for (auto it = a.begin(); it != a.end(); ++it) { auto x = *it; if (!f) { res += " "; } f = 0; res += to_string(x.first) + " : " + to_string(x.second); }
string to_string(string a) {
    return a;
}
template<class A, class B> string to_string(pair<A, B> a) {
    string s = to_string(a.first) + " " + to_string(a.second);
    return s;
}
template<class T> string to_string(std::vector<T>& a) {
    debb; return res;
}
template<class T> string to_string(std::initializer_list<T> a) {
    debb; return res;
}
template<class T> string to_string(std::set<T>& a) {
    debb; return res;
}
template<class T, class H> string to_string(map<T, H>& a) {
    dbbb; return res;
}
template<class T, class H> string to_string(unordered_map<T, H>& a) {
    dbbb; return res;
}
template<class T, class H> string to_string(Um(T, H)& a) {
    dbbb; return res;
}
void write(char a) {
    cout << a;
}
template<class A> void write(A s) {
    cout << to_string(s);
}
void print() {}
template<class A, class... B> void print(const A& a, const B&...b) {
    write(a);
    if (sizeof...(b))
        write(" ");
    print(b...);
}
void println() {
    write("\n");
}
template<class A, class... B> void println(const A& a, const B&...b) {
    write(a);
    if (sizeof...(b))
        write(" ");
    println(b...);
}
template<class A> void scan(A& a) {
    cin >> a;
}
template<class A, class B> void scan(p(A, B)& p1) {
    scan(p1.F);
    scan(p1.S);
}
template<class A> void scan(vector<A>& a) {
    for (auto& x : a) scan(x);
}
template<class A, class... B> void scan(A& a, B&... b) {
    scan(a);
    scan(b...);
}
#ifdef LOCAL
void DBG() {
    cerr << "]" << endl;
}
char to_string(char a) {
    return a;
}
template<class H, class... T> void DBG(H h, T... t) {
    cerr << "{";
    cerr << to_string(h);
    cerr << "}";
    if (sizeof...(t))
        cerr << ", ";
    DBG(t...);
}
#define debug(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else 
#define debug(...) 
#endif
#define int long long

void solve() {
	
}

int32_t main() {
    fastio;
    int test_cases = 1;
    // scan(test_cases);
    for (int test_case = 1; test_case <= test_cases; ++test_case) {
        // cout << "Case #" << test_case << ": ";
        solve();
    }
}
