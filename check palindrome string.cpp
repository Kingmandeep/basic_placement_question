#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
	string a;
	getline(cin,a);
	
	string str="";
	for(int i=0;i<a.length();i++){
		str=a[i]+str;
	}
	if(str==a){
		cout<<"Palindrome string"<<endl;
	}else{
		cout<<"Not Palindrome string"<<endl;
	}
}
