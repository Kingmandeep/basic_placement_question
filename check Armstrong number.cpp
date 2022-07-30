#include<bits/stdc++.h>

using namespace std;

int len(int n){
	int count=0;
	while(n>0){
		count++;
		n/=10;
	}
	return count;
}


int main(){
	
	int n;
	cin>>n;
	
	int sum=0;
	
	int l = len(n);
	int a=n;
	while(n>0){
		int t=n%10;
		t=pow(t,l);
		sum=sum+t;
		n/=10;
	}
	if(sum==a){
		cout<<"Armstrong Number"<<endl;
	}else{
		cout<<"Not Armstrong Number"<<endl;
	}
}
