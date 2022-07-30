#include<bits/stdc++.h>

using namespace std;

class Stack{
	
	public:
		int *arr;
		int top;
		int size;
	Stack(int size){
		this->size = size;
		arr = new int[size];
		top=-1;
	}
	
	public:
		void push(int val){
			if(size-top>1){
				top++;
				arr[top]=val;
			}else{
				cout<<"No Space "<<endl;
				return;
			}
		}
		
		void pop(){
			if(top==-1){
				cout<<"No element present"<<endl;
				return;
			}else{
				top--;
			}
		}
		void peek(){
			if(top==-1 && top<size){
				cout<<"No element"<<endl;
				return;
			}else{
				cout<<arr[top]<<endl;
				return;
			}
		}
		bool empty(){
			if(top==-1){
				return true;
			}else{
				return false;
			}
		}
};

int main(){
	Stack st(5);
	st.push(5);
	st.push(8);
	st.push(9);
	st.push(8);
	st.push(9);
	st.push(8);
	st.push(9);
	
	while(!st.empty()){
		st.peek();
		st.pop();
	}
}
