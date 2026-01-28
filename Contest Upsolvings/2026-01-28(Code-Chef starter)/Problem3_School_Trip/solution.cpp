#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X,K;
	    cin>>N>>X>>K;
	    
	    
	    int r = X%K;
	    int change = r;
	    if (r != 0 && (N - X) >= (K - r)) {
            change = min(change, K - r);
        }

        cout << change << endl;
	    
	    
	}
	return 0;
	

}
