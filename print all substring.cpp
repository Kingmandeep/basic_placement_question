#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void substring(string str,string ans){
	
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}
	substring(str.substr(1),ans);
	char c=str[0];
	
	substring(str.substr(1),ans+c);

}
int main(){
	
	string str="abc";
	string s="";
	substring(str,s);
}
