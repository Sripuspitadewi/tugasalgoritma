#include<iostream>
#include<conio.h>
using namespace std;
unsigned int bil2,bit2;
void konversi (unsigned int bil2){
if (bil2>1){
    konversi (bil2/2);
}
bit2=bil2%2;
cout<<bit2<<"";


}
int main(){
cout<<"masukan bilangan:";
cin>>bil2;
konversi (bil2);
cout<<endl<<endl;
getch;{};


cout<<"<=========================================>";
cout<<"\n NAMA : SRI PUSPITA DEWI \n";
cout<<"\n NIM  : 311810055 \n";
cout<<"\n KELAS: TI.18.D7 \n";
cout<<"<========================================>";

return 0;
}
