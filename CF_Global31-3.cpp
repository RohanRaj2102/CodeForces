#include <bits/stdc++.h>
using namespace std;
 
#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);
 
#define nl '\n'
 
void odd(int n, int k) {
  for (int i = 1; i <= k; i++) {
    cout << n << " ";
  }
};
 
void even(int n, int k) {
  vector<int> ans(k);
  int x = 31 - __builtin_clz(n);
  int tight = k;
  for (int i = x; i >= 0; i--) {
    if (n >> i & 1) {
      int leave = 0;
      if (tight) {
        leave = tight - 1;
        tight--;
      }
      for (int j = 0; j < k; j++) {
        if (j != leave) {
          ans[j] = ans[j] | 1 << i;
        }
      }
    } else {
      int rem = (k - tight) - (k - tight) % 2;
      int j = k - 1;
      while (rem--) {
        ans[j] = ans[j] | 1 << i;
        j--;
      }
    }
  }
  for (auto it : ans) {
    cout << it << " ";
  }
}
 
void solve() {
  int n, k;
  cin >> n >> k;
  if (k & 1) {
    odd(n, k);
  } else {
    even(n, k);
  }
  cout << nl;
}
 
int main() {
  fastio();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}