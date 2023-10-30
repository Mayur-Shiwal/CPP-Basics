#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //create Queue
    queue<int> q;
    q.push(4);
    q.push(2);
    q.push(5);
    q.push(7);
    q.push(12);

    cout<<"Front of Queue is: "<<q.front()<<endl;

    cout<<"Size of queue is: "<< q.size()<<endl;
    q.pop();
    cout<<"Size of queue is: "<< q.size()<<endl;

    if(q.empty()){
        cout<<"queue is Empty "<<endl;
    }
    else{
        cout<<"queue is not Empty"<<endl;
    }
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<"size of queue is: "<<q.size()<<endl;
        if(q.empty()){
        cout<<"queue is Empty "<<endl;
    }
    else{
        cout<<"queue is not Empty"<<endl;
    }
    return 0;
}
