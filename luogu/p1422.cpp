/*
ID: mengbo
TASK: 1422
LANG: C++

keywords:
if else if
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int e;
  float fee = 0.0;
  cin >> e;
  if (e <= 150) {
    fee = e * 0.4463;
  } else if ( 151 <= e && e <= 400) {
    fee = 150 * 0.4463;
    fee += (e - 150) * 0.4663;
  } else if ( 401 <= e) {
    fee = 150 * 0.4463;
    fee += (400 - 150) * 0.4663; // 400 - 150
    fee += (e - 400) * 0.5663;
  }
  printf("%0.1f", fee);
  return 0;
}