#include<stdio.h>

int main()
{
int input = 1;
printf("\nPlease enter the month number : ");
scanf("%d", &input);
printf("\nThe month number [ %d ] is : ",input);
switch( input ) {
	case  1: printf("January");	break;
	case  2: printf("February");	break;
	case  3: printf("March");	break;
	case  4: printf("April");       break;
	case  5: printf("May");	        break;
	case  6: printf("June");        break;
	case  7: printf("July");        break;
	case  8: printf("August");      break;
	case  9: printf("Septemper");   break;
	case 10: printf("October");     break;
	case 11: printf("November");    break;
	case 12: printf("December");    break;
	default: printf("ERROR: Unvalid number!"); break;
}
printf("\n\n");
return 0;
}
