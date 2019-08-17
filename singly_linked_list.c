#include <stdlib.h>
#include <stdio.h>
#include "singly_linked_list.h"


struct list *create_list() {
    struct list *list = malloc(sizeof(struct list));
    list->head = malloc(sizeof(struct node)); // create a sentinel node
    return list;
}

void insert(struct list *list, int val) {
    struct node *new = malloc(sizeof(struct node));
    new->val = val;
    new->next = list->head->next;
    list->head->next = new;
}

void delete(struct list *list, int val){
    struct node *current = list->head->next;
    struct node *lag = list->head;
    while (current->val != val){
        lag = current;
        current = current->next;
    }
    lag->next = current->next;
    free(current);
}

void print_list(struct list *list) {
    struct node *current = list->head->next;
    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}