#include<stdio.h>
#include<conio.h>

int main(){
   int x,y;
   printf("mengetahui kuadran dari inputan koordinat X dan Y . \n");
   printf("-----------------------------------------------------\n");
   printf("masukan nilai x:"); scanf("%i",&x);
   printf("masukan nilai y:"); scanf("%i",&y);
   if(x>0&&y>0)
    printf("kuadran I");
   if(x>0&&y<0)
    printf("kuadran II");
   if(x<0&&y<0)
    printf("kuadran III");
   if(x<0&&y>0)
    printf("kuadran IV");
   if(x==0&&y==0)
    printf("titik pusat");
   getch();


}
