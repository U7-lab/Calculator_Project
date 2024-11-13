#include <stdio.h>
#include <math.h>
int main (){
	
	float num1, num2;
	char oper;
	
	printf("\nEnter TWO numbers :\n");
	scanf("%f %f", &num1 , &num2);
	
	printf("Choose an operation (+ , - , * , / ,%%) :\n");
	scanf(" %c", &oper);
	
	printf("You selected operation: '%c'\n", oper);
	
	switch(oper){
	
	case '+': 
	printf("The answer of Sum is %.2f", num1 + num2);
	break;
	
	case '-': 
	printf("The answer of Subtraction is %.2f", num1 - num2);
	break;
	
	case '*': 
	printf("The answer of Multiplication is %.2f", num1 * num2);
	break;
	
	case '/' : 
	if (num2 != 0){
		printf("The answer for Division is %.2f", num1 / num2);
	} else {
	printf("Error! Not Allowed");
    }
	break;
	
    case '%' : 
	if (num2 != 0){
		printf("The answer for Remainder is %.2f", fmod(num1, num2));
	} else {	
	printf ("Error! Not Allowed");
	}
	break;
	
	default : printf("Not valid..");
	
}
	return 0;
}