/**
*\brief Toma los 2 operandos y los suma.
*\param x e y son los operandos.
*\return El resultado de la suma.
*/
float calculoSuma(float x,float y){
    float calculo;
    calculo=x+y;
    return calculo;
}
/**
*\brief Toma los 2 operandos y los resta.
*\param x e y son los operandos.
*\return El resultado de la resta.
*/
float calculoResta(float x,float y){
    float calculo;
    calculo=x-y;
    return calculo;
}
/**
*\brief Toma los 2 operandos y los divide.
*\param x e y son los operandos.
*\return El resultado de la division.
*/
float calculoDivision(float x,float y){
    float calculo;
    calculo=x/y;
    return calculo;
}
/**
*\brief Toma los 2 operandos y los multiplica.
*\param x e y son los operandos.
*\return El resultado de la multiplicación.
*/
float calculoMultiplicacion(float x,float y){
    float calculo;
    calculo=x*y;
    return calculo;
}
/**
*\brief Toma 1 operando, verifica que sea mayor a 0 y devuelve el factorial.
*\param x es el factorial que ingresa.
*\return Si es mayor a 0, devuelve el factorial del numero, caso contrario devuelve -1.
*/
float calculoFactorial(float x){
    float a, b=1, c=-1;

    if(x>=0){
    for(a=1; a<=x; a++){
    b = b * a;
    }
    return b;
    }else{
    return c;
    }
}



