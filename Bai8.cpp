#include<iostream>
using namespace std;
void Tien(int n){
	int NamChuc=n/50000;
	n=n%50000;
	int HaiChuc=n/20000;
	n=n%20000;
	int MotChuc=n/10000;
	n=n%10000;
	int NamNghin=n/5000;
	n=n%5000;
	int HaiNghin=n/2000;
	n=n%2000;
	int MotNghin=n/1000;
	n=n%1000;
	cout<<NamChuc<<"x50.000 "<<HaiChuc<<"x20000 "<<MotChuc<<"x10000 "<<NamNghin<<"x5000 "<<HaiNghin<<"x2000 "<<MotNghin<<"x1000";
}

int main(){
	int n;
	Nhap:
	cout<<"Nhap so tien:";cin>>n;
	if(n<0||n%100!=0){
		cout<<"Khong hop le!";
		goto Nhap;
	}
	Tien(n);
}
