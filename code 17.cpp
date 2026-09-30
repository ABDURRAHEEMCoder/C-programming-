#include<stdio.h>
int main()
{ 
int choice, units;
float bill;

 printf("ELECTRICITY BILL CALCULATION\:");
 printf("1.Domestic\n:");
 printf("2.Commercial\n:");
 printf("3.Industrial\n:");
 
 
 
 printf("Enter your choice:");
 scanf("%d",&choice);
 
 printf("Enter units consumed:");
 scanf("%d", &units);
 
 if(units<0)
 { 
 printf("Invalid units");
  return 0;
 } 
 switch(choice)
 { 
 case 1:
 	bill= units*3;
 	printf("domestic bill=Rs.%.2f",bill);
 	break;
 	
 	case 2 :
 	bill=units*6;
 	printf("Commercial bill=Rs.%.2f",bill);
 	break;
 	
 	case 3:
 	bill=units*9;
 	printf("Industrial Bill=Rs.%.2f",bill);
    break;
    
    default:
    	printf("Invalid Choice");
 }
   return 0;
}