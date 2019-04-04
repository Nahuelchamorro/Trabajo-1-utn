#include <stdio.h>
#include <stdlib.h>
#include "chamo.h"
int mostrarmenu()

int main()
{
    char seguir='s';
    int operando1;
    int operando2;

    do
    {
      switch(mostrarmenu())
      {
      case 1:
        Printf("opcion 1- Ingrese operando\n");
        scanf("%d",&operando1);
      case 2:
        printf("opcion 2- ingrese segundo operando\n");
        scanf("%d",&operando2);
      case 3:
        printf("opcion 3- Realizar calculos\n");
        printf("Sus calculos serán realizados, utilice la opción siguiente porfavor\n")
      case 4:
        printf("El resultado de A+B es:%d",suma);
        printf("El resultado de A-B es:%d",resta);
        printf("El resultado de A*B es:%d",multiplicacion);
        printf("El resultado de A/B es:%f",division);
        printf("El resultado del factorial de A es:%d",factorial1);
        printf("El resultado de B es:%d",factorial2);


      }
    }
    return 0;
}

int mostrarmenu()
{
    int opcion;

    system("cls");
    printf("***Menu de opciones***\n\n");
    printf("1- Ingresar primer operando \n");
    printf("2- Ingresar segundo operando \n");
    printf("3- Calcular \n");
    printf("4- Dar resultados \n");
    printf("5- Salir \n");
    scanf("%d",&opcion);

    return opcion;

}
