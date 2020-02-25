#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  int ans = 0;

  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    ans += min(abs(x - 0), abs(x - K));
  }

  cout << ans * 2 << endl;
}
