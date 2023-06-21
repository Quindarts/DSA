#include <iostream>
struct Node
{
    int data;
    Node *pNext;
};
struct List
{
    Node *pHead;
    Node *pTail;
};
// Tao 1 node moi
Node *getNode(int x);

// Tao danh sach rong
void Init(List &l);

// Tim kiem NODE
int search();

// Them node vao dau danh sach
void addFirst(List &l, Node *pNode);

// Them node vao cuoi danh sach
void addLast(List &l, Node *pNode);

// Xoa 1 node
void deleteNode(List &l, int x);
int main()
{

    return 0;
};
Node *getNode(int x)
{
    Node *p;
    p = new Node;
    if (p == NULL)
    {
        std::cout << "Khong du bo nho " << std::endl;
    }
    p->data = x;
    p->pNext = NULL;
    return p;
};
void Init(List &l)
{
    l.pHead = l.pTail = NULL;
};
int search(List l, int x)
{
    Node *node = l.pHead;
    while (node != NULL)
    {
        if (node->data == x)
            return node->data;
        node = node->pNext;
    }
    return -1;
}
void addFirst(List &l, Node *pNode)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = pNode;
    }
    else
    {
        pNode->pNext = l.pHead->pNext;
        l.pHead = pNode;
    }
}
void addLast(List &l, Node *pNode)
{
    if (l.pHead == NULL)
        l.pHead = l.pTail = pNode;
    else
    {
        l.pTail->pNext = pNode;
        pNode->pNext = NULL;
    }
}
void deleteNode(List &l, int x)
{
    Node *p = new Node;
    if (l.pHead == NULL)
        std::cout << "Danh sach trong";
    else
    {
        
    }
}