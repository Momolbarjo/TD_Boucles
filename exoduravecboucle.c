#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void main () {

float S,L,C,X,H,m,HH,RR,GG,BB;
unsigned char R,G,B;
int div;


do {
printf("S  =    ");
scanf("%f", &S);
printf("L  =    ");
scanf("%f", &L);
printf("H  =    ");
scanf("%f", &H);

 if((S>1.0 || S<0.0)||(L>1.0 || L<0.0) || ( H >=360 || H<0) ){
    printf("Pas possible \n");
 }
else {

    float a=fabs((2*L)-1);
      C=S*(1- a);
      m=L-(C/2);
HH=H/60;
div= HH/2;
float b=HH-(div*2);
X=C*(1-b);


 if(H<360.0 && H>=300) {

    RR=C , GG =0, BB=X;

}


else if(H<300.0 && H>=240) {

    RR=X , GG =0, BB=C;


}

else if(H<240.0 && H>=180) {
    RR=0, GG=X,BB=C;

}

 else if(H<180.0 && H>=120) {

    RR=0 , GG =C, BB=X;


}


 else if(H<120.0 && H>=60.0) {

 RR=X , GG =C, BB=0;


}

 else if(H<60.0 && H>=0.0) {

 RR=C, GG=X, BB=0;


}


R=(255*(RR+m));
G=(255*(GG+m));
B=(255*(BB+m));

printf("(R=%d,G=%d,B=%d)\n",R,G,B);

}

} while ((S<=1.0 || S>=0.0)||(L<=1.0 || L>=0.0) || ( H <360 || H>=0) );


    }



