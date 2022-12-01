#include <stdio.h>

    void main () {

int N;
char etoile='*';
printf("Entrez un entier N strictement positif : ");
scanf("%d",&N);

if(N<=0){

    printf("Erreur");





}
else {

for(int i=1;i<=N;i++){

    for(int j=1;j<=i;j++){

        printf(" %c",etoile);


    }
printf("\n");
}








}

















}
