#include<bits/stdc++.h>

using namespace std;
int gcf(int a,int b){
	if(a==0){
		return b;
	}
	if(b==0){
		return a;
	}
	
	if(a==b){
		return a;
	}
	
	if(a>b){
		gcf(a-b,b);
	}else{
		gcf(a,b-a);
	}
}
int main(){
	
	int a,b;
	cin>>a>>b;
	
	cout<<gcf(a,b)<<endl;
}
