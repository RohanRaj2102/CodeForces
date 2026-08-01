void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  int cnt1 = 0, cnt2 = 0;
  for (int d = 0; d < n; d++) {
    bool valid = true;
    for (int t = 0; t < n; t++) {
      if (a[t] >= b[(t + d) % n]) {
        valid = false;
        break;
      }
    }
    if (valid) {
      cnt1++;
    }
  }
  for (int d = 0; d < n; d++) {
    bool valid = true;
    for (int t = 0; t < n; t++) {
      if (b[t] >= c[(t + d) % n]) {
        valid = false;
        break;
      }
    }
    if (valid) {
      cnt2++;
    }
  }

  cout << (long long)n * cnt1 * cnt2 << nl;
}