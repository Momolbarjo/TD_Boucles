#include <stdio.h>


int main ( ) {

int N,i;
N=-1;

while (N <= 0){
printf(" Saisir un entier positif entiers \n" ) ;
scanf ("%d",&N) ;
}

/*for (i =0;i<=N;i++) {
    if (i%3 == 0) {
        printf("%d \n",i);
    }
}
*/

while (i<=N)
    if (i%3 == 0) {
        printf("%d \n",i);
        i=i+1;
    }
else {i=i+1;
}

}
