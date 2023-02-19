/*
6.	Give a Statement “ I am Okay,Task Completed” and Delete all Conconents from String.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string a1;
	string b;
	cout<<"enter the string\n";
	getline(cin,a);
	int n=a.length();
	
	//for removing comma
	for(int j=0;j<n;j++){
		if(a[j]==','){
			continue;
		}              
		else{
			a1+=a[j];
		}
	}
	
	//converting the string to lowercase
	transform(a1.begin(),a1.end(),a1.begin(),::tolower);
	for(int i=0;i<n;i++){
		if(a1[i]=='a'||a1[i]=='e'||a1[i]=='i'||a1[i]=='o'||a1[i]=='u'||a1[i]==' '){
			b+=a1[i];
		}
	}
	
	cout<<"the string with vowels is \n"<<b;
	return 0;
}
