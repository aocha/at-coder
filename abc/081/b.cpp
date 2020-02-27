#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, A, ans = 100000000 / 2;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> A;
    int cnt = 0;
    while (A % 2 == 0)
    {
      cnt++;
      A /= 2;
    }
    ans = min(ans, cnt);
    if (ans == 0)
      break;
  }

  cout << ans << endl;
}
