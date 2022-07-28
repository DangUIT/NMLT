/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

// Cấu trúc của một node
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
void CreateEmptyList(LIST &L)
{
	L.pHead = L.pTail = NULL;
}
NODE *CreateNode(int x)
{
	NODE *p = new NODE;
	p->info = x;
	p->pNext = NULL;
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
void CreateList(LIST &L)
{
	int n;
	do
	{
		cin >> n;
		if (n != -1)
			addTail(L, CreateNode(n));
	} while (n != -1);
}
void Join(LIST &L, LIST &L1, NODE *pivot, LIST &L2)
{
	if (L1.pHead == NULL)
	{
		L.pHead = L.pTail = pivot;
		if (L2.pHead != NULL)
		{
			pivot->pNext = L2.pHead;
			pivot = L2.pHead;
		}
	}
	else
	{
		L.pHead = L.pTail = L1.pHead;
		L1.pTail->pNext = pivot;
		if (L2.pHead != NULL)
		{
			pivot->pNext = L2.pHead;
			pivot = L2.pHead;
		}
	}
	CreateEmptyList(L1);
	CreateEmptyList(L2);
}
void PrintList(LIST &L)
{
	NODE *p = L.pHead;
	while (p != NULL)
	{
		cout << p->info << " ";
		p = p->pNext;
	}
}

int main()
{
	LIST L, L1, L2;

	int x;
	NODE *pivot;

	CreateEmptyList(L);
	CreateEmptyList(L1);
	CreateEmptyList(L2);

	CreateList(L1);
	cin >> x;
	pivot = CreateNode(x);
	CreateList(L2);

	Join(L, L1, pivot, L2);
	PrintList(L);

	return 0;
}
