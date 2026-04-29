#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 20

typedef struct {
    char buffer[BUFFER_SIZE];
    int head;
    int tail;
    int size;
} RingBuffer;

void initialize(RingBuffer *rb) {
    rb->head = 0;
    rb->tail = 0;
    rb->size = 0;
}

int isVacant(const RingBuffer *rb) {
    return rb->size == 0;
}

int isComplete(const RingBuffer *rb) {
    return rb->size == BUFFER_SIZE;
}

void insert(RingBuffer *rb, char value) {
    if (isComplete(rb)) {
        printf("Buffer is full!\n");
        return;
    }
    rb->buffer[rb->tail] = value;
    rb->tail = (rb->tail + 1) % BUFFER_SIZE;
    rb->size++;
}

char removeChar(RingBuffer *rb) {
    if (isVacant(rb)) {
        printf("Buffer is empty!\n");
        return '\0';
    }
    char value = rb->buffer[rb->head];
    rb->head = (rb->head + 1) % BUFFER_SIZE;
    rb->size--;
    return value;
}

int main() {
    RingBuffer rb;
    initialize(&rb);

    char fullName[50];
    printf("What is your name? ");
    scanf("%49s", fullName);
    strcat(fullName, "CE-ESY");

    for (int idx = 0; idx < (int)strlen(fullName); idx++) {
        insert(&rb, fullName[idx]);
    }

    while (!isVacant(&rb)) {
        char ch = removeChar(&rb);
        printf("%c", ch);
    }
    printf("\n");
    
    return 0;
}
