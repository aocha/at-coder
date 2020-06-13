#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// nに含まれる2の素因数の数を返す
int f(int n)
{
  int res = 0;
  while (n % 2 == 0)
  {
    n /= 2;
    res++;
  }
  return res;
}

// 最大公約数
int gcd(int a, int b)
{
  return b ? gcd(b, a % b) : a;
}

// 最小公倍数
int lcm(int a, int b)
{
  return a / gcd(a, b) * b;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a.at(i);

  // 小数を除去するために式変形し、全てのaについて2で割る
  rep(i, n) a.at(i) /= 2;

  // 2の素因数の数(t)が全てのaで同じことを確認
  int t = f(a.front());
  rep(i, n)
  {
    if (f(a.at(i)) != t)
    {
      cout << 0 << endl;
      return 0;
    }
    a.at(i) = a.at(i) / pow(2, t);
  }

  // aの最小公倍数を求める
  m = m / pow(2, t);
  int l = 1;
  rep(i, n)
  {
    l = lcm(l, a.at(i));
    if (l > m)
    {
      cout << 0 << endl;
      return 0;
    }
  }

  // m以下の最小公倍数×奇数の数を求める
  m /= l;
  int ans = (m + 1) / 2;
  cout << ans << endl;
}
