typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* pQueue = (MyQueue*)malloc(sizeof(MyQueue));
    pQueue->front = NULL;
    pQueue->rear = NULL;
    return pQueue;
}

void myQueuePush(MyQueue* obj, int x) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;

    if (obj->rear == NULL) {
        obj->front = newNode;
        obj->rear = newNode;
    } else {
        obj->rear->next = newNode;
        obj->rear = newNode;
    }
}

int myQueuePop(MyQueue* obj) {
    if (obj->front == NULL)
        return -1;

    int result = obj->front->data;
    Node* temp = obj->front;

    obj->front = obj->front->next;

    if (obj->front == NULL)
        obj->rear = NULL;

    free(temp);
    return result;
}

int myQueuePeek(MyQueue* obj) {
    if (obj->front == NULL)
        return -1;
    
    return obj->front->data;
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->front == NULL;
}

void myQueueFree(MyQueue* obj) {
    while (obj->front != NULL) {
        Node* temp = obj->front;
        obj->front = obj->front->next;
        free(temp);
    }

    free(obj);
}
/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/