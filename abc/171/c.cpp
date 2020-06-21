#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  string ans = "";
  while (n > 0) {
    n--;
    ans += 'a' + n % 26;
    n /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
