#include <stdio.h>


void main () {
int nb,r;


scanf("%d",&nb);


for (int i=1; i<=nb;i++)
{
    if(nb%i==0)

    {
        r++;
     }
}

if (r>2) {



    printf("Le nombre n'est pas premier");

}

    else if (nb==1 || nb==0) {



    printf("Le nombre  n'est pas premier");


 }

 else {



    printf("Le nombre est  premier");


 }
 }
