#include <stdio.h>

#include "circleLib.h"

int main(int argc, char** argv){

	double radius;
	calcPerim(radius);
	calcArea(radius);

	printf("Perimeter = %f\n" , calcPerim(radius));
	printf("Area = %f\n", calcArea(radius));
	return 0;
}
