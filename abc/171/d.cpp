#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  map<ll, ll> mp{};
  ll sum = 0;
  rep(i, n) {
    ll a;
    cin >> a;
    sum += a;
    mp[a]++;
  }

  ll q;
  cin >> q;
  rep(i, q) {
    ll b, c;
    cin >> b >> c;

    sum -= b * mp[b];
    sum -= c * mp[c];
    mp[c] += mp[b];
    mp[b] = 0;
    sum += b * mp[b];
    sum += c * mp[c];
    cout << sum << endl;
  }
}
