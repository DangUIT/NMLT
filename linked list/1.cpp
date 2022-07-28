#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createNode(int x)
{
    node *p;
    p = new node;
    p->next = NULL;
    p->data = x;
    return p;
}
void printNode(node *l)
{
    node *p = l;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
node *addElement(node *l, int x)
{
    node *temp = createNode(x);
    l->next = temp;
    return temp;
}
int main()
{
    int n, x;
    cin >> n >> x;
    node *l;
    l = createNode(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    printNode(l);
    return 0;
}