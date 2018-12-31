
#include<iostream>
using  namespace std;
typedef struct pecahan{
                       int pb,pb1,pb2,pb3;
                       };
                       int main(int argc, char*argv[]){


                       pecahan p1,p2;
                       cout<<"      * masukan bilangan p1=";
                       cin>>p1.pb;
                       cout<<endl;
                       cout<<"      ** masukan penyebutnya=";
                       cin>>p1.pb1;
                       cout<<endl;
                       cout<<"       *** masukan bilangan p2=";
                       cin>>p2.pb2;
                       cout<<endl;
                       cout<<"       **** masukan penyebutnya=";
                       cin>>p2.pb3;
                       cout<<endl;
                       cout<<"  p1="<<p1.pb<<"/"<<p1.pb1<<endl;
                       cout<<endl;
                       cout<<"    p2="<<p2.pb2<<"/"<<p2.pb3<<endl;
                       cout<<endl;
                       cout<<"   jika p1 x p2 "<<endl;
                       cout<<endl;
                       cout<<" maka hasilnya =("<<p1.pb<<" x " <<p2.pb2<<") / ("<<p2.pb3<<" ' "<<p1.pb1<<")"<<endl;
                       cout<<endl;

                       return 0;


                       }
