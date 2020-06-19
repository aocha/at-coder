#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

struct Edge {
  int id, to;
};

vector<vector<Edge>> graph;
vector<int> k;

void dfs(int node, int color = -1, int parent = -1) {
  int paint = 1;
  rep(i, graph[node].size()) {
    Edge edge = graph[node][i];
    int child = edge.to;
    if (child == parent) continue;
    if (paint == color) ++paint;
    k[edge.id] = paint++;
    dfs(child, k[edge.id], node);
  }
}

int main() {
  int n;
  cin >> n;
  graph.resize(n);
  k.resize(n - 1);
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    graph[a].push_back((Edge){i, b});
    graph[b].push_back((Edge){i, a});
  }
  dfs(0);
  int maxv = 0;
  rep(i, k.size()) { maxv = max(maxv, k[i]); }
  cout << maxv << endl;
  rep(i, k.size()) { cout << k[i] << endl; }
}
