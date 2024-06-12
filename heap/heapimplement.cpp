#include<bits/stdc++.h>
using namespace std;

class MinHeap
{
    public:

    int *arr;
    int capacity;
    int size;
    MinHeap(int x)
    {
        capacity=x;
        size=0;
        arr=new int[capacity];
    }
    int left(int i)
    {
        return 2*i+1;
    }
    int right(int i)
    {
        return 2*i+2;
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
    void insert(int x)
    {
        if(size==capacity)
        return;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0&&arr[parent(i)]>arr[i];)
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void minHeap(int i)
    {
        int lt=left(i);
        int rt=right(i);
        int smallest=i;
        if(lt<size&&arr[lt]<arr[smallest])
        {
            smallest=lt;
        }
        if(rt<size&&arr[rt]<arr[smallest])
        smallest=rt;
        if(smallest!=i)
        {
            swap(arr[smallest],arr[i]);
            minHeap(smallest);
        }
    }
    int extraction()
    {
        if(size<=0)
        return INT_MAX;
        if(size==1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        minHeap(0);
        return arr[size];
    }

    void decreaseKey(int i,int x)
    {
        arr[i]=x;
        while(i!=0&&arr[parent(i)]>arr[i])
        {
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void deleteKey(int i)
    {
        decreaseKey(i,INT_MIN);
        extraction();
    }
    void buildHeap()
    {
        for(int i=(size-2)/2;i>=0;i--)
        {
            minHeap(i);
        }
    }
};

int main()
{
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
    cout << h.extraction() << " ";
    return 0;
}