#include<bits/stdc++.h>
using namespace std;

int main(){
	int a , b;
		
	while(cin >> a >> b){
		if(a == b & a == 0) return 0;
		else if(a+b == 13) cout << "Never speak again." << endl;
		else if(a > b) cout << "To the convention." << endl;
		else if (a == b) cout << "Undecided." << endl;
		else cout << "Left beehind." << endl;
	}
	
}