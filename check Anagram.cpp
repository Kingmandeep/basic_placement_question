#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;

int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	if(a.length()!=b.length()){
		cout<<"Not Anagram"<<endl;
	}else{
		map<char,int> mp1;
	    map<char,int> mp2;
	    for(int i=0;i<a.length();i++){
		    mp1[a[i]]++;
	    }
	    for(int i=0;i<b.length();i++){
		    mp2[b[i]]++;
	    }
	    bool flag=true;
	    for(int i=0;i<b.length();i++){
	    	if(mp1[b[i]]!=mp2[b[i]]){
	    		flag=false;
	    		break;
			}
		}
		if(flag){
			cout<<"Anagram "<<endl;
		}else{
			cout<<"Not Anagram"<<endl;
		}
	}
	
	
	
}
