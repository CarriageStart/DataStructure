
#include <stdio.h>

struct {
    int height;
} typedef PersonData;

void PD_CopyPersonData(PersonData* copy, const PersonData* target);

struct {
    int len;
    PersonData Data;
    Node* NextNode;
} typedef Node


Node* CreateNode(const PersonData* data=NULL);
void DeleteNode(Node* node);



