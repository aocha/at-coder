#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);

  rep(i, N)
  {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  vector<int> ans(2, 0);
  rep(i, N)
  {
    ans.at(i % 2) += a.at(i);
  }

  cout << ans.at(0) - ans.at(1) << endl;
}
