#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
int i,n,p;
char let [100];
cout<<"input kata:"; cin>>let;
cout<<"terbalik:";
n=strlen(let);
for (i=n-1;i>=0;i--){
    cout<<let[i];
}

return 0;

}
