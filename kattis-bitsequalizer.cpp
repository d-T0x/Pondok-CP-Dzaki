#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >> t;
	for(int j = 1;j <= t;j++){
		string a,b; cin >> a >>  b;
		
		int one = 0, two = 0, cnt1 = 0, cnt2 = 0, ques = 0;
		for(int i = 0;i < a.length();i++){
			if(a[i] == '1' and b[i] == '0')cnt1++;
			if (a[i] == '0' and b[i] == '1')cnt2++;
			if(a[i] == '1') one++;
			if(b[i] =='1')two++;
			if(a[i] == '?')ques++;
		}
		
		if(one > two){
			cout << "Case " << j << ": -1" << endl;
		}
		else if(ques == 0){
			cout << "Case " << j << ": "<< max(cnt1, cnt2) << endl; 
		}
		else if(ques > 0){
			if(one < two){
				cout << "Case " << j << ": "<< ques-abs(two-one) + abs(two-one) + max(cnt1, cnt2)<< endl;
			}
			else if(one == two){
				cout << "Case " << j << ": "<< ques-abs(two-one) + abs(two-one)*2 + max(cnt1, cnt2)<< endl;
			}
		}
	}
}