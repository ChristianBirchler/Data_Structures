//
// Created by christian on 17.08.19.
//

#ifndef ADT_SINGLY_LINKED_LIST_H
#define ADT_SINGLY_LINKED_LIST_H

struct list {
    struct node *head;
};
struct node {
    int val;
    struct node *next;
};

struct list *create_list();

void insert(struct list *list, int val);

void delete(struct list *list, int val);

void print_list(struct list *list);

#endif //ADT_SINGLY_LINKED_LIST_H
