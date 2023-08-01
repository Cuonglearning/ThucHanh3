#include<iostream>
using namespace std;
int GiaiThua(int n){
	int S=1;
	for(int i=1;i<=n;i++){
		S=S*i;
	}
	return S;
}
int main(){
	int n;
	Nhap:
	cout<<"Nhap so:";cin>>n;
	if(n<1){
		cout<<"Khong hop le!"<<endl;
		goto Nhap;
	}
	cout<<"Giai thua cua "<<n<<" la:"<<GiaiThua(n);
}
