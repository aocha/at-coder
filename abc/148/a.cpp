#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int a, b;
  cin >> a >> b;
  rep(i, 3)
  {
    int ans = i + 1;

    if (ans != a && ans != b)
    {
      cout << ans << endl;
      break;
    }
  }
}
