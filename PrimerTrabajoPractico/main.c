/*******************************************************************
*Programa:Calculadora Primer trabajo practico
*
*Objetivo: Ingresar 2 operandos y realizar operaciones aritmeticas basicas
*          Variables: operando 1 >> float a
*                     operando 2 >> float b
*                     suma >> s, resta >> r, division d, multiplicación >> m, factoriales >> f y f1.
*Version:0.1
*Autor:Leonardo Dewey
* > Verifica: Que no se pueda dividir por 0,
*             Que el factorial sea positivo,
*             Que antes de informar los resultados, se haya calculado.
*             Que se pueda ingresar solo las 5 opciones del menu
*
*Errores: - Se cierra el programa al ingresar una letra cuando se debe ingresar un operando. No valida.
*         - Calcula de manera erronea el factorial de numeros con decimales
*
*Posible solución: Tomar los datos con un char, validar que no esten entre '0' y '9' en ascii y pasarlo a int.
*                  Solo me sirve para enteros positivos. ¿negativos? No.
********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int opcion;
    float a, b;
    float s, r, d, m, f, f1;
    int verificador = 1;
    opcion=5;
    a=0;
    b=0;
    do{
    system("cls");
    printf("1. Ingresar 1er operando (A=%.2f)\n",a);
    printf("2. Ingresar 2do operando (B=%.2f)\n",b);
    printf("3. Calcular todas las operaciones\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n");
    printf("\n");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
            system("cls");
            printf("Ingresar 1er operando: ");
            scanf("%f",&a);
            verificador++;
            break;
        case 2:
            system("cls");
            printf("Ingresar 2do operando: ");
            scanf("%f",&b);
            verificador++;
            break;
        case 3:
            system("cls");
            s = calculoSuma(a,b);
            r = calculoResta(a,b);
            d = calculoDivision(a,b);
            m = calculoMultiplicacion(a,b);
            f = calculoFactorial(a);
            f1= calculoFactorial(b);
            printf("Calculando...\n");
            printf("Calcular la suma (%.2f + %.2f)\n",a,b);
            printf("Calcular la resta (%.2f - %.2f)\n",a,b);
            printf("Calcular la division (%.2f / %.2f)\n",a,b);
            printf("Calcular la multiplicacion (%.2f * %.2f)\n",a,b);
            printf("Calcular el factorial (%.0f!) y (%.0f!) \n",a,b);
            printf("Ya puedes verificar los calculos\n");
            system("pause");
            verificador = 0;
            break;
        case 4:
            if(verificador == 0){
            system("cls");
            printf("El resultado de A+B es: %.2f\n",s);
            printf("El resultado de A-B es: %.2f\n",r);
            if(b == 0){
            printf("No es posible dividir por cero\n");
            }else{
            printf("El resultado de A/B es: %.2f\n",d);
            }
            printf("El resultado de A*B es: %.2f\n",m);
            if(f<0){
            printf("No se puede calcular el factorial de A por ser un numero negativo.\n");
            }else{
            printf("El factorial de A es: %.2f .\n", f);
            }
            if(f1<0){
            printf("No se puede calcular el factorial de B por ser un numero negativo.\n");
            }else{
            printf("El factorial de B es: %.2f \n",f1);
            }
            system("pause");
            }else{
            system("cls");
            printf("Antes de verificar los datos, debes calcularlos.\n");
            system("pause");
            }
            break;
        case 5:
            opcion=5;
            break;
        default:
            system("cls");
            printf("Elegiste una opcion incorrecta, volve a intentarlo\n");
            system("pause");
        break;


    }

    }while(opcion != 5);



    return 0;
}
