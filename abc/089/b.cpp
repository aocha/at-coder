#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string ans = "Three";
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    string S;
    cin >> S;
    if (S == "Y")
    {
      ans = "Four";
      break;
    }
  }

  cout << ans << endl;
}
