#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
   char coba;
       do

       {

           int bil1;
           cout<<"masukan bilangan ke-1:";
           cin>>bil1;cout<<endl;
           int bil2;
           cout<<"masukan bilangan ke-2:";
           cin>>bil2;cout<<endl;
           double hasil=0;
           for(int i=1;i<=bil2;i++){
            hasil = hasil + bil1;

           }
           cout<<"\t\t\t" <<bil1<<" x"<<bil2<<" ' "<<hasil <<"\n"<<endl;
           cout<<"coba lagi ? (y)"<<endl;
           coba = getch();
           system ("cla");

       }
 while (coba=='y');
 char a=3;
 getch();
 system ("exit");
 return 0;


}
