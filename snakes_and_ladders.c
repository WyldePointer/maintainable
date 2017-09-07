#include <stdio.h>
#define dsp printf

int    ma\
in(    vo\
id){int i\
,j,k,x;i=\
j=k    =x\
=0;    fo\
r(i=10;i>\
=1;i--){x\
=(i    %2\
)?9    :0\
;for(j=10\
,k=x;j>=1\
;j--   ){\
dsp    ("\
%3.d",(i*\
10)-k);k=\
(i%    2)\
?k-    1:\
k+1;}dsp(\
"\n");}re\
turn   0;}
/**    **/
