#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll l = 0;
ll r = 1000000001;

ll d(ll n) { return to_string(n).size(); }

ll f(ll a, ll b, ll n) { return a * n + b * d(n); }

int main() {
  ll A, B, X;
  cin >> A >> B >> X;

  while (true) {
    if ((r - l) == 1) break;

    ll n = (l + r) / 2;
    ll x = f(A, B, n);

    if (X >= x) {
      l = n;
    } else {
      r = n;
    }
  }

  cout << l << endl;
}
