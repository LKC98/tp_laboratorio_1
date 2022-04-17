/*
 * funciones.h
 *
 *  Created on: 15 abr. 2022
 *      Author: LKC
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

int ValidarOpcion(int limiteInferior, int limiteSuperior);
char ValidarOpcionLetras();
float IngresarKM();
float IngresarPrecio();
char ValidarOpcionLetras2();
float CalcularDescuento(float numero, float descuento);
float CalcularInteres( float numero, float interes);
float CalcularBitcoin(float numero, float bitcoin);
float CalcularPrecioUnitario(float km, float precio);
float CalcularDiferenciaPrecios(float latam , float aereo);

#endif /* FUNCIONES_H_ */

