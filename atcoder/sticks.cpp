#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#define ll long long int

using namespace std;

void solve(ll a, ll b, ll c) {
  b /= 2;
  ll temp = b;
  b = c;
  c = temp;

  ll ans = 0;
  vector<vector<ll>> cases{
      {0, 1, 1}, {2, 0, 1}, {1, 2, 0}, {3, 1, 0}, {5, 0, 0}};

  for (vector<ll> arr : cases) {
    ll k = a + b + c;
    if (arr[0] > 0) {
      k = min(k, a / arr[0]);
    }
    if (arr[1] > 0) {
      k = min(k, b / arr[1]);
    }
    if (arr[2] > 0) {
      k = min(k, c / arr[2]);
    }
    ans += k;
    a -= arr[0] * k;
    b -= arr[1] * k;
    c -= arr[2] * k;
  }
  cout << ans << endl;
}

int main() {

  ll t;
  cin >> t;
  while (t--) {
    ll a, b, c;
      cin >> a >> b >> c;
    solve(a, b, c);
  }

  return 0;
}
