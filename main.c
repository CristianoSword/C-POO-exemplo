#include <stdio.h>

struct Node {
    int somevar;
};

void print() {
    printf("Ola de um metodo C orientado a objeto!\n");
}

struct Tree {
    struct Node * NIL;
    void (*FPprint)(void);
    struct Node *root;
    struct Node NIL_t;
} TreeA = {&TreeA.NIL_t,print};

int main()
{
    struct Tree TreeB;
    TreeB = TreeA;
    TreeB.FPprint();
    return 0;
}
