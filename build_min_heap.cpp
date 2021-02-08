#include <iostream>
#include <math.h>
using namespace std;

int size=1;

void print_tree(int heap[])
{
    cout<<endl;
    int x=0;
    for(int i=1; i<=size; i++)
    {
        cout<<heap[i]<<"\t";
        if(pow(2, x)==i)
        {
            x++;
            cout<<endl;
        }
    }
}

void ins(int e, int heap[], int i)
{
    heap[i]=e;
    int x=i;
    while(x/2>0 && heap[i]<heap[i/2])
    {
        swap(heap[i], heap[i/2]);
        i/=2;
    }
}

int main()
{
    int heap[1000];
    int e;
    cout<<"Enter elements: ";
    while(scanf("%d", &e)==1)
    {
        ins(e, heap, size);
        size++;
    }

    print_tree(heap);
}