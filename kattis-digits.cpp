#include<bits/stdc++.h>
using namespace std;

int main(){
	while(cin >> str){
		if(str == "END") break;
		
		int cnt = 1, dig;
		while(str.length()!=1) {
			dig = str.length();
			str = to_string(dig);
			cnt++;
		}
		if(str == "1") cout << "1" << endl;
		else cout << cnt+1 << endl;
	}
}