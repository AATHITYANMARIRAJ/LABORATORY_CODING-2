
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string b;
	cout<<"enter the string\n";
	getline(cin,a);
	transform(a.begin(),a.end(),a.begin(),::tolower);//converting the string to lowercase
	int n=a.length();
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]==' '){
			cout<<"hi"<<"\n";
			b+=a[i];
		}
	}
	
	cout<<"the string in lowercase is \n"<<b;
	return 0;
}
