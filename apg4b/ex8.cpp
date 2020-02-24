#include <bits/stdc++.h>
using namespace std;

int main()
{
  int p, price, N;
  string text;
  cin >> p;

  if (p == 2)
    cin >> text;

  cin >> price >> N;

  if (p == 2)
    cout << text << "!" << endl;

  cout << price * N << endl;
}
