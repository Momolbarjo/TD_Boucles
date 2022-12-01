#include <stdio.h>

void main () {


int N,i,factoN=1;

    printf("Entrez la factorielle que vous souhaitez calculer : ");
        scanf("%d",&N);

for (int i=1;i<=N;i++)

factoN=factoN*i;


printf("Factorielle %d = %d",N,factoN);
}





















