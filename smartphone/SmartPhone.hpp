/*
 * =====================================================================================
 *
 *       Filename:  SmartPhone.hpp
 *
 *    Description: Interface
 *
 *        Version:  1.0
 *        Created:  03/10/2021 14:36:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef SMARTPHONE_HPP
#define SMARTPHONE_HPP

#include<string>

using namespace std;
class SmartPhone 
{
	private:
		string marca;
		float precio;

	public:
		SmartPhone();
		SmartPhone(string laMarca, float elPrecio);	
		void despliegaMarca();
		void despliegaPrecio();
		void setMarca(string laMarca);
		string getMarca();

};
#endif

