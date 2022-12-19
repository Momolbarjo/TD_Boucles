#include <stdio.h>
#include <conio.h>
#include <unistd.h>


void sapin (int n) {




    for(int i=0;i<n;i++)
{

        for(int j=(n-i)-1;j>0;j--){

        printf(" ");

    }
            for(int c=(2*i)+1;c>0;c--)
            {
                printf("*");
            }

printf("\n");


}

for(int v=1;v<n;v++)
{

        for(int k=(n-v)-1;k>0;k--){

        printf(" ");

    }
            for(int z=(2*v)+1;z>0;z--)
            {
                printf("*");
            }

printf("\n");



}

for(int v=1;v<2;v++)
{

        for(int k=2*(n-v)-n+v;k<=2*(n-v)-10/8;k++){

        printf(" ");

    }
            for(int z=1;z<=1;z++)
            {
                printf("|");
            }

printf("\n");
}
}
void main(){

int n;

    printf("Entrez la hauteur souhaiter:\n");
    scanf("%d",&n);
    system("COLOR 0A");
    sapin(n);
    sleep(1);
    system("cls");
    system("COLOR 0C");
    printf("Entrez la hauteur souhaiter:\n");
    scanf("%d",&n);
    sapin(n);
    sleep(1);
    system("cls");
    system("COLOR 0B");
    printf("Entrez la hauteur souhaiter:\n");
    scanf("%d",&n);
    sapin(n);
    sleep(1);
    system("cls");
    system("COLOR 0D");
    printf("Entrez la hauteur souhaiter:\n");
    scanf("%d",&n);
    sapin(n);
    sleep(1);
    system("cls");
    system("COLOR 0E");
    printf("Entrez la hauteur souhaiter:\n");
    scanf("%d",&n);
    sapin(n);
    sleep(1);
    system("cls");
    system("COLOR 0C");
    printf("Entrez la hauteur souhaiter:\n");
    scanf("%d",&n);
    sapin(n);
    sleep(1);
    system("cls");

     n=7;

    system("COLOR 0A");
    sapin(n);
    sleep(1);
    system("COLOR 0C");
    sleep(1);
    system("COLOR 0B");
    sleep(1);
    printf("\n");
    system("COLOR 0D");
    sleep(1);
    system("COLOR 0E");
    sleep(1);
    system("COLOR 0C");
    sleep(1);
    system("COLOR 0B");
    sleep(1);
    system("COLOR 0A");

}
