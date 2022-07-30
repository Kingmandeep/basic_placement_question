#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string s;
	getline(cin,s);
	string str="";
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
			str=str+s[i];
		}else if(s[i]==' '){
			str=str+" ";
		}
	}
	
	cout<<str<<endl;
}
