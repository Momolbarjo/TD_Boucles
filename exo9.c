#include <stdio.h>
#include <math.h>

    void main () {



        int  a ,puissance,b;

            printf("Saisir 2 entiers strictements positifs : \n");


                scanf("%d\n",&a);
                     scanf("%d",&b);

if (a >0 && b>0){

   puissance= pow(a,b);






        printf("a^b vaut %d",puissance);


                } else if ( a<=0 || b <=0) {






                    printf("Erreur !\n");


                                                }














    }
