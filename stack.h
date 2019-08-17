#ifndef ADT_STACK_H
#define ADT_STACK_H

struct stack{
    struct list *list;
};

struct stack *create_stack();

void push(struct stack *stack, int val);

int pop(struct stack *stack);

#endif //ADT_STACK_H
