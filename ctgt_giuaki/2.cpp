/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

// Cấu trúc của một NODE
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

//###INSERT CODE HERE -
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
bool isSorted(NODE *head)
{
    int flag = 0;
    if (head == NULL)
        return false;
    while (head->pNext != NULL)
    {
        if (head->info > head->pNext->info)
            return false;
        else if (head->info == head->pNext->info)
        {
            flag += 0;
        }
        else
        {
            flag++;
        }
        head = head->pNext;
    }
    if (flag != 0)
        return true;
    return false;
}

int main()
{
    LIST *L = new LIST;

    CreateEmptyList(*L);
    CreateList(*L);

    cout << boolalpha << isSorted(L->pHead);

    return 0;
}
