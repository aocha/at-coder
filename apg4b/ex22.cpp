#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> v(N);
  for (int i = 0; i < N; i++)
  {
    int a, b;
    cin >> a >> b;
    v.at(i).first = b;
    v.at(i).second = a;
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < N; i++)
  {
    cout << v.at(i).second << " " << v.at(i).first << endl;
  }
}
