/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
using namespace std;
//###INSERT CODE HERE -
struct NODE
{
    int info;
    NODE *pNext;
};
// Cấu trúc của một DSLK
struct LIST
{
    NODE *pHead;
    NODE *pTail;
};
NODE *createNODE(int x)
{
    NODE *p = new NODE;
    if (p == NULL)
        exit(1);
    else
    {
        p->info = x;
        p->pNext = NULL;
    }
    return p;
}
void addTail(LIST &L, NODE *p)
{
    if (L.pHead == NULL)
        L.pHead = L.pTail = p;
    else
    {
        L.pTail->pNext = p;
        L.pTail = p;
    }
}
void CreateEmptyList(LIST &L)
{
    L.pTail = L.pHead = NULL;
}
void CreateList(LIST &L)
{
    int n;
    do
    {
        cin >> n;
        if (n != -1)
            addTail(L, createNODE(n));
    } while (n != -1);
}
void PrintList(LIST L)
{
    NODE *p = L.pHead;
    if (L.pHead == NULL)
        cout << "Empty List.";
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->pNext;
    }
}
void add_after_k_th(LIST &L, int Y, int k)
{
    NODE *t = L.pHead;
    int size = 0;
    for (NODE *p = L.pHead; p != NULL; p = p->pNext)
        size++;
    if (k < 1 || k > size)
        return;
    for (int i = 2; i <= k; i++)
        t = t->pNext;
    NODE *temp = createNODE(Y);
    NODE *next = t->pNext;
    temp->pNext = next;
    t->pNext = temp;
}
int main()
{
    LIST L;
    int k, Y;

    CreateEmptyList(L);

    CreateList(L);

    std::cin >> k >> Y;
    add_after_k_th(L, Y, k);

    PrintList(L);

    return 0;
}
