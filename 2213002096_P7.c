#include<stdio.h>
#include <math.h>

int main(){
	
int a, b, c, d, e, f;

c=0;
d=0;
e=0;
f=0;

printf("Temperatura de referencia: ");
scanf("%d", &a);

while (f<1) {
	
printf("\nLectura de temperatura: ");
scanf("%d", &b);

if(b>a){
	
c=c+1;
}


if(b<a){
	
d=d+1;
}


if(b==a){

e=e+1;
}

printf("\nFinalizar registros:\n1) Si\n0) No\n");
scanf("%d", &f);
}

printf("\nRegistro de temperaturas:");	
printf("\nTemperaturas mayores: %d", c);
printf("\nTemperaturas menores: %d ", d);	
printf("\nTemperaturas iguales: %d ", e);	


if (c>d||c>e){
 printf("\n\nSALVESE QUIEN PUEDA");
}
return 0;	
}
