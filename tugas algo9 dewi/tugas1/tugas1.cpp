#include<stdio.h>
#include<conio.h>

int main()
{int nilai [5],x;

printf("memasukan nilai:\n");
for(x=0;x<5; x++)
{
    printf("Nilai Angka:");scanf("%d",&nilai[x]);
}
printf("\n");
printf("Membaca nilai:\n");
for(x=0;x<5;x++)
{
    printf("Nilai angka:%d", nilai [x]);
}
getch();
}
