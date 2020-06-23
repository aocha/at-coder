#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (n % 2 != 0) {
    cout << "No" << endl;
  } else {
    string ans = "Yes";
    rep(i, n / 2) {
      if (s[i] != s[i + (n / 2)]) {
        ans = "No";
        break;
      }
    }
    cout << ans << endl;
  }
}
