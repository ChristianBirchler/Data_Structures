#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

struct queue *create_queue() {
    struct queue *q = malloc(sizeof(struct queue));
    q->head = malloc(sizeof(struct node));
    q->tail = q->head;
}


void enqueue(struct queue *q, int val) {
    q->tail->val = val;
    q->tail->next = malloc(sizeof(struct node));
    q->tail = q->tail->next;
}

int dequeue(struct queue *q) {
    int res = q->head->val;
    struct node *tmp = q->head;
    q->head = q->head->next;
    free(tmp);
    return res;
}

void print_queue(struct queue *q){
    struct node *current = q->head;
    struct node *tail = q->tail;
    printf("Queue: ");
    while (current != tail){
        printf("%d; ",current->val);
        current = current->next;
    }
    printf("\n");
}

