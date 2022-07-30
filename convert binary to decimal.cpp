#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	
	string str="";
	getline(cin,str);
	long ans=0;
	int k=0;
	for(int i=str.length()-1;i>=0;i--){
		int t=(int)str[i]-'0';
		t=t* pow(2,k);
		ans=ans+t;
		k++;
	}
	cout<<ans<<endl;
}
