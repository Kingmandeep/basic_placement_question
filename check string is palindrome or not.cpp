#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	getline(cin,str);
	
	string s="";
	for(int i=0;i<str.length();i++){
		s=str[i]+s;
	}
	if(s==str){
		cout<<"String is palindrome"<<endl;
	}else{
		cout<<"String is not a palindrome"<<endl;
	}
}
