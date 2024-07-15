#ifndef HASH_TABLE_H_INCLUDED
#define HASH_TABLE_H_INCLUDED

#define SIZE 20

typedef struct HashNode {
    int key;
    int value;
    struct HashNode* next;
} HashNode;

unsigned int hashFunction(int key);
void insertHashTable(int key, int value);
int searchHashTable(int key);


//---------------------#

HashNode* hashTable[SIZE];

unsigned int hashFunction(int key) {
    return key % SIZE;
}

void insertHashTable(int key, int value) {
    unsigned int hashIndex = hashFunction(key);
    HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    if (hashTable[hashIndex] == NULL) {
        hashTable[hashIndex] = newNode;
    } else {
        HashNode* temp = hashTable[hashIndex];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int searchHashTable(int key) {
    unsigned int hashIndex = hashFunction(key);
    HashNode* temp = hashTable[hashIndex];

    while (temp != NULL) {
        if (temp->key == key) {
            return temp->value;
        }
        temp = temp->next;
    }
    return -1;  // Return -1 if key not found
}

#endif // HASH_TABLE_H_INCLUDED
