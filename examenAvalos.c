#include <stdio.h>

//AVALOS NAVARRETE JOSE DE JESUS


float potencia(int base, int exp);
int main()
{
int base, exp;
float res;

 printf("Introduce la base de la potencia:");
 scanf("%i", &base);

 printf("Introduce el expontente:");
 scanf("%i",&exp);

 res=potencia(base,exp);

 printf ("La potencia de %i^%i es:%.1f\n",base,exp,res);

 return 1;
}


float potencia(int base, int exp)
{
 float res;
if (exp == 0)
 res=1.0;
else if (exp > 0)
 {

res=base * potencia(base,exp - 1);
 }
else if (exp < 0)
 {

res= 1.0 / base *potencia(base,exp + 1);

 }
 return res;

}
