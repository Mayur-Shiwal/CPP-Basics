#include <iostream>

using namespace std;

class kQueue{

public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

public:
    //constructor initialization
    kQueue(int n, int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for(int i=0;i<n;i++){
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for(int i= 0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] =-1;
        arr = new int[n];
        freeSpot = 0;

    }
    void enqueu(int data , int qn){

        //overflow condition check
        if(freeSpot == -1){
            cout<<"No free space is available"<<endl;
            return;
        }

        //find first free index
        int index = freeSpot;

        //update freeSpot
        freeSpot = next[index];

        //check for the first element
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            //link new element to the previous element
            next[rear[qn-1]] = index;
        }

        //update next
        next[index] = -1;

        //update rear
        rear[qn-1] = index;

        //push element
        arr[index] = data;

    }
    int dequeue(int qn){
        //underflow
        if(front[qn-1] == -1){
            cout<<"queue underflow"<<endl;
            return -1;
        }
        //find index to pop
        int index = front[qn-1];

        //front ko aage badhao
        front[qn-1] = next[index];

        //freeSlot ko manage karo
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }


};

int main()
{
    kQueue q(10,3);
    q.enqueu(10,1);
    q.enqueu(13,1);
    q.enqueu(15,2);
    q.enqueu(20,1);
    q.enqueu(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    //to check underflow condition is working or not
    cout<<q.dequeue(1)<<endl;

    return 0;
}
