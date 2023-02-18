#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char quote[]="hi all hello";
	string b="hello";
	int flag=0;
	int n=b.length();
	char* word=strtok(quote," ");
	for(int i=1;i<n;i++){
		if(word==b){
			flag=1;
			break;
		}
		else{
			word=strtok(NULL," ");
		}
	}
	
	if(flag==1){
		cout<<"hello is present\n";
	}
	else{
		cout<<"hello is not present\n";
	}
	
	return 0;
}
