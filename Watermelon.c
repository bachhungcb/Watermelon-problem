#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int w;
scanf ("%d",&w);
/*
if ( (w-2)% 2 == 0 && w > 2){
    printf ("YES");
}
else {
    printf ("NO");
}
*/
(w-2) % 2 == 0 && w > 2 ? printf("YES") : printf ("NO");
return 0;
}
