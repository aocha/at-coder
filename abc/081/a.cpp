#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cnt = 0;
  string S;
  cin >> S;
  if (S[0] == '1')
    cnt++;
  if (S[1] == '1')
    cnt++;
  if (S[2] == '1')
    cnt++;
  cout << cnt << endl;
}
