#ifndef DS_QUEUE_H
#define DS_QUEUE_H

#include "singly_linked_list.h"

struct queue {
    struct node *head;
    struct node *tail;
};

struct queue *create_queue();

void enqueue(struct queue *q, int val);

int dequeue(struct queue *q);

void print_queue(struct queue *q);

#endif //DS_QUEUE_H
