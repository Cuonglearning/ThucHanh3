#include<iostream>
using namespace std;
int Dao(int n){
	int S=0;
	while(n>0){
		S=S*10+n%10;
		n=n/10;
	}
	return S;
}

int main(){
	int n;
	cout<<"Nhap n:";cin>>n;
	cout<<"So dao:"<<Dao(n);
}


