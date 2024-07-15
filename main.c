#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "linked_list.h"
#include "heap.h"
#include "graph.h"
#include "binary_tree.h"
#include "hash_table.h"
#include "array.h"




int main() {
    // Stack usage
    Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    printf("Popped from stack: %d\n", pop(&s));

    // Queue usage
    Queue q;
    initQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    printf("Dequeued from queue: %d\n", dequeue(&q));

    // Linked list usage
    Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    deleteNode(&head, 10);

    // Heap usage
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Graph usage
    Graph* graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    printGraph(graph);

    // Binary tree usage
    TreeNode* tree = NULL;
    tree = insert(tree, 50);
    tree = insert(tree, 30);
    tree = insert(tree, 70);
    inorder(tree);
    printf("\n");

    // Hash table usage
    insertHashTable(1, 10);
    insertHashTable(2, 20);
    printf("Search key 1: %d\n", searchHashTable(1));

    // Dynamic array usage
    DynamicArray* dynamicArray = createArray(2);
    insertArray(dynamicArray, 10);
    insertArray(dynamicArray, 20);
    insertArray(dynamicArray, 30);
    printArray(dynamicArray);
    freeArray(dynamicArray);

    return 0;
}
