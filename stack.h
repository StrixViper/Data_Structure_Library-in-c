#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 100


typedef struct {
    int items[MAX];
    int top;
} Stack;

void initStack(Stack* s);
int isFull(Stack* s);
int isEmpty(Stack* s);
void push(Stack* s, int item);
int pop(Stack* s);
//-----------------------#


void initStack(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int item) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[(s->top)--];
}



#endif // STACK_H_INCLUDED
