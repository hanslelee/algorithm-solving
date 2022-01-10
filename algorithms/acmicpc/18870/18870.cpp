#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> v;
vector<pair<int, int>> ans;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);

  cin >> n;

  int temp;
  for(int i=0;i<n;i++){
    cin >> temp;
    v.push_back({i, temp});
  }
  
  sort(v.begin(), v.end(), compare);

  ans.push_back({v[0].first, 0});

  for(int i=1;i<n;i++){
    if(v[i-1].second == v[i].second) ans.push_back({v[i].first, ans[i-1].second});
    else ans.push_back({v[i].first, ans[i-1].second+1});

  }

  sort(ans.begin(), ans.end());

  for(int i=0;i<n;i++){
      cout << ans[i].second << ' ';
  }
  
  return 0;
}