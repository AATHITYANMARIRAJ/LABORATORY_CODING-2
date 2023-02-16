#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cout<<"enter the string\n";
	cin>>a;
	string b=a;
	string c=a;
	int n;
	n=a.length();
	int n1=n-1;
	for(int i=0;i<n;i++){
		swap(a[i],b[n1]);
		n1--;
	}
	 
	if(a==c){
		cout<<a<<" is a palindrome";
	} 
	else{
		cout<<a<<" is not a palindrome";
	}
	return 0;
}
