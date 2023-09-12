#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v(13, 0);
	for(int i = 0;i < 5;i++){
		string str;
		cin >> str;
		if(str[0] == 'A') v[0]++;
		else if(str[0] == 'T') v[9]++;
		else if(str[0] == 'J') v[10]++;
		else if(str[0] == 'Q') v[11]++;
		else if(str[0] == 'K') v[12]++;
		else v[(int(str[0]) - 48)]++;
	}
	
	int ans = 0;
	for(int i = 0;i <= 13;i++){
		ans = max(ans, v[i]);
	}
	
	cout << ans;
}