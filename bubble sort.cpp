#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[]={1,7,4,8,5,9,6,2,0,1};
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
}
