#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
struct Stack {
    int items[MAX_SIZE];
    int top;
};
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full\n");
    } else {
        stack->items[++stack->top] = value;
    }
}
 printf("Top and Bottom of Stack 1:\n");
    printTopAndBottom(&stack1);

    printf("\nTop and Bottom of Stack 2:\n");
    printTopAndBottom(&stack2);

    return 0;
}
