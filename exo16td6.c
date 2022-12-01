#include <stdio.h>

    void main() {

int a,b,c,n,count=0;

printf("Entrez une valeur: ");
scanf("%d",&n);

for (a=1;a<=n;a++){
    for (b=1;b<=n;b++){
        for (c=1;c<=n;c++){

if(c>b && b>a && c>a){
        printf("%d,%d,%d\n",a,b,c);
        count++;

}


}


}



}

printf("Le nombre de triplet est de %d\n",count);







    }


