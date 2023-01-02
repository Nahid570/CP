#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int test;
	cin >> test;
	
	while(test--)
	{
	    int n,m;
	    cin >> n >> m;
	    int A[n];
	    int B[m];
	    for(int i=0; i<n; i++){
	        cin >> A[i];
	    }
	    for(int j=0; j<m; j++){
	        cin >> B[j];
	    }
	    
	    if(n==1 && m == 1){
	        cout << B[m-1] << endl;
	    }
	    
	    sort(A, A+n);
	    sort(B, B+m);
	    
	    long long s1 = 0;
	    for(int i=0; i<m; i++){
            cout << "s1" << endl;
	        s1 += A[i];
	    }
	   
	    long long s2 = 0;
	    for(int i=0; i<m; i++){
	        s2 += B[i];
	    }
	    cout << s1 << endl;
	    cout << s2 << endl;
 	    
	    if(s1 >= s2){
	        cout << "Nahid" << endl;
	    }
	    
	    
	}
	
	return 0;
}




















