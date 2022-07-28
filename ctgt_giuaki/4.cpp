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
    node *head;
    node *tail;
};
node *newnode(int data)
{
    node *p = new node;
    p->data = data;
    p->next = NULL;
}
void CreateEmptyList(LIST &L)
{
    L.head = L.tail = NULL;
}
void addTail(LIST &L, node *add)
{
    if (L.head == NULL)
        L.head = L.tail = add;
    L.tail->next = add;
    L.tail = add;
}
void CreateList(LIST &L)
{
    int n;
    do
    {
        cin >> n;
        if (n != -1)
            addTail(L, newnode(n));
    } while (n != -1);
}
int checkprime(int x)
{
    if (x < 2)
        return 0;
    else
    {
        for (int i = 2; i <= x / 2; i++)
            if (x % i == 0)
                return 0;
    }
    return 1;
}
int add_after_all_prime(LIST &L, int y)
{
    node *t = L.head;
    while (t != NULL)
    {
        if (checkprime(t->data) == 1)
        {
            node *p = newnode(y);
            node *m = t->next;
            p->next = m;
            t->next = p;
            t = t->next;
        }
        t = t->next;
    }
}
void PrintList(LIST L)
{
    if (L.head == NULL)
        cout << "Empty List.";
    node *p = L.head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    LIST L;
    int Y;

    CreateEmptyList(L);

    CreateList(L);

    std::cin >> Y;
    add_after_all_prime(L, Y);

    PrintList(L);

    return 0;
}
