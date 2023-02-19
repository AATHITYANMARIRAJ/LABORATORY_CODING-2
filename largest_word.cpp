/*
10.	Take statement ,count words and find largest word in a statement.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string a1;
	string b;
	int arr[100];
	cout<<"enter the string\n";
	getline(cin,a);
    int n=a.length();
    
    for(int i=0;i<n;i++){
    	if(a[i]==','){
    		a1+=' ';
		}
    	else if((isalpha(a[i])!=0) || a[i]==' '){
    		a1+=a[i];//seperating alphabets in a string
		}
	}
	
	stringstream ss(a1);
	string word;
	int in=0;
	int c=0;
	
	//putting the count of every number in an array
	while(ss>>word){
		c++;
		int count=0;
		int n=word.length();
		for(int i=0;i<n;i++){
			count++;
		}
		arr[in]=count;
		in++;
	}
	cout<<"there are "<<c<<"words.\n";	
	//to find the greatest no
	int g_no=0;
	for(int k=0;k<c;k++){
		if(arr[k]>g_no){
			g_no=arr[k];
		}
	}
	
  //to print the greatest word
	stringstream gg(a1);
	string word1;
	while(gg>>word){
		c++;
		int count=0;
		int n=word.length();
		for(int i=0;i<n;i++){
			count++;
		}
		if(count==g_no){
			cout<<"the largest word is:-"<<word<<"\n";
		}
	}
	return 0;
}
