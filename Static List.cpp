#include<bits/stdc++.h>
using namespace std;

#define maxSize 1000
#define backList -9999

int lst[maxSize];
int len;

///Initialization The List
void initializeList()
{
len = 0;
}

/// Insert Item In The List
void insertItem(int newitem)
{
if (len == maxSize)
{
 cout << "List Is Full" << endl;

return;

}
lst[len] = newitem ;
len++;
}

/// Get The List
int getList(int pos)
{
    if(pos<0 || pos >=len)
    {
        printf("Invalid index.\n");
        return -1;
    }
    cout << lst[pos] << endl;
    return lst[pos];
}

/// Search Item In Ihe List
int searchItem(int item)
{
for(int s=0; s<len; s++)
    {
        if(lst[s]==item)
        {
                cout << s << endl;
            return s;
        }
    }
    cout << "Sorry! Not Found" << endl;
    return backList;
}

/// Delete List Item In Oder
void deleteItemOrdered(int pos)
{
if ( pos<=0 || pos >= len )
    {
        cout << "No Index" << endl;
        return;
    }

lst[pos] = lst[len-1];
len--;
}

/// Get The Length Of The List
int length()
{
    return len;
}

/// Delete Item
int deleteItem(int item)
{
int pos = searchItem(item);

deleteItemOrdered(pos);
}

int insertItem(int pos,int item)
{
lst[pos] = item;
}

///Alter Item In The List
int alterItem(int pos,int value)
{
    lst[pos] = value;
}

/// Delete The Last Item In The List
void deleteLast()
{
    lst[len-1];
}

/// Print The List
void printList()
{
    for(int i=0; i<len; i++)
    cout << lst[i] << endl;
}

int main()
{
    initializeList();
    cout << "01. Insert new item "<< endl;
    cout << "02. Get New Item" << endl;
    cout << "03. Search Item" << endl;
    cout << "04. Delete Item Ordered" << endl;
    cout << "05. Simply Delete any Item" << endl;
    cout << "06. Get Length" << endl;
    cout << "07. Insert Item at any point" << endl;
    cout << "08. Alter Item" << endl;
    cout << "09. Delete last Item" << endl;
    cout << "10. Print" << endl;
    cout << "11. Exit" << endl;

    while(1)
    {

        int x;

        cin >> x;

        if(x==1)
        {
            int item;

            cin >> item;
            insertItem(item);
        }
        else if(x==2)
        {
            int pos;

            cin >> pos;
            getList(pos);
        }
        else if(x==3){
            int item;

            cin >> item;
            searchItem(item);
        }
        else if(x==4)
        {
            int pos;

            cin >> pos ;
            deleteItemOrdered(pos);
        }
        else if(x==5)
        {
            int item;

            cin >> item;
            deleteItem(item);
        }
        else if(x==6)
        {
            int len = length();
            cout << len;
        }
        else if(x==7)
        {
            int pos,item;
            cin >> pos >> item;

            insertItem(pos,item);
        }
        else if(x==8)
        {
            int pos,Value;
            cin >> pos >> Value;

            insertItem(pos,Value);
        }
        else if(x==9)
        {
            deleteLast();
        }
        else if(x==10)
        {
            printList();
        }
        else if(x==11)
        {
            break;
        }
    }

}
