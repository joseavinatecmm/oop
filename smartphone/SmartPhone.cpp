/*
 * =====================================================================================
 *
 *       Filename:  SmartPhone.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  03/10/2021 14:51:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "SmartPhone.hpp"
#include <iostream>

SmartPhone::SmartPhone(){}

SmartPhone::SmartPhone(string laMarca, float elPrecio)
{
	marca = laMarca;
	precio = elPrecio;
}

void SmartPhone::despliegaMarca()
{
	cout << "Marca: " << marca << endl;
}


void SmartPhone::despliegaPrecio()
{
	cout << "Precio: " << precio << endl;
}

void SmartPhone::setMarca(string laMarca)
{
	marca = laMarca;
}

string SmartPhone::getMarca()
{
	return marca;
}






655 049 656 17 santander udg
014320 655049656170  1089
8524 reserva  lupita almada


