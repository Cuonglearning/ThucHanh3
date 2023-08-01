#include<iostream>
using namespace std;
void Ve(int r,int d){
	for(int i=0;i<r;i++){
		for(int j=0;j<d;j++){
			if(i==0||i==r-1||j==0||j==d-1)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

int ChuVi(int r,int d){
	return (d+r)*2;
}

int DienTich(int r,int d){
	return d*r;
}

int main(){
	int r,d;
	cout<<"Nhap chieu rong va chieu dai:";cin>>r>>d;
	Ve(r,d);
	cout<<"Chu vi cua hinh chu nhat:"<<ChuVi(r,d)<<endl;
	cout<<"Dien tich hinh chu nhat:"<<DienTich(r,d)<<endl;
}
