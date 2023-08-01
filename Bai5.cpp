#include<iostream>
using namespace std;
int GiaiThua(int n){
	int S=1;
	for(int i=1;i<=n;i++){
		S=S*i;
	}
	return S;
}

int ToHop(int n,int k){
	int C;
	C=(GiaiThua(n))/(GiaiThua(k)*GiaiThua(n-k));
}

int main(){
	int n,k;
	cout<<"Nhap n:";cin>>n;
	cout<<"Nhap k:";cin>>k;
	cout<<"C(n,k)="<<ToHop(n,k);
}
