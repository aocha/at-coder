#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  rep(i, n - 2)
  {
    if (s.at(i) == 'A' && s.at(i + 1) == 'B' && s.at(i + 2) == 'C')
    {
      ans++;
    }
  }
  cout << ans << endl;
}
