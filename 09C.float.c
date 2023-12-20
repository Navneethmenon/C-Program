/*
 * data types
 * new keywords : double
 * const with f, l, L
 */

#include <stdio.h>

int
main()
{
    // fraction numbers
    float f = 3.141592f;		// 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793l;	// 8 bytes (64 bits of precision) 15 - 16 digits %lf
    long double e = 3.141592653589793L;	// depends

    printf("\nf=%.16f", f);  	// float
    printf("\nd=%.16lf", d); 	// double
    printf("\ne=%.16Lf", e); 	// long double
    printf("\nd=%0.2lf", d); 	// double with decimal point specified
    printf("\nd=%e", d); 	// double e format 
    printf("\nd=%.16g", d); 		// double in g format (e or f for shorter display)

    printf("\n\n");
    printf("\nsizeof float %ld", sizeof(float));
    printf("\nsizeof double %ld", sizeof(double));
    printf("\nsizeof long double %ld", sizeof(long double));
    printf("\n\n");
}
