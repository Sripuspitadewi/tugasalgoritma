#include<iostream>
using namespace std;
typedef struct pecahan{
 int pb;
 int py;


};
int main(int argc, char * argv[])
{
    pecahan p1,p2;
    cout<<"mengubah bilangan pecahan ke bilangan bulat"<<endl;
    cout<<"masukan pembilang=";cin>>p1.pb;
    cout<<"masukan penyebut="; cin>>p2.py;
    cout<<"\t  "<<p1.pb<<endl;
    cout<<"\t p1=_-"<<endl;
    cout<<"\t  "<<p2.py<<endl;

    if("/")
    {


        cout<<"hasilnya="<<(p1.pb)/(p2.py)<<endl;
    }
    return 0;
}
