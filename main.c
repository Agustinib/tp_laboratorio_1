#include <stdio.h>
#include <stdlib.h>
#include "funciones.h" /**Incluyo funciones.h en el main.c*/
/** Aca se llama a las funciones*/

int main()
{
    char seguir='s';
    int opcion=0;
    float num1,num2,result;
    int a;
    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%f)\n",num1);
        printf("2- Ingresar 2do operando (B=%f)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese un numero: ");/** Pide el ingreso de un numero, lo lee y lo guarda*/
                scanf("%f",&num1);
                fflush(stdin);
                break;
            case 2:
                printf("ingrese un numero: ");/** Pide el ingreso de otro numero, lo lee y lo guarda*/
                scanf("%f",&num2);
                break;
            case 3:
                result=sumar(num1,num2);
                printf("el resultado es %f\n",result);/** Llama a la funcion "sumar"*/
                system("pause");
                break;
            case 4:
                result=resta(num1,num2);
                printf("el resultado es %f\n",result);/** Llama a la funcion "resta"*/
                system("pause");
                break;
            case 5:

                if(num2!=0)
                {
                    result=dividir(num1,num2);/** Llama a la funcion "dividir"*/
                    printf("el resultado es %f\n",result);
                }
                else
                {
                    printf("error..no se puede dividir por 0\n ");
                }
                system("pause");
                break;
            case 6:
                result=multiplicar(num1,num2);/** Llama a la funcion multiplicar*/
                printf("el resultado es %f\n",result);
                system("pause");
                break;
            case 7:
                a=factorial(num1);
                printf("el resultado es %d\n",a);/** Llama a la funcion factorial*/
                system("pause");
                break;
            case 8:
                result=sumar(num1,num2);
                printf(" el resultado de la suma es %f\n",result);/** Llama a todas las funciones para realizar todas las operaciones*/
                result=resta(num1,num2);
                printf(" el resultado de la resta es %f\n",result);
                if(num2!=0)
                {
                    result=dividir(num1,num2);
                    printf(" el resultado de la division es %f\n",result);
                }
                else
                {
                    printf("error..no se puede dividir por 0\n ");
                }
                result=multiplicar(num1,num2);
                printf("el resultado de la multiplicacion es %f\n",result);
                a=factorial(num1);
                printf(" el resultado del factorial es %d\n",a);
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }



    }
printf("\n\n");
return 0;

    }
