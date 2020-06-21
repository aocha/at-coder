#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  rep(k, 60) {
    ll odd = 0, even = 0;
    rep(j, n) a[j] >> k & 1 ? odd++ : even++;
    ll sum = odd * even % mod;
    rep(j, k) sum = sum * 2 % mod;
    ans += sum;
    ans %= mod;
  }
  cout << ans << endl;
}
