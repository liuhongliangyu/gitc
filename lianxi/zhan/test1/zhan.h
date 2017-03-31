typedef struct Node{
  int data;
  struct Node * pNext;
}NODE,* PNODE;

typedef struct Stack{
  PNODE pTop;
  PNODE pBottom;
}STACK, * PSTACK;

void init(PSTACK pS);
void traverse(PSTACK pS);
void push(PSTACK pS, int val);
int empty(PSTACK pS);
int pop(PSTACK pS, int * val);
void clear(PSTACK pS);
