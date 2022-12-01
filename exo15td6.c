#include <stdio.h>

    void main() {

int N;
printf("Entrez un entier N strictement positif : ");
scanf("%d",&N);

if(N<=0){

    printf("Erreur");





}
else {

for(int i=1;i<=N;i++)
{
    for(int j=1;j<=i;j++){

        printf("*");

    }

printf("\n");


}

for(int l=1;l<=N;l++)
{
    for(int k=1;k<=l;k++){

        printf("*");

    }
printf("\n");







}
    }
    }

