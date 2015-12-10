#include<stdio.h>

main()
{
	int a,b;
	int suma,resta,multiplicacion;
    float division;
	
	printf("Programa que realize las operaciones basicas\n");
	printf("Ingrese el numero a");
	scanf("%d",a);
	printf("Ingrese el numero b");
	scanf("%d",b);
	
	suma=a+b;
	resta=a-b;
	multiplicacion=a*b;
	division=a/b;
	
	printf("El resultado de la suma es:%d", suma);
	printf("El resultado de la resta es:%d",resta);
	printf("El resultado de la multiplicacion es:%d", multiplicacion);
	printf("El resultado de la division es: %d",division);
}
