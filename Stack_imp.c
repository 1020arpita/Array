#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	unsigned capacity;
	int *array;
	int top;
};

struct Stack *CreateStack(unsigned capacity)
{
	struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack));
	stack ->capacity = capacity;
	stack ->top=-1;
	stack->array=(int*)malloc(stack->capacity*sizeof(int));
};
 isFull(struct Stack *stack)
{
	return	stack->top==stack->capacity-1;
}

isEmpty(struct Stack *stack)
{
	return stack->top==-1;
}

int push(struct Stack *stack,int item)
{
	if(isFull(stack))
		return;
	else
		stack->array[++stack->top]=item;
	printf("%d added\n",item);
	
}
int pop(struct Stack *stack)
{
	if(isEmpty(stack))
		printf("STACK EMPTY\n");
	else
		return stack->array[stack->top--];
}

int main()
{
	struct Stack *stack = CreateStack(100);
	push(stack,20);
	push(stack,70);
	push(stack,99);
	
	printf("%d popped",pop(stack));
	
	return 0;
}

	
	
