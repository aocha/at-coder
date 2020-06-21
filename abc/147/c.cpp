#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> testimony(n, vector<int>(n, -1));
  rep(i, n) {
    int a;
    cin >> a;
    rep(j, a) {
      int x, y;
      cin >> x >> y;
      testimony[i][x - 1] = y;
    }
  }

  int ans = 0;
  rep(bit, 1 << n) {
    vector<int> honest(n);
    rep(i, n) {
      if (bit & 1 << i) honest[i] = 1;
    }

    bool ok = true;
    rep(i, n) {
      if (honest[i]) {
        rep(j, n) {
          if (testimony[i][j] == -1) continue;
          if (testimony[i][j] != honest[j]) ok = false;
        }
      }
    }
    if (ok) ans = max(ans, __builtin_popcount(bit));
  }

  cout << ans << endl;
}
