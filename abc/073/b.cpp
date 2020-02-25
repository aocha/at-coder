#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, ans = 0;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int l, r;
    cin >> l >> r;
    ans += r - l + 1;
  }

  cout << ans << endl;
}
