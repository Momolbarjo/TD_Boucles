#include <stdio.h>


void sapin (int n) {


    scanf("%d",&n);

    for(int i=1;i<=n;i++)
{
    printf("  ");
    printf("  ");
    printf("  ");
    printf("  ");
    for(int j=1;j<=i;j++){

        printf("*");

    }

printf("\n");


}

for(int l=1;l<=n;l++)
{
     printf("  ");
     printf("  ");
     printf("  ");
     printf("  ");
    for(int k=1;k<=l;k++){

        printf("*");

    }
printf("\n");







}


printf("  ");
printf("  ");
printf("  ");
printf("  ");

printf("@\n");

printf("  ");
printf("  ");
printf("  ");
printf("  ");

printf("@");


    }


void main(){

int n;

    printf("Entrez la hauteur souhaiter:");
    sapin(n);






}
