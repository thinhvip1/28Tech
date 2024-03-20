#include <bits/stdc++.h>

using namespace std;

void TC(){
	int n; cin >> n;
	vector<pair<int, int>> a(n);
	for(int i = 0 ; i < n; i++){
		int x; cin >> x;
		a[i].first = x;
		a[i].second = i;
	}
	sort(a.begin(), a.end());
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(a[i].second != i){
			swap(a[i].first, a[a[i].second].first);
			swap(a[i].second, a[a[i].second].second);
			if(a[i].second != i) --i;
			++ans;
		}
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		TC();

	}
}
