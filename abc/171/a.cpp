#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
              'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main() {
  char c;
  cin >> c;
  bool b = false;
  rep(i, 26) {
    if (a[i] == c) b = true;
  }
  if (b) {
    cout << 'a' << endl;
  } else {
    cout << 'A' << endl;
  }
}
