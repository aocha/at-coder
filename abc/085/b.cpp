#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i, N)
  {
    cin >> d.at(i);
  }
  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());
  int current = 101, ans = 0;
  rep(i, N)
  {
    if (current == d.at(i))
      continue;

    current = d.at(i);
    ans++;
  }

  cout << ans << endl;
}
