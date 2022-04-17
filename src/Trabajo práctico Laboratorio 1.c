/*
 ============================================================================
 Name        : Trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"


int main(void) {
	int opcion;
	char opcionEmpresa;
	char opcionPago;
	float km=0;
	float precioAerolineas=0;
	float precioAereoDeb=0;
	float precioAereoCred=0;
	float precioAereoBit=0;
	float precioAereoUni=0;
	float precioLatam=0;
	float precioLatDeb=0;
	float precioLatCred=0;
	float precioLatBit=0;
	float precioLatUni=0;
	float diferenciaPrecios;
	float bitcoin=4606954.55;
	float descuento=10;
	float interes=25;

	setbuf(stdout,NULL);

	do{
		system("cls");
		printf("\n        ESTE ES UN PROGRAMA PARA CALCULAR EL PRECIO DE SUS VUELOS.");
		printf("\n\t----------------------------------------------------------\n");
		printf( "\n\n\n   1. Ingresar Km.");
	    printf( "\n   2. Ingresar Precio de Vuelos: ");
	    printf( "\n   3. Calcular todos los costos:");
	    printf( "\n   4. Informar Resultados" );
	    printf( "\n   5. Carga forzada de datos" );
	    printf( "\n   6. Salir" );

	    opcion= ValidarOpcion(1,6);

	    switch(opcion){
	    case 1:
	    	km=IngresarKM();
	    	printf("Se ingres%c correctamente el dato.", 162);
	    	system("pause>nul");

	    break;
	    case 2:
	    	do{
	    		system("cls");
	    		printf( "\n Ingrese los datos de cada empresa");
	    		printf( "\n\n   a. Aerolineas");
	    		printf( "\n   b. Latam");
	    		printf( "\n   c. Salir");
	    		opcionEmpresa=ValidarOpcionLetras2();

	    		switch(opcionEmpresa){
	    		case 'a':
	    			precioAerolineas=IngresarPrecio();
	    			printf("El precio fue guardado");
	    			system("pause>nul");
	    		break;
	    		case 'b':
	    			precioLatam=IngresarPrecio();
	    			printf("El precio fue guardado");
	    			system("pause>nul");
	    		break;
	    		}

	    		}while(opcionEmpresa!='c');

	    break;
	    case 3:
	    	do{
	    		system("cls");
	    		printf("\n        ESTE ES UN PROGRAMA PARA CALCULAR EL PRECIO DE SUS VUELOS.");
	    		printf("\n\t----------------------------------------------------------\n");
	    		printf( "\n\n\n   a. Tarjeta de debito: ");
	    		printf( "\n   b. Terjeta de credito: ");
	    		printf( "\n   c. Bitcoin:");
	    		printf( "\n   d. Mostrar precio por Km: " );
	    		printf( "\n   e. Mostrar diferencia de precio ingresada: " );
	    		printf( "\n   f. Salir");
    			precioLatDeb=CalcularDescuento(precioLatam, descuento);
    			precioAereoDeb=CalcularDescuento(precioAerolineas, descuento);
	    		opcionPago=ValidarOpcionLetras();
    			precioLatCred=CalcularInteres(precioLatam, interes);
    			precioAereoCred=CalcularInteres(precioAerolineas, interes);
    			precioAereoBit=CalcularBitcoin(precioAerolineas, bitcoin);
    			precioLatBit=CalcularBitcoin(precioLatam, bitcoin);
    			precioAereoUni=CalcularPrecioUnitario(km, precioAerolineas);
    			precioLatUni=CalcularPrecioUnitario(km, precioLatam);
    			diferenciaPrecios=CalcularDiferenciaPrecios(precioLatam, precioAerolineas);

	    		switch(opcionPago){
	    		case 'a':
	    			printf("\nAerolineas: %.2f", precioAereoDeb);
	    			printf("\nLatam: %.2f", precioLatDeb);

	    			system("pause>nul");
	    		break;

	    		case 'b':
	    			printf("\nAerolineas: %.2f", precioAereoCred);
	    			printf("\nLatam: %.2f", precioLatCred);
					system("pause>nul");
				break;
	    		case 'c':
	    			printf("\nAerolineas: %.2f", precioAereoBit);
	    			printf("\nLatam: %.2f", precioLatBit);
	    			system("pause>nul");
	    		break;
	    		case 'd':
	    			printf("\n El precio unitario de Aerolineas es: %.2f", precioAereoUni);
	    			printf("\n El precio unitario de Latam es: %.2f", precioLatUni);
	    			system("pause>nul");
	    		break;
	    		case 'e':
					printf("La diferencia de precio es: %.2f", diferenciaPrecios);
	    			system("pause>nul");
	    		break;

	    		}

	    	}while(opcionPago!='f');

	    break;
	    case 4:
	    	system("cls");
	    	printf("\nA continuaci%cn, se muestras los resultados. \nEn caso de ser 0, no hubo ingreso de datos o no se seleccion%c la opci%cn previamente: ", 162, 162, 162);
	    	printf("\n\nAerolineas: ");
			printf("\nPrecio con tarjeta de d%cbito: %.0f", 130, precioAereoDeb );
			printf("\nPrecio con tarjeta de cr%cdito: %.0f", 130, precioAereoCred);
			printf("\nPrecio pagando con bitcoin: %.7f", precioAereoBit);
			printf("\nPrecio unitario: %.4f", precioAereoUni);
			printf("\n\nLatam: ");
			printf("\nPrecio con tarjeta de d%cbito: %.0f", 130, precioLatDeb);
			printf("\nPrecio con tarjeta de cr%cdito: %.0f", 130, precioLatCred);
			printf("\nPrecio pagando con bitcoin: %.7f", precioLatBit);
			printf("\nPrecio unitario: %.4f", precioLatUni);
			system("pause>nul");

	    break;
	    case 5:
	    	km=IngresarKM();
	    	printf("\nSe ingres%c correctamente el dato.", 162);
	    	printf("\nAerolineas: ");
			precioAerolineas=IngresarPrecio();
			printf("\nEl precio fue guardado");
			printf("\nLatam: ");
			precioLatam=IngresarPrecio();
			printf("\nEl precio fue guardado");
			system("cls");
			printf("\nKM: %.2f", km);
	    	printf("\n\nPrecio Aerolineas: %.2f", precioAerolineas);
			printf("\n a)Precio con tarjeta de d%cbito: %.0f", 130, CalcularDescuento(precioAerolineas, descuento));
			printf("\n b)Precio con tarjeta de cr%cdito: %.0f", 130, CalcularInteres(precioAerolineas, interes));
			printf("\n c)Precio pagando con bitcoin: %.7f", CalcularBitcoin(precioAerolineas, bitcoin));
			printf("\n d)Precio unitario: %.4f", CalcularPrecioUnitario(km, precioAerolineas));
			printf("\n\nPrecio Latam: %.2f", precioLatam);
			printf("\n a)Precio con tarjeta de d%cbito: %.0f", 130, CalcularDescuento(precioLatam, descuento));
			printf("\n b)Precio con tarjeta de cr%cdito: %.0f", 130, CalcularInteres(precioLatam, interes));
			printf("\n c)Precio pagando con bitcoin: %.7f", CalcularBitcoin(precioLatam, bitcoin));
			printf("\n d)Precio unitario: %.4f", CalcularPrecioUnitario(km, precioLatam));
			printf("\n\nLa diferencia de precio es: %.0f", CalcularDiferenciaPrecios(precioLatam, precioAerolineas));
			system("pause>nul");

	    break;
	    }
	}while(opcion!=6);
	return EXIT_SUCCESS;
}
