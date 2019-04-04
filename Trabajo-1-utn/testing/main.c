#include <stdio.h>
#include <stdlib.h>
#include "chamo.h"
int mostrarmenu();
// empezamos colocando un char que funcione como bandera//
int main()
{
    char seguir='s';
    int opcion=0;
    int operando1;
    int operando2;
    //pido el ingreso de los operandos//
    printf("Ingrese el operando1\n");
    scanf("%d",&operando1);
    printf("Ingrese el operando2\n");
    scanf("%d",&operando2);

       while(seguir=='s')
{      //pido la opcion que se va a calcular//
       printf("calcular la suma\n");
       printf("calcular la resta\n");
       printf("calcular la multiplicacion\n");
       printf("calcular la division\n");
       printf("calcular el factorial del operando1\n");
       printf("calcular el factorial del operando2\n");
       printf("Salir\n");
       scanf("%d",&opcion);

       switch(opcion)
{     //preparo los cases con los resultados de las funciones ya hechas//
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
          if(operando1==0 || operando2==0)
          {
            Printf("Error, no se puede dividir por 0, vuelva a intentarlo porfavor.");
          }
        printf("El resultado de A/B es:%f\n",resultado4(int operando1, int operando2));
        break;
      case 5:
        printf("El resultado del factorial de A es:%d\n",factorial1(int operando1));
        break;
      case 6:
        printf("El resultado de B es:%d\n",factorial2(int operando2));
        break;
      case 7:
          //en la opcion de salir, la bandera cambia a "no" para que se cierre el bucle//
        seguir='no';
        break;





}






}
  return 0;
}



