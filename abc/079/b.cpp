#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int64_t> numbers(100, -1);

int64_t lucas_number(int n)
{
  if (numbers[n] != -1)
    return numbers[n];

  if (n == 0)
    return 2;

  if (n == 1)
    return 1;

  numbers[n] = lucas_number(n - 1) + lucas_number(n - 2);
  return numbers[n];
}

int main()
{
  int N;
  cin >> N;
  cout << lucas_number(N) << endl;
}
