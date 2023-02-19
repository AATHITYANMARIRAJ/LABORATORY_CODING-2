#include <iostream>
#include <string>
using namespace std;
void substring(string,int,int);

void substring(string s,int start,int l){
	for(int k=start;k<(start+l);k++){
		cout<<s[k];
	}
	cout<<"\n";
}
int main(){
	string a;
	cout<<"enter the string\n";
	getline(cin,a);
	int start;
	cout<<"enter the starting position\n";
	cin>>start;
	int l;
	cout<<"enter the ending position\n";
	cin>>l;
	substring(a,start,l);
	return 0;
}
