#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415659265358979323846

double sizebh(void);
double tempbh(void);
double entropybh(void);

//Funcao para calcular o tamanho de um buraco negro
double sizebh(void){
	double rs,m;
	
	const double g = 6.67430e-11;
	const double c = 299972458.0;
	
	printf("Digite a massa do objeto em kg: ");
	scanf("%lf", &m);
	
	rs = 2 * g * m / pow(c, 2);
	printf("O raio de Schwarzschild: %.2lf", rs);
	
}

//Funcao para calcular a temperatura de um buraco negro
double tempbh(void){
	double t,m;
	
	const double h = 1.054571628e-34;
	const double g = 6.67430e-11;
	const double c = 299972458.0;
	const double r = 10973731.568525;
	const double na = 6.02214129e-23;
	const double kb = r /na;
	
	printf("Digite a massa do objeto em kg: ");
	scanf("%lf", &m);
	
	t = h * pow(c,3) / 8 * PI * g * kb * m;
	printf("Temperature: %lf", t);
}

//Funcao para calcular a entropia de um buraco negro
double entropybh(void){
	double s;
	
	const double h = 1.054571628e-34;
	const double g = 6.67430e-11;
	const double c = 299972458.0;
	const double a = 10.5291772108e-10;
	const double k = 8.9875517874e9;
	
	s = PI * a * k * pow(c,3) / (2 * h * g);
	printf("Entropy: %lf", s);
 }
