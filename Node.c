
#include <string.h>
#include "Node.h"

void 
PD_DeepCopy
(PersonData* copy, const PersonData* target) 
{
    memcpy(copy, target, sizeof(PersonData));
}

Node* CreateNode(const PersonData* data=NULL) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->len = 1;
    if (data != NULL) PD_DeepCopy(&(node->Data), data);
    return node;
}

void DeleteNode(Node* node) {
    free(node);
}
