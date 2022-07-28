/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

//###INSERT CODE HERE -
struct node
{
    int data;
    node *next;
};
struct LIST
{
    node *pHead;
    node *tail;
};
node *createNode(int x)
{
    node *p = new node;
    if (p == NULL)
        exit(1);
    else
    {
        p->data = x;
        p->next = NULL;
    }
    return p;
}
void CreateEmptyList(LIST &L)
{
    L.pHead = L.tail = NULL;
}
void addtail(LIST &L, node *p)
{
    if (L.pHead == NULL)
        L.pHead = L.tail = p;
    else
    {
        L.tail->next = p;
        L.tail = p;
    }
}
void CreateList(LIST &L)
{
    int n;
    do
    {
        cin >> n;
        if (n != -1)
            addtail(L, createNode(n));
    } while (n != -1);
}
int count_even(node *p)
{
    int x = 0;
    if (p == NULL)
        return 0;
    else
    {
        while (p != NULL)
        {
            if (p->data % 2 == 0)
                x++;
            p = p->next;
        }
    }
    return x;
}
int main()
{
    LIST L;
    CreateEmptyList(L);

    CreateList(L);
    cout << count_even(L.pHead);

    return 0;
}
