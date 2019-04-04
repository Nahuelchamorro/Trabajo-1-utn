#include <stdio.h>
#include <stdlib.h>
#include "chamo.h"
int mostrarmenu();

int main()
{
    char seguir='s';
    int opcion=0;
    int operando1;
    int operando2;

    printf("Ingrese el operando1\n");
    scanf("%d",&operando1);
    printf("Ingrese el operando2\n");
    scanf("%d",&operando2);

       while(seguir=='s')
{
       printf("calcular la suma\n");
       printf("calcular la resta\n");
       printf("calcular la multiplicacion\n");
       printf("calcular la division\n");
       printf("calcular el factorial del operando1\n");
       printf("calcular el factorial del operando2\n");
       printf("Salir\n");
       scanf("%d",&opcion);

       switch(opcion)
{
      case 1:
        printf("El resultado de A+B es:%d\n",resultado1(int operando1, int operando2));
        break;
      case 2:
        printf("El resultado de A-B es:%d\n",resultado2(int operando1, int operando2));
        break;
      case 3:
        printf("El resultado de A*B es:%d\n",resultado3(int operando1, int operando2));
        break;
      case 4:
        printf("El resultado de A/B es:%f\n",resultado4(int operando1, int operando2));
        break;
      case 5:
        printf("El resultado del factorial de A es:%d\n",factorial1(int operando1));
        break;
      case 6:
        printf("El resultado de B es:%d\n",factorial2(int operando2));
        break;
      case 7:
        seguir='no';
        break;





}






}
  return 0;
}



