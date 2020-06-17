#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  string S;
  cin >> N >> S;
  rep(i, S.size()) {
    int next = ((S[i] - 'A') + N) % 26;
    S[i] = 'A' + next;
  }
  cout << S << endl;
}
