#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  int maxv = max(A, max(B, C));
  int minv = min(A, min(B, C));
  cout << maxv - minv << endl;
}
