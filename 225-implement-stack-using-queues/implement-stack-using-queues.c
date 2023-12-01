#define STACK_SIZE 100
typedef struct {
    int* arr;
    int top;
} MyStack;


MyStack* myStackCreate() {
    MyStack* pStack = (MyStack*)malloc(sizeof(MyStack));
    pStack->arr = (int*)malloc(sizeof(int)*STACK_SIZE);
    pStack->top = -1;

    return pStack;
}

void myStackPush(MyStack* obj, int x) {
    obj->arr[++obj->top] = x;
}

int myStackPop(MyStack* obj) {
    return obj->arr[obj->top--];
}

int myStackTop(MyStack* obj) {
     return obj->arr[obj->top];
}

bool myStackEmpty(MyStack* obj) {
    return obj->top == -1;
}

void myStackFree(MyStack* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/