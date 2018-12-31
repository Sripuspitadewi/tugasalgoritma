#include<stdio.h>
int pecahan ();
int main(){
    pecahan();

}
int pecahan(){
int a,b,l,t;
printf("masukan pembilang:");
scanf("%d", &a);
printf("masukan penyebut:");
scanf("%d", &b);
t=a/b;
l=a%b;
if(a%b==0)
    printf("bilangan (%d/%d)\n di sederhanakan menjadi %d",a,b,t);
else if(a%b !=0)
    printf("bilangan (%d/%d)\n di sederhanakan menjadi (%d %d/%d) ",a,b,t,l,b);
}
