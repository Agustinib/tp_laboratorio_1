#include <stdio.h>
/** Aca va el desarrollo de las funciones*/

/** \brief Esta funcion lo que hace es Sumar los numeros ingresados
 *
 * \param n1
 * \param n2
 * \return resultado de la suma
 *
 */


float sumar(float n1, float n2 ){
float resultado;
resultado=n1+n2;
return resultado;
}
/** \brief Esta funcion resta los numeros ingresados
 *
 * \param n1
 * \param n2
 * \return resultado de la resta
 *
 */

float resta(float n1, float n2){
    float resultado;
    resultado=n1-n2;
    return resultado;
}

/** \brief Esta funcion divide el primer numero ingresado con el segundo
 *
 * \param n1
 * \param n2
 * \return resultado de la division
 *
 */
float dividir(float n1, float n2)
{
    float resultado;
    resultado=n1/n2;
    return resultado;

}
/** \brief Esta funcion multiplica los numeros ingresados
 *
 * \param n1
 * \param n2
 * \return resultado de la multiplicacion
 *
 */

float multiplicar(float n1, float n2)
{
    float resultado;
    resultado=n1*n2;
    return resultado;
}
/** \brief Esta funcion te da el factorial del numero que ingreses
 *
 * \param n1
 * \param
 * \return resultado del factorial del numero ingresado
 *
 */

int factorial(int n1)
{
int resultado;
if(n1==0)
{
    return 1;
}
else
{
     resultado=n1*factorial(n1-1);
    return resultado;
}
}



