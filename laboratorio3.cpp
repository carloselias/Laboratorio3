#include <iostream>
#include <math.h>
#include <stdbool.h>
bool a;
int n1,n2;
char ege,rp='s';
void oyv();
void calcularPotencia();
bool esPrimo(int n3);
bool esBisiesto(int n4);
int main()
{
	while(rp=='s'||rp=='S')
	{
		std::cout<<"Opciones"<<std::endl<<"a) operadores y variables"<<std::endl<<"b) funciones"<<std::endl<<"c) determinar numeros primos"<<std::endl<<"d) año bisiesto"<<std::endl<<"ingrese su opcion > ";
		std::cin>>ege;
		switch(ege)
    	{
    		case 'a':
    		{
    			oyv();
			}
    		break;
    		case 'b':
    		{
    			calcularPotencia();
			}
    		break;
    		case 'c':
    		{
    			int n3=0;
    			std::cout<<"ingrese el numero > ";
    			std::cin>>n3;
    			esPrimo(n3);
    			a=esPrimo(n3);
    			if (a==true)
					std::cout<<"> si es primo ("<<n3<<")";
				else
					std::cout<<"> no es primo ("<<n3<<")";
			}
    		break;	
    		case 'd':
    		{
    			int n4=0;
    			std::cout<<"ingrese el año > ";
    			std::cin>>n4;
    			esBisiesto(n4);
    			a=esBisiesto(n4);
    			if (a==true)
					std::cout<<"> si es bisiesto ("<<n4<<")";
				else
					std::cout<<"> no es bisiesto ("<<n4<<")";
			}
    		break;
		}
		std::cout<<std::endl<<"desea repetir programa? (s/n) > ";
		std::cin>>rp;
		system("cls");
	}
}
void oyv()
{
	std::cout<<"ingrese el primer numero > ";
	std::cin>>n1;
	std::cout<<"ingrese el segundo numero > ";
	std::cin>>n2;
    std::cout<<"+ suma > "<<n1<<"+"<<n2<<"="<<n1+n2<<std::endl;
    std::cout<<"- resta > "<<n1<<"-"<<n2<<"="<<n1-n2<<std::endl;
    std::cout<<"* multiplicacion > "<<n1<<"*"<<n2<<"="<<n1*n2<<std::endl;
    std::cout<<"/ division > "<<n1<<"/"<<n2<<"="<<n1/n2<<std::endl;
    if (n1==n2)
    std::cout<<"== "<<n1<<" es igual a "<<n2;
    else if (n1>n2)
    std::cout<<">= "<<n1<<" es mayor a "<<n2;
    else
    std::cout<<"<= "<<n1<<" es menor a "<<n2;
}
void calcularPotencia()
{
	std::cout<<"ingrese la base > ";
	std::cin>>n1;
	std::cout<<"ingrese el exponente > ";
	std::cin>>n2;
	std::cout<<"^ "<<n1<<"^("<<n2<<")="<<pow(n1,n2);
}
bool esPrimo(int n3)
{
	if (n3<=1) 
    return false;
	for (int i=2;i<=n3/2;++i)
	{
    	if (n3%i==0)
    	return false;
    	else 
    	return true;
  	}
}
bool esBisiesto(int n4)
{
	if(n4%4==0 && n4%100!=0 || n4%400==0)
		return true;
	else
		return false;
}