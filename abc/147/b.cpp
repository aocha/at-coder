#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;

  int ans = 0;
  rep(i, s.size() / 2)
  {
    if (s.at(i) == s.at(s.size() - (i + 1)))
      continue;

    ans++;
  }
  cout << ans << endl;
}
