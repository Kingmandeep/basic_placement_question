#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n1=0,n2=1;
	
	int n;
	cin>>n;
	int next;
	while(n--){
		cout<<n1<<" ";
		next=n1+n2;
		
		n1=n2;
		n2=next;
	}
	

}
