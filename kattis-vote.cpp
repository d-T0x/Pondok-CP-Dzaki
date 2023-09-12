#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int save = 0, idx = 0, total = 0, cnt = 0;
		for(int i = 0;i < n;i++){
			int num;cin >> num;
			total += num;
			if(num >= save){
				if(num > save){
					save = num;
					idx = i+1;
					cnt = 0;
				}
				else cnt++;
			}
		}
		
		if(cnt == 0){
			if(save > total/2){
				cout << "majority winner " << idx << endl;
			}
			else cout << "minority winner " << idx << endl;	
		}
		else cout << "no winner" << endl;
	}
}