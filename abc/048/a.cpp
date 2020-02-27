#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string ans = "", prefix, s, suffix;
  cin >> prefix >> s >> suffix;
  cout << ans + prefix.at(0) + s.at(0) + suffix.at(0) << endl;
}
