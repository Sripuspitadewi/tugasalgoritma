#include<iostream>
using namespace std;
int main(){
int bil1,bil2,bil3;
cout<<"bilangan1=";
cin>>bil1;
cout<<"bilangan2=";
cin>>bil2;
cout<<"bilangan3=";
cin>>bil3;
if(bil1<bil2)
{
    if(bil1<bil2)
    {
        cout<<bil1<<"nilai terkecil";

    }else{
    if(bil3<bil2)
    {
        cout<<bil3<<"nilai terkecil";
    }

    }
    }else{
    if(bil2<bil3)
    {
        cout<<bil2<<"nilai terkecil";

    }else{
    cout<<bil3<<"nilai terkecil";
    }

    }
}



