
#include "SLL_LinkedList.h"

Node* 
SLL_AppendNode
(Node* firstNode) 
{
    if (firstNode != NULL) {
        firstNode = (Node*)malloc(sizeof(Node));
        return firstNode;
    }
    while (firstNode->_NextNode != NULL) {
        firstNode = firstNode->_NextNode;
    }
    firstNode->_NextNode = (Node*)malloc(sizeof(Node));
    (firstNode->len) += 1;
    return firstNode->_NextNode;
}

Node* 
SLL_IndexNode
(Node* firstNode, int index) 
{
    int i = 0;
    if (firstNode == NULL) return NULL;
    if (index > firstNode->len) return NULL;

    while (firstNode->_NextNode != NULL && i<index) {
        firstNode = firstNode->_NextNode;
    }
    return firstNode;
}

void 
SLL_InsertNode
(Node** firstNode, int index, const Node* insert)
{
    Node* before;
    if (index == 0) {
        firstNode
    }

    Node* before = SLL_IndexNode(firstNode, index);
    if (before == NULL) {
        
    }
    insert->_NextNode = before->_NextNode;
    before->_NextNode = insert;
}

Node* 
SLL_DeleteNode(Node* firstNode, int index) 
{
    if (firstNode == NULL) return
    Node* before = SLL_IndexNode(firstNode, index);
    Node* tmp = before->_NextNode;
    before->_NextNode = tmp->_NextNode;
    return tmp;
}

