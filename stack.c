//
// Created by christian on 17.08.19.
//

#include <stdlib.h>
#include "stack.h"
#include "singly_linked_list.h"

struct stack *create_stack(){
    struct stack *stack = malloc(sizeof(struct stack));
    stack->list = create_list();
    return stack;
}

void push(struct stack *stack, int val) {
    insert(stack->list, val);
}

int pop(struct stack *stack) {
    struct node *tmp = stack->list->head->next;
    stack->list->head->next = stack->list->head->next->next;
    int res = tmp->val;
    free(tmp);
    return res;
}

