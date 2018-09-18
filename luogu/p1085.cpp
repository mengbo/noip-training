/*
ID: mengbo
TASk: p1085
LANG: C++

Keyword:
for
*/

#include <iostream>
using namespace std;

int main() {
  int unhappy_day = 0;

  for(int i = 1; i <= 7; i++) {
    int school, home;
    cin >> school >> home;
    if(school + home > 8 && unhappy_day == 0) {
      unhappy_day = i;
    }
  }

  cout << unhappy_day << endl;

  return 0;
}