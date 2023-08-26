#include<stdio.h>
#include<conio.h>
main()
{ 
int a,b,c,choice;
printf("1:addition\n");
printf("2:subtraction\n");
printf("3:multiplication\n");
printf("4:division\n");
printf("5:modulas\n");
printf("enter you choice\n");
scanf("%d",&choice);
printf("enter any two number\n");
scanf("%d%d",&a,&b);
switch(choice)
{
	case 1:
	c=a+b;
	printf("sum of two number is%d",c);
	break;
	
	case 2:
	c=a-b;
	printf("substraction of two number is%d",c);
	break;
	
	case 3:
	c=a*b;
	printf("multiplaction of two number is%d",c);
	break;
	
	case 4:
	c=a/b;
	printf("division of two number is%d",c);
	break;
	
	case 5:
	c=a%b;
	printf("sum of two number is%d",c);
	break;
	
	default:
		printf("wrong choice");
}
}