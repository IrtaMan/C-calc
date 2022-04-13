#include <stdio.h>
#include "stack.h"

Stack S;

int errorStack;    //переменная для ошибок

void initStack() {   //инициализация массива
	S.pointer = 0;
	errorStack = okStack;
}


void pushStack(StackBaseType E) {   //добавление элемента в стек
	if (isFullStack(S)) {                    //проверяем стек на пустоту
		return;
	}
	
	S.arr[S.pointer] = E;				     //включение элемента
	S.pointer++;							 //сдвиг указателя
}


void popStack(StackBaseType E) {	  //получение элемента из стека
	if (isEmptyStack()) {          		  //проверяем стек на пустоту
		return;
	}
	
	E = S.arr[S.pointer - 1];		//считывание элемента в переменную
	S.pointer--;						//сдвиг указателя
}

int isFullStack() {         //проверка стека на полноту
	if (S.pointer == SIZE_STACK) {
		errorStack = fullStack;
		return 1;
	}
	return 0;
}

int isEmptyStack() {        //проверка стека на пустоту
	if (S.pointer == 0) {
		errorStack = emptyStack;
		return 1;
	}
	return 0;
}
