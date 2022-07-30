#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;

int main(){
	
	string s;
	getline(cin,s);
	
	map<char,int> mp;
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	string str="";
	
	for(int i=0;i<s.length();i++){
		if(mp[s[i]]==1){
			str=str+s[i];
			str=str+" ";
		}
	}
	cout<<str<<endl;
}
