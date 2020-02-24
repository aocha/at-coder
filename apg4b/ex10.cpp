#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int A, B, i;
  cin >> A >> B;

  i = 0;
  cout << "A:";
  while (i < A)
  {
    cout << ']';
    i++;
  }
  cout << endl;

  i = 0;
  cout << "B:";
  while (i < B)
  {
    cout << ']';
    i++;
  }
  cout << endl;
}
