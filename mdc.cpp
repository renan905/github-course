#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	
	int d,b;
	cin >> b >> d;
	int menor=b;
	//int mdc;
	if(b>d)
		menor=d;
	
	
	for(int i = menor;; i--)
		
		if(d%i ==0 && b%i == 0){
			cout << i<<endl;
		break;
		}
	return 0;
}