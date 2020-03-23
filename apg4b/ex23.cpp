#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;
  map<int, int> m;
  for (int i = 0; i < N; i++)
  {
    int key;
    cin >> key;
    m[key]++;
  }
  int maxk = -1;
  int maxv = -1;
  for (auto p : m)
  {
    if (maxv < p.second)
    {
      maxk = p.first;
      maxv = p.second;
    }
  }
  cout << maxk << " " << maxv << endl;
}
