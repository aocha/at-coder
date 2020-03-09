#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++)
  {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> t(N, vector<char>(N, '-'));
  for (int i = 0; i < M; i++)
  {
    int a = A.at(i) - 1, b = B.at(i) - 1;
    t.at(a).at(b) = 'o';
    t.at(b).at(a) = 'x';
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (j != 0)
        cout << ' ';

      cout << t.at(i).at(j);
    }
    cout << endl;
  }
}
