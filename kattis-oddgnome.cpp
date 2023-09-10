#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
		
		vector<int> v(n);
		
		for(int i = 0;i < n;i++){
			cin >> v[i];
		}
		
		for(int i = 1;i < n;i++){
			//cout << i << ' ' << v[i] << ' ' << v[i-1] << endl;
			if(abs(v[i-1]-v[i]) != 1 or v[i] < v[i-1]){
				cout << i+1 << endl;
				break;
			}
		}
	}
}