#include <bits/stdc++.h>

void fileRun() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif 
}

using namespace std;

int main() {
  fileRun();
  int n, q;
  cin >> n;

  string str[n];

  for (int i = 0;i < n;i++) {
    cin >> str[i];
  }

  cin >> q;
  string checkStr[q];
  for (int i = 0;i < q;i++) {
    cin >> checkStr[i];
  }

  for (int i = 0;i < q;i++) {
    int flag = 0;
    for (int j = 0;j < n;j++) {
      if (checkStr[i] == str[j]) flag++;
    }
    cout << flag << endl;
  }

}