#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  ll num, times;

  cin >> num >> times;
  while (times--) {

    if (num % 10 == 0)
      num /= 10;

    else
      num--;
  }

  cout << num;

  return 0;
}
