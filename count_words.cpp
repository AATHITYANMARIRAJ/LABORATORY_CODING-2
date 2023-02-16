#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cout<<"enter the string\n";
	getline(cin,a);
	int count=1;
	
	int n=a.length();
	for(int i=0;i<n;i++){
		if(a[i]==' '){
			count++;
		}
	}
	
	cout<<"the total words are:"<<count<<"\n";
	
	return 0;
}
