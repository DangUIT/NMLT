#include <iostream>
#include <string>

using namespace std;

struct NODE
{
    int iSoPhong;
    string cType;
    NODE *Next;
};

struct LIST
{
    NODE *pHead;
    NODE *pTail;
};

void CreateEmptyList(LIST &L)
{
    L.pHead = NULL;
    L.pTail = NULL;
}

NODE *CreateRoom(int x, string y)
{
    NODE *New_Node = new NODE;
    if (New_Node == NULL)
    {
        exit(1);
    }
    New_Node->cType = y;
    New_Node->iSoPhong = x;
    New_Node->Next = NULL;
    return New_Node;
}

void AddTail(LIST &L, NODE *New_Node)
{
    if (L.pHead == NULL)
    {
        L.pHead = New_Node;
        L.pTail = L.pHead;
    }
    else
    {
        L.pTail->Next = New_Node;
        L.pTail = New_Node;
    }
}

void GetRoom(LIST &L)
{
    int iRoomNumber;
    string cRoomType;
    int iNORoom;
    cout << "Nhap so luong phong: ";
    getline(cin,cRoomType);
    for (int i = 1; i <= iNORoom; ++i)
    {

        cout << "Nhap so phong: ";
        cin >> iRoomNumber;
        cout << "Nhap kieu phong (A: phong don , B: phong doi)";
        cin >> cRoomType;
        NODE *Temp = CreateRoom(iRoomNumber, cRoomType);
        AddTail(L, Temp);
    }
}

int main()
{
    int iOption;
    LIST L;
    CreateEmptyList(L);
    GetRoom(L);
    cout << "Da tao thanh cong" << endl;
}