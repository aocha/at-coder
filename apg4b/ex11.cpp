#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, A;
  cin >> N >> A;
  int sum = A;

  for (int i = 0; i < N; i++)
  {
    string op;
    int B;
    cin >> op >> B;

    if (op == "+")
    {
      sum += B;
    }
    else if (op == "-")
    {
      sum -= B;
    }
    else if (op == "*")
    {
      sum *= B;
    }
    else if (op == "/" && B != 0)
    {
      sum /= B;
    }
    else
    {
      cout << "error" << endl;
      break;
    }

    cout << i + 1 << ":" << sum << endl;
  }
}
