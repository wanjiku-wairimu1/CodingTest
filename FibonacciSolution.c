#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    enum TypeTag { ADD, SUB, MUL, DIV, ABS, NEG, FIB } type;
    int data;
    struct Node *next;
} Node;

Node* makeFunc(int type) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->type = type;
    newNode->data = 0;
    newNode->next = NULL;
    return newNode;
}

void calc(Node* node) {
    if (node->type == ADD) {
        node->data = node->next->data + node->next->next->data;
    } else if (node->type == SUB) {
        node->data = node->next->data - node->next->next->data;
    } else if (node->type == MUL) {
        node->data = node->next->data * node->next->next->data;
    } else if (node->type == DIV) {
        node->data = node->next->data / node->next->next->data;
    } else if (node->type == ABS) {
        node->data = abs(node->next->data);
    } else if (node->type == NEG) {
        node->data = -node->next->data;
    } else if (node->type == FIB) {
        int n = node->next->data;
        if (n == 1 || n == 2)
            node->data = 1;
        else
            node->data = node->next->next->data + node->next->next->next->data;
    }
}

int main() {
    Node *add = makeFunc(ADD);
    add->next = makeFunc(10);
    add->next->next = makeFunc(6);

    Node *mul = makeFunc(MUL);
    mul->next = makeFunc(5);
    mul->next->next = makeFunc(4);

    Node *sub = makeFunc(SUB);
    sub->next = add;
    sub->next->next = mul;

    Node *fibo = makeFunc(FIB);
    fibo->next = makeFunc(abs(sub->data));
    fibo->next->next = NULL;

    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    printf("add: %d\n", add->data);
    printf("mul: %d\n", mul->data);
    printf("sub: %d\n", sub->data);
    printf("fibo: %d\n", fibo->data);

    free(add->next->next);
    free(add->next);
    free(add);
    free(mul->next->next);
    free(mul->next);
    free(mul);
    free(sub->next->next);
    free(sub->next);
    free(sub);
    free(fibo->next);
    free(fibo);

    return 0;
}