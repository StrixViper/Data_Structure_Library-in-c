#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

typedef struct Graph {
    int numVertices;
    int** adjMatrix;
} Graph;

Graph* createGraph(int vertices);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);


//----------------------------#

Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = vertices;
    graph->adjMatrix = (int**)malloc(vertices * sizeof(int*));
    for (int i = 0; i < vertices; i++) {
        graph->adjMatrix[i] = (int*)malloc(vertices * sizeof(int));
        for (int j = 0; j < vertices; j++)
            graph->adjMatrix[i][j] = 0;
    }
    return graph;
}

void addEdge(Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1;
    graph->adjMatrix[dest][src] = 1;
}

void printGraph(Graph* graph) {
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++)
            printf("%d ", graph->adjMatrix[i][j]);
        printf("\n");
    }
}


#endif // GRAPH_H_INCLUDED
