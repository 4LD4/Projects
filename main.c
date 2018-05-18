#include <stdio.h>
#define USE_MATH_DEFINES
#include <math.h>

int odd(int n) {
	int i, sum=0, aux=0;
	for(i=1 ; i<=n ; i=i+1) {
		aux = (i*2) -1;		
		sum = sum + aux;
		printf("%i\n", aux);
	}
	return sum;
}

int pair(int n) {
	int i, sum=0, aux=0;
	for(i=0 ; i<n ; i=i+1) {
		aux = (i*2);		
		sum = sum + aux;
		printf("%i\n", aux);
	}
	return sum;
}

int traduction(int n) {
	int mil=0, cent=0, dec=0, uni=0;
	mil = n/1000;
	cent = n/100 -(mil*10);
	dec = n/10 - (cent*10) - (mil*100);
	uni = n/1 - (dec*10) - (cent*100) - (mil*1000);
	printf("Unidades de mil: %i\n", mil);	
	printf("Centenas: %i\n", cent);
	printf("Decenas: %i\n", dec);
	printf("Unidades: %i\n", uni);
	return 0;
}

int secToDays(int s) {
	int day = 0, rest = 0;
	day = s/(86400);
	rest = s - (day*86400);
	printf("Dias: %i\n", day);
	return rest;
}

int secToHours(int s) {
	int hours = 0, rest = 0;
	hours = s / (3600);
	rest = s - (hours * 3600);
	printf("Horas: %i\n", hours);
	return rest;
}
int secToMin(int s) {
	int min = 0, rest = 0;
	min = s / (60);
	rest = s - (min * 60);
	printf("Minutos: %i\n", min);
	return rest;
}
int ej1min(int dist, int distArq, float altArco, int altArq, float ang){
	double bla = tan(ang);
	double a = (-4.9) * (altArq - tan(ang) * (dist - distArq));
	printf("%f\n",bla);
	double v0 = 46 / (sqrt(a) * cos(ang));
	printf("%f\n", v0);
	return 0;
}

int main() {
	ej1min(50, 4, 2.44, 2, 18);
	return 0;
}
