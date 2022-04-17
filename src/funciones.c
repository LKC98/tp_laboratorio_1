/*
 * funciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: LKC
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"


//Pide un dato que se verifica entre el limite inferior y limite superior, lo valida y devuelve lo ingresado.
int ValidarOpcion(int limiteInferior, int limiteSuperior){
	int opcion;
	int resultado;
	setbuf(stdout,NULL);
	printf("\n\nIngrese opci%cn: ", 162);
	scanf("%d", &opcion);
	do{
		if(opcion<limiteInferior||opcion>limiteSuperior){
			printf("Ingrese opci%cn v%clida: ", 162, 160);
			scanf("%d", &opcion);
			resultado=opcion;

		}
		else{
			resultado=opcion;
		}
	}while(resultado<limiteInferior||resultado>limiteSuperior);
	return resultado;
}

//Pide un dato de tipo char, lo valida y lo devuelve a main.
char ValidarOpcionLetras(){

	char opcion;
	setbuf(stdout,NULL);

	printf("\n\nIngrese opci%cn: ", 162);
	fflush(stdin);
	scanf("%c", &opcion);

	opcion=tolower(opcion);

	while(opcion!='a' && opcion!='b' && opcion != 'c' && opcion!='d' && opcion!='e' && opcion!='f'){

			printf("\nIngrese opci%cn v%clida: ", 162, 160);
			fflush(stdin);
			scanf("%c", &opcion);
	}
	return opcion;
}

//Pide un dato de tipo float, lo valida y lo devuelve a main para la variable km.
float IngresarKM(){
	float kilometro;
	setbuf(stdout,NULL);

	printf( "\n  Cu%cntos KM recorrer%c: ", 160, 160);
	fflush(stdin);
	scanf("%f", &kilometro);
	while(kilometro<=0){
		printf( "\n  Ingrese distancia v%clida: ", 160);
		fflush(stdin);
		scanf("%f.2", &kilometro);
	}
	return kilometro;
}

//Pide un dato de tipo float, lo valida y lo devuelve a main para la variable requerida.
float IngresarPrecio(){
	float resultado;
	setbuf(stdout,NULL);

	printf( "\n  Cu%cnto es el precio del vuelo?:  ", 160);
	fflush(stdin);
	scanf("%f", &resultado);
	while(resultado<=0){
		printf( "\n  Ingrese precio v%clido: ", 160);
		fflush(stdin);
		scanf("%f.2", &resultado);
	}
	return resultado;
}

//Pide un dato de tipo char, lo valida y lo devuelve a main.
char ValidarOpcionLetras2(){

	char opcion;
	setbuf(stdout,NULL);

	printf("\n\nIngrese opci%cn: ", 162);
	fflush(stdin);
	scanf("%c", &opcion);

	opcion=tolower(opcion);

	while(opcion!='a' && opcion!='b' && opcion != 'c'){

			printf("\nIngrese opci%cn v%clida: ", 162, 160);
			fflush(stdin);
			scanf("%c", &opcion);
	}
	return opcion;
}

//Se ingresan los datos desde main, calcula el descuento y se lo resta a la variable numero. Devuelve el resultado main.
float CalcularDescuento(float numero, float descuento){
    float res;
    float resF;
    descuento=descuento/100;
    res= numero*descuento;
    resF= numero-res;

    return resF;
}

//Se ingresan los datos desde main, calcula el interes y se lo suma a la variable numero. Devuelve el resultado main.
float CalcularInteres( float numero, float interes){
    float res;
    float resf;
    interes=interes/100;
    res = numero*interes;
    resf =  res+numero;

    return resf;
}

//Se ingresan los datos desde main, calcula la conversión. Devuelve el resultado main.
float CalcularBitcoin(float numero, float bitcoin){

    float conversion;

    conversion = numero/bitcoin;

    return conversion;

}

//Se obtiene datos desde el main, se dividen entre si y se devuelve la resultado a main.
float CalcularPrecioUnitario(float km, float precio){

    float resultado;

    resultado = precio/km;
    return resultado;
}

//Se obtiene datos desde el main, se restan entre si y se devuelve la resultado a main.
float CalcularDiferenciaPrecios(float latam , float aereo){

    float resultado;
    if(latam>aereo){
    	resultado = latam-aereo;
    }
    else{
    	resultado = aereo-latam;
    }
    return resultado;

}
