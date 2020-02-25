#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, K, ans = 1;
  cin >> N >> K;

  for (int i = 0; i < N; i++)
    ans = min(ans * 2, ans + K);

  cout << ans << endl;
}
