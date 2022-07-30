#include<bits/stdc++.h>
using namespace std;

bool check(int sq, int n){
	
	if(sq==n){
		return true;
	}
	int rem=0,i=0;
	while(sq>0){
		int t=sq%10;
		rem=t*pow(10,i) + rem;
		if(rem==n){
			return true;
		}
		i++;
		sq/=10;
	}
	
	return false;
}

int main(){
	
	int n;
	cin>>n;
	
	long sq = n * n;
	
	if(check(sq,n)){
		cout<<"automorphic number"<<endl;
	}else{
		cout<<"NO Automorphic NUmber"<<endl;
	}
}
