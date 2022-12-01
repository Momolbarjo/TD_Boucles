#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

    void main () {

int secondes,secondes1,minutes,heures,jours,j,i;

printf("Entrez le nombre de secondes : ");
scanf("%d",&secondes);

if(secondes <0){

    printf("Erreur ! ")  ;

}
else {
heures=secondes/3600;
j=secondes%3600;
minutes=j/60;
secondes1 = secondes%60;

 //printf("Votre nombre de secondes correspond a %d h : %d m: %d s",heures,minutes,secondes1 );

 for (secondes; secondes >= 0; secondes --)
{

    heures=secondes/3600;
    j=secondes%3600;
    minutes=j/60;
    secondes1 = secondes%60;
    printf("%d h : %d m: %d s \n",heures,minutes,secondes1 );
    sleep(1);
    if (secondes == 0) { printf(" \n BOOOOOOM \n");}

}
}



/*
3) non
*/










    }
