#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while (T--){
	    int X, Y, Z;
	    cin>>X>>Y>>Z;
	    int pairs = min(X,Z) + (Y/2);
	    //(1,3) is the pair so the smaller of X and Z is taken 
	    cout<<pairs<<endl;
	    
	}
	return 0;
	
	

}
// Problem Link: https://www.codechef.com/problems/ADDING123q