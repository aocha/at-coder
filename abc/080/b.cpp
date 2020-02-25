#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, x = 0;
  cin >> N;
  int tmp = N;

  for (; tmp > 0;)
  {
    int mod = tmp % 10;
    tmp /= 10;
    x += mod;
  }

  if (N % x == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
