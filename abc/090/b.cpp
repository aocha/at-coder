#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int A, B, d[5], ans = 0;
  cin >> A >> B;

  for (int i = A; i <= B; i++)
  {
    int temp = i;
    for (int j = 0; j < 5; j++)
    {
      d[j] = temp % 10;
      temp /= 10;
    }

    if (d[0] == d[4] && d[1] == d[3])
      ans++;
  }

  cout << ans << endl;
}
