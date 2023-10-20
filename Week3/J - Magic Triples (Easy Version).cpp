// Author: Yash Lalchandani(QY)
// Connect on : WhatsApp Link: https://bit.ly/3RVznxY
// Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
// Connect on : Instagram Link: https://bit.ly/46I0kcl
// Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
// Date: October 10, 2023
// Description: This is a simple C++ program.

#include <assert.h>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long u64;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef unsigned long long ull;
typedef long double lld;
typedef priority_queue<ll> pqb;
typedef priority_queue<ll, vector<ll>, greater<ll>> pqs;
typedef priority_queue<pll> ppqb;
typedef priority_queue<pll, vector<pll>, greater<pll>> ppqs;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<pll> vpll;
typedef vector<double> vd;
typedef vector<pdd> vpdd;
typedef vector<vd> vvd;

//.................useful constant...................//
const int INF = 0x3f3f3f3f;
const double infd = 1e20;
const long long inf = 1e18;
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
const int dx2[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dy2[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//....................END useful constant...............//

//.................useful #define...................//
#define INF 0x3f3f3f3f
#define rep(i, n) for (int i = 0; i < (ll)n; ++i)
#define rep1(i, n) for (int i = 1; i <= (ll)n; ++i)
#define rep2(i, k, n) for (int i = (ll)k; i <= (ll)n; ++i)
#define repb1(i, n) for (int i = n; i >= 1; --i)
#define repb(i, n) for (int i = n; i >= 0; --i)
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define nn "\n"
#define pb push_back
#define x first
#define y second
#define vc vector<ll>
#define vvc vector<vector<ll>>
#define all(x) x.begin(), x.end()
#define add0(mu) mu.insert(mu.begin(), 0)
#define sortb(x) \
  sort(all(x));  \
  reverse(all(x));
#define discrete(ver) \
  sort(all(ver));     \
  ver.erase(unique(all(ver)), ver.end());
#define minl(v) *min_element(all(v))
#define maxl(v) *max_element(all(v))
#define lb(c, x) lower_bound(all(c), (x))
#define ub(c, x) upper_bound(all(c), (x))
#define lb1(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub1(c, x) distance((c).begin(), upper_bound(all(c), (x)))
//.................END useful #define...................//

//............ debug setup...............................//
#ifndef ONLINE_JUDGE
#define dd(x)        \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define dd(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T>
void _print(queue<T> v);
template <class T>
void _print(deque<T> v);
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);

template <class T>
void _print(queue<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(deque<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
//.............END debug setup..............//

//..........General setup .....................//
const int N = 500010;
ll n, m, k, p, q, b;
ll mod = 1e9 + 7;
//..........END General Setup....................//

//...............Main Program..................//

int main() {
  fastio();
  int T;
  cin >> T;

  // int T = 1;
  while (T--) {
    cin >> n;
    vector<ll> a(n + 1);
    map<ll, ll> mp;
    rep1(i, n) {
      cin >> a[i];
      mp[a[i]]++;
    }
    sort(all(a));
    int sz = sqrt(a.back() / a[1]);
    ll ans = 0;

    for (auto [x, y] : mp) {
      rep2(b, 2, sz) {
        if (!(x % (b * b))) {
          ans += y * mp[x / b] * mp[x / b / b];
        }
      }
      ans += y * (y - 1) * (y - 2);
    }
    cout << ans << nn;
  }
  return 0;
}