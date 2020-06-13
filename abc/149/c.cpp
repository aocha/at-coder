#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  cin >> x;
  // ある数値xに約数があるかどうかは、xの平方根以下の素数でx割り切れるかどうかで分かる
  // 逆にxが割り切れないのであればそれは素数と言える
  while (true)
  {
    int n = sqrt(x);
    bool is_prime = true;

    for (int i = 2; i < n; i++)
    {
      if (x % i == 0)
      {
        is_prime = false;
        break;
      }
    }

    if (is_prime)
      break;

    x++;
  }

  cout << x << endl;
}
