#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, sum = 0;
  cin >> N;
  vector<int> vec(N);

  for (int i = 0; i < N; i++)
  {
    cin >> vec.at(i);
    sum += vec.at(i);
  }

  int avg = sum / vec.size();
  for (int i = 0; i < vec.size(); i++)
  {
    cout << abs(avg - vec.at(i)) << endl;
  }
}
