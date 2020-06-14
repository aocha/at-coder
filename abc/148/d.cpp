#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;

  vector<int> a;
  int ans = 0;
  rep(i, n)
  {
    int tmp;
    cin >> tmp;

    if (a.size() + 1 != tmp)
    {
      ans++;
      continue;
    }

    a.push_back(tmp);
  }

  if (a.empty())
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
}
