#include <stdio.h>
#include "stack.h"

int main() {
	char symbol = getchar();
	initStack();
	
	while (symbol != EOF) {
		if (symbol >= '0' && symbol <= '9') {
			int num = symbol - '0';
			while ((symbol = getchar()) != ' ')
				num = num * 10 + symbol - '0';
			
			pushStack(num);
		}
		
		if (symbol = ' ') {
			symbol = getchar();
			continue;
		}
		
		if (symbol == '*' || symbol == '/' || symbol == '+' || (symbol == '-')) {
			int operand1, operand2;
			popStack(operand1);
			popStack(operand2);
			if (!(isEmptyStack())) {
				printf("Error \n");
				return -1;
			}
				
			
			if (symbol == '+')
				pushStack(operand1+operand2);
			if (symbol == '-')
				pushStack(operand1-operand2);
			if (symbol == '*')
				pushStack(operand1*operand2);
			if (symbol == '/')
				pushStack(operand1/operand2);
			
			symbol = getchar();
		}
	}
	
	int res;
	popStack(res);
	printf("%d", res);
	
	return 0;
}