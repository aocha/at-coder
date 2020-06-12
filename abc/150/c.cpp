#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  vector<int> v(n), p(n), q(n);

  rep(i, n) { v.at(i) = i + 1; }
  rep(i, n) { cin >> p.at(i); }
  rep(i, n) { cin >> q.at(i); }

  int idx = 1, pc = -1, qc = -1;
  do
  {
    if (v == p)
    {
      pc = idx;
    }
    if (v == q)
    {
      qc = idx;
    }

    if (pc != -1 && qc != -1)
    {
      break;
    }

    idx++;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(pc - qc) << endl;
}
