/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
 *
 *    Description: Main 
 *
 *        Version:  1.0
 *        Created:  03/11/2021 12:58:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "SmartPhone.hpp"
#include <stdlib.h>
#include <iostream>

int main(void)
{
	SmartPhone sp1;
        SmartPhone sp2("iPhone 12 Pro Max", 32347.90);

	sp2.despliegaMarca();
        sp2.despliegaPrecio();

        sp1.setMarca("Samsung Note 11");
        cout << "Marca sp1: " << sp1.getMarca() << endl;
 
        return EXIT_SUCCESS;
}
