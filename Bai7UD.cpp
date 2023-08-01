#include<iostream>
using namespace std;
int HopLe(int n,int t){
	if(((t<1)&&(t>12))||((n<1)&&(n>31))){
		return 0;
	}
	else if(t==2){
		if(n>28){
			return 0;
		}
	}
	else if((t==4||t==6||t==9||t==11)&&(n==31)){
		return 0;
	}
	else if((t==1||t==3||t==5||t==7||t==8||t==12)&&(n>31)){
		return 0;
	}
}
int SoNgay(int t){
	if((t==4||t==6||t==9||t==11))
		return 30;
	else if(t==2)
		return 28;
	else
		return 31;
}
void HomSau(int n,int t){
	if((t==4||t==6||t==9||t==11)&&(n==30)){
			cout<<"Ngay ke tiep:"<<1<<"/"<<t+1<<endl;
	}
	else if((t==1||t==3||t==5||t==7||t==8||t==10||t==12)&&(n==31)){
		cout<<"Ngay ke tiep:"<<1<<"/"<<t+1<<endl;
	}
	else if((t==2)&&(n==28)){
		cout<<"Ngay ke tiep:1/3"<<endl;
	}
	else if((t==12)&&(n==31)){
		cout<<"Ngay ke tiep:1/1"<<endl;
	}
	else{
		cout<<"Ngay ke tiep:"<<n+1<<"/"<<t<<endl;
	}
}
void HomTruoc(int n,int t){
	if((t==2||t==4||t==6||t==9||t==11)&&(n==1)){
			cout<<"Ngay truoc do:31/"<<t-1<<endl;
	}
	else if((t==5||t==7||t==8||t==10)&&(n==1)){
		cout<<"Ngay truoc do:30/"<<t-1<<endl;
	}
	else if((t==3)&&(n==1)){
		cout<<"Ngay truoc do:28/2"<<endl;
	}
	else if((t==1)&&(n==1)){
		cout<<"Ngay truoc do:1/1"<<endl;
	}
	else{
		cout<<"Ngay truoc do:"<<n-1<<"/"<<t<<endl;
	}
}
int main(){
	int n,t;
	do{
	cout<<"Nhap ngay va thang:";cin>>n>>t;
	if(HopLe(n,t)!=0){
		SoNgay(t);
		HomSau(n,t);
		HomTruoc(n,t);
	}
	else{
		cout<<"Ngay thang khong hop le hay nhap lai!"<<endl;
	}
	}while(HopLe(n,t)==0);
}
