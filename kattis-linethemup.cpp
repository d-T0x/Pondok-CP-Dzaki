#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin >> n;
	
	vector<string> v(n);
	string status1 = "", status2="";
	
	for(int i =0 ;i < n;i++){
		cin >> v[i];
	}
	
	for(int i = 0;i < n-1;i++){
		if(i == 0){
			if(v[i] > v[i+1]) status1 = "DECREASING";
			else status1 = "INCREASING";
		}
		if(v[i] > v[i+1]) status2 = "DECREASING";
		else if (v[i] < v[i+1]) status2 = "INCREASING";
		if(status1 != status2){
			cout << "NEITHER";
			return 0;
		}
	}
	cout << status2;
}