#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int A, B;
  char op;
  cin >> A >> op >> B;

  if (op == '+')
  {
    cout << A + B << endl;
  }
  else
  {
    cout << A - B << endl;
  }
}
