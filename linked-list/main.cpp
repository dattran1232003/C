#include <iostream>

typedef struct tagNode {
  char name[30];
  int id;
  float grdPts;
  tagNode *pNext;
} NODE;

typedef struct {
  NODE *pHead;
  int Count;
} LINKED_LIST;

void CreateEmptyList(LINKED_LIST &list) {
  list.Count = 0;
  list.pHead = NULL;
};
int IsEmptyList(LINKED_LIST &list) { return list.pHead == NULL; };
int CountNode(LINKED_LIST &list) { return list.Count; };

template <typename DataType> NODE *CreateNode(DataType data) {
  NODE *pNew = new NODE;

  pNew->Data = data;
}

int main() { return 0; };
