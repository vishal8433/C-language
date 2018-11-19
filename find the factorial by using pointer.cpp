#include<stdio.h>
 int main ()
 {
 	int a,f=1,i;
 	int *pa,*pf,*pi;
 	pa=&a;
 	pf=&f;
 	pi=&i;
 	printf("welcome to this program\n");
 	printf("enter the number\n");
 	scanf("%d",pa);
 	
 	for(*pi=1;*pi<=*pa;(*pi)++)
 	{
 		*pf=*pf**pi;
	 }
	 printf("your factorial is %d\n",*pf);
 	return 0;
 }
