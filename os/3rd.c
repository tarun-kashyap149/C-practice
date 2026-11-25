#include <stdio.h>

#define BUFFER_SIZE 5
int buffer[BUFFER_SIZE];
int in = 0, out = 0;
int full = 0, empty = 5; // semaphore ka kaam ye variable karenge

void producer(int item) {
    if (empty == 0) {
        printf("Buffer FULL! \n");
        return;
    }
    empty--;
    buffer[in] = item;
    printf("Producer produced: %d at %d\n", item, in);
    in = (in + 1) % BUFFER_SIZE;
    full++;
}

void consumer() {
    if (full == 0) {
        printf("Buffer EMPTY!\n");
        return;
    }
    full--;
    int item = buffer[out];
    printf("Consumer consumed: %d from %d\n", item, out);
    out = (out + 1) % BUFFER_SIZE;
    empty++;
}

int main() {
    producer(1); producer(2); producer(3);
    consumer(); consumer();
    producer(4); producer(5); producer(6);
    consumer(); consumer(); consumer(); consumer();
    return 0;
}