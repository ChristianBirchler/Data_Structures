#include <stdio.h>
#include "singly_linked_list.h"
#include "stack.h"


int main() {

    struct stack *stack = create_stack();

    push(stack, 5);
    push(stack, 8);

    int val = pop(stack);
    printf("%d\n", val);

    val = pop(stack);
    printf("%d\n", val);

    return 0;
}