#include <stdio.h>
#include "queue.h"


int main() {

    struct queue *q = create_queue();

    enqueue(q, 5);
    enqueue(q, 9);
    enqueue(q, 2);

    print_queue(q);

    int val = dequeue(q);
    printf("%d\n", val);

    val = dequeue(q);
    printf("%d\n", val);

    print_queue(q);

    return 0;
}