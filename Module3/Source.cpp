#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()

{
	setlocale(LC_ALL, "Rus");

	//3.	Дана сторона квадрата.Найти его периметр

	float a = 0;

	printf("Введите сторону квадрата:\t");

	scanf("%f", &a);

	float P=0;

	P=4*a;

	printf("Периметр=%f",P);




	///*x=12a2+7a-16*/

	//int a=0;

	//printf("Введите значение a:\t");
	//scanf("%d",&a);

	//int x=0;

	//x=12*(a*a)+7*a-16;

	//printf("Значение функции х=%d\n",x);






//y=7x2-3x+6

//int x=0;
//
//printf("Введите значение x:\t");
//scanf("%d",&x);
//
//int y=0;
//
//y=7*(x*x)-3*x+6;
//
//printf("Значение функции y = %d\n",y);





//
//printf("5 10\n7 см\n");
//
//printf("100 t\n1949 v\n");
//
//printf("x 25\nx y\n");


}