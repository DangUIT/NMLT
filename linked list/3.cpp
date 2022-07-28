/*
Nhập danh sách liên kết đơn các số nguyên.
Tìm giá trị lớn nhất trong danh sách
*/

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *pNext;
};
struct list
{
    node *pHead;
    node *pTail;
};
void CreateEmptyList(list &l)
{
    l.pHead = l.pTail = NULL;
}
node *createNode(int x)
{
    node *p = new node;
    if (p == NULL)
        exit(1);
    p->pNext = NULL;
    p->data = x;
    return p;
}
void addHead(list &l, node *p)
{
    if (l.pHead == NULL)
        l.pHead = l.pTail = p;
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}
void addTail(list &l, node *p)
{
    if (l.pHead == NULL)
        l.pHead = l.pTail = p;
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}
void printList(list l)
{
    node *p = l.pHead;
    if (p == NULL)
        cout << "Empty list";
    else
    {
        while (p)
        {
            cout << p->data << " ";
            p = p->pNext;
        }
    }
}
int max(list l)
{
    int max = l.pHead->data;
    for (node *k = l.pHead; k != NULL; k = k->pNext)
    {
        if (k->data > max)
            max = k->data;
    }
    return max;
}
int main()
{
    list l;
    CreateEmptyList(l);
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        node *p = createNode(x);
        addHead(l, p);
    }
    printList(l);
    cout << "Max: " << max(l);
    return 0;
}