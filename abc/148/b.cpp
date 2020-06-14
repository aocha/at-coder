#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  string s, t;
  cin >> n >> s >> t;
  rep(i, n) cout << s.at(i) << t.at(i);
  cout << endl;
}
