#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int jp[1000000];
int sgr[1000000];
vector<pair<int, int>> v;
int ans[1000000];


int main() {
  ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

  cin >> n;

  for(int i=0; i< n;i++) {
    cin >> jp[i];
  }
  for(int i=0; i< n-1;i++) {
    cin >> sgr[i];
  }

  if(n == 1) {
    cout << "�Ǻ����, �ߴ������ ã���ʴϴ�";
    return 0;
  }

  for(int i=0; i<n; i++) {
    v.push_back(make_pair(jp[i], sgr[i]));
  }

  sort(v.begin(), v.end());

  ans[0] = 1;

  for(int i=0; i<n;i++) {
    for(int j=i+1; j<n;j++){
      if(ans[j]) continue;
      if(v[j].first - v[i].first <= v[i].second) ans[j] = 1;
      else break;
    }
  }

  bool check = true;
  for(int i=0;i<n;i++) {
    if(ans[i] == 0) check = false;
  }

  if(check) {
    cout << "�Ǻ����, �ߴ������ ã���ʴϴ�";
  } else {
    cout << "���� �� ���� �ʾ��� �� ����";
  }
   
  return 0;
}