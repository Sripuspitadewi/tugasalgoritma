#include<iostream>
using namespace std;
int main(){
int hari,jam,menit,detik,sisa1,sisa2,sisa3;
cout<<"masukan jumlah detik=";
cin>>detik;

hari=detik/36400;
sisa1=detik-(hari*36400);
jam=sisa1/3600;
sisa2=sisa1-(jam*3600);
menit=sisa2/60;
sisa3=sisa2-(menit*60);
detik=sisa3;

cout<<hari<<"hari"<<jam<<"jam"<<menit<<"menit"<<detik<<"detik";
return 0;





}
