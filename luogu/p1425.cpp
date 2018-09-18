/*
ID: mengbo
TASK: P1425
LANG: C++

keywords:
if else
*/

#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (d > b) {
    cout << c - a << " " << d - b << endl;
  } else {
    cout << (c - 1) - a << " " << (d + 60) - b << endl;
  }
  return 0;
}