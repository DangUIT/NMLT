#include <iostream>
using namespace std;
struct node
{
    int value;
    node *next;
};
node *createnode(int x)
{
    node *p = new node;
    p->next = NULL;
    p->value = x;
    return p;
}
void printNode(node *l)
{
    node *p = l;
    while (p != NULL)
    {
        cout << p->value << " ";
        p = p->next;
    }
}
node *addNode(node *l, int x)
{
    node *p = createnode(x);
    l->next = p;
    return p;
}
node *addHead(node *l, int x)
{
    node *p = new node;
    p->value = x;
    p->next = l;
    return p;
}
node *addTail(node *l, int x)
{
    node *p = l;
    while (p->next != NULL)
    {
        p = p->next;
    }
    node *p2 = new node;
    p2->value = x;
    p2->next = NULL;
    p->next = p2;
    return l;
}
node *addAt(node *l, int x, int k)
{
    node *p = l;
    for (int i = 0; i < k - 1; i++)
    {
        p = p->next;
    }
    node *p2 = new node;
    p2->value = x;
    p2->next = p->next;
    p->next = p2;
    return l;
}
int main()
{
    int n, x, k;
    cin >> n >> x;
    node *l = createnode(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addNode(p, x);
    }
    cin >> k >> x;
    if (k == 0)
        l = addHead(l, x);
    else if (k == n)
        l = addTail(l, x);
    else
        l = addAt(l, x, k);
    printNode(l);
    return 0;
}
