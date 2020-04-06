#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string read_var_name()
{
  string name, eq;
  cin >> name >> eq;
  return name;
}

int ctoi(string str, map<string, int> m_int)
{
  return isdigit(str.at(0)) ? stoi(str) : m_int.at(str);
}

int read_int(map<string, int> m_int)
{
  string str;
  cin >> str;
  return ctoi(str, m_int);
}

int read_int_expression(map<string, int> m_int)
{
  int n = read_int(m_int);
  string str;

  do
  {
    cin >> str;

    if (str == "+")
    {
      n += read_int(m_int);
    }
    else if (str == "-")
    {
      n -= read_int(m_int);
    }
  } while (str != ";");

  return n;
}

vector<int> _read_vec(map<string, int> m_int)
{
  vector<int> vi;
  string str;

  while (true)
  {
    cin >> str;

    if (str == ",")
      continue;

    if (str == "]")
      break;

    vi.push_back(ctoi(str, m_int));
  }

  return vi;
}

vector<int> read_vec(map<string, int> m_int, map<string, vector<int>> m_vec)
{
  string str;
  cin >> str;
  return str == "[" ? _read_vec(m_int) : m_vec.at(str);
}

vector<int> read_vec_expression(map<string, int> m_int, map<string, vector<int>> m_vec)
{
  vector<int> vi = read_vec(m_int, m_vec);
  string str;

  do
  {
    cin >> str;

    if (str == "+")
    {
      vector<int> vii = read_vec(m_int, m_vec);
      rep(i, vi.size())
      {
        vi.at(i) += vii.at(i);
      }
    }
    else if (str == "-")
    {
      vector<int> vii = read_vec(m_int, m_vec);
      rep(i, vi.size())
      {
        vi.at(i) -= vii.at(i);
      }
    }
  } while (str != ";");

  return vi;
}

void print_vec(vector<int> vi)
{
  cout << "[ ";
  rep(i, vi.size())
  {
    cout << vi.at(i) << ' ';
  }
  cout << ']' << endl;
}

int main()
{
  int N;
  cin >> N;

  map<string, int> map_int;
  map<string, vector<int>> map_vec;

  rep(i, N)
  {
    string cmd;
    cin >> cmd;

    if (cmd == "int")
    {
      string var_name = read_var_name();
      int ret = read_int_expression(map_int);
      map_int.insert(make_pair(var_name, ret));
    }
    else if (cmd == "vec")
    {
      string var_name = read_var_name();
      vector<int> ret = read_vec_expression(map_int, map_vec);
      map_vec.insert(make_pair(var_name, ret));
    }
    else if (cmd == "print_int")
    {
      cout << read_int_expression(map_int) << endl;
    }
    else if (cmd == "print_vec")
    {
      print_vec(read_vec_expression(map_int, map_vec));
    }
  }
}
