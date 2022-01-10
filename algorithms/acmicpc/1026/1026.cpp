#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int a[51];
int b[51];
long long ans;

bool compare(int i, int j) {
    return i > j;
}


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

  cin >> n;
  for(int i=0;i<n;i++) {
      cin >> a[i];
  }
  for(int i=0;i<n;i++) {
      cin >> b[i];
  }

  sort(a, a+n);
  sort(b, b+n, compare);

  ans =0;
  for(int i =0; i<n;i++) {
      ans += a[i] * b[i];
  }

  cout << ans;
  
  
  return 0;
}