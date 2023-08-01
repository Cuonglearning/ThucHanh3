#include<iostream>
using namespace std;
int TongUoc(int n){
	int S=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			S=S+i;
		}
	}
	return S;
}

bool SoHoanThien(int n){
	if(TongUoc(n)==n)
		return true;
	return false;
}

int main(){
	int n;
	cout<<"Nhap n:";cin>>n;
	for(int i=1;i<=n;i++){
		if(SoHoanThien(i))
			cout<<"Cac so hon tien nho hon "<<n<<":"<<i<<endl;
	}
}
