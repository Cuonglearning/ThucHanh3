#include<iostream>
using namespace std;
int UocChung(int a,int b){
	for(int i=min(a,b);i>0;i--){
		if(a%i==0&&b%i==0){
			return i;
			break;
		}
	}
}

int BoiChung(int a,int b){
	for(int i=max(a,b);i<=a*b;i++){
		if(i%a==0&&i%b==0){
			return i;
			break;
		}
	}
}
int main(){
	int a,b;
	Nhap:
	cout<<"Nhap hai so:";cin>>a>>b;
	if(a<0||b<0){
		cout<<"Khong hop le!"<<endl;
		goto Nhap;
	}
	cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" la:"<<UocChung(a,b)<<endl;
	cout<<"Boi chung nho nhat cua "<<a<<" va "<<b<<" la:"<<BoiChung(a,b)<<endl;
}
