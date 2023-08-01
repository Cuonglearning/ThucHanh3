#include<iostream>
using namespace std;
int Tinh(int x,int n){
	int S=1;
	for(int i=1;i<=n;i++){
		S=S*x;
	}
	return S;
}

int main(){
	int x,n;
	cout<<"Nhap X:";cin>>x;
	cout<<"Nhap n:";cin>>n;
	cout<<"X^n="<<Tinh(x,n);
}
