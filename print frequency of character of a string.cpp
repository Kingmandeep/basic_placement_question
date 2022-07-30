#include<bits/stdc++.h>
#include<string>
#include<map>

using namespace std;
int main(){
	string a;
	getline(cin,a);
	
	map<char,int> mp1;
	for(int i=0;i<a.length();i++){
		mp1[a[i]]++;
	}
	
	for(int i=0;i<a.length();i++){
		if(mp1[a[i]]>0){
			cout<<a[i]<<" : "<<mp1[a[i]]<<endl;
			mp1[a[i]]=0;
		}
	}
}
