#include<iostream>
using namespace std;
void GiaiTheThao(int n){
	for(int i=1975;i<n;i++){
		if(i>=1988&&i%4==0){
			cout<<"Nam "<<i<<" co to chuc Olympic va Euro."<<endl;
		}
		if(i>=1990&&i%4==0){
			cout<<"Nam "<<i<<" co to chuc World Cup."<<endl;
		}
		if(i>=1995&&(i+1)%2==0){
			cout<<"Nam "<<i<<" co to chuc SEA games."<<endl;
		}
		if(i>1996&&i%2==0){
			cout<<"Nam "<<i<<" co to chuc Tiger Cup."<<endl;
		}
	}
}

int main(){
	int n;
	Nhap:
		cout<<"Nhap so nam:";cin>>n;
	if(n<1975){
		cout<<"So nam khong hop le!";
		goto Nhap;
	}
	GiaiTheThao(n);
}
