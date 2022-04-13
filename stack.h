#ifndef _STACK_H_
#define _STACK_H_
#define SIZE_STACK 100    							//размер стека

const int okStack = 0;								// Все хорошо
const int fullStack = 1;							// Стек переполнен
const int emptyStack = 2;							// Стек пуст

extern int errorStack;   							//переменная для ошибок

typedef char StackBaseType;    						//тип элементов стека

typedef struct {    								//описание стека
	StackBaseType arr[SIZE_STACK];					    // Буфер стека
	unsigned pointer;								    // Указатель
} Stack;

void initStack();							// Инициализация стека
void pushStack(StackBaseType E);			// Добавление элемента в стек
void popStack(StackBaseType *E);			// Получение элемента из стека
int isFullStack();							// Полон ли стек
int isEmptyStack();							// Пуст ли стек

#endif
