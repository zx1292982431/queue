#include<iostream>
using namespace std;
const int m = 5;
class queue
{
    int data[m];
    int front;
    int count;
public:
    queue() { count = 0; front = 0; }
    bool empty()
    {
        if (count == 0) return 1;
        return 0;
    }
    bool full()
    {
        if ((front + count) % m == front&&front!=count) return 1;
        return 0;
    }
    void push(int x)
    {
        if (!full()) { data[(front+count + 1)%m] = x; count++; }
        else cout << "队满" << endl;
    }
    void pop()
    {
        if (!empty()) { front=(front+1)%m; count--; }
        else cout<<"队空"<<endl;
    }
    int get_head()
    {
        if (!empty()) return data[(front + 1)%m];
        else cout << "队空" << endl;
    }
};
int main()
{
    queue q;
    if (q.empty()) { cout << "队空" << endl; }
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << q.get_head() << endl;
    q.pop();
    cout << q.get_head() << endl;
    q.pop();
    cout << q.get_head() << endl;
    q.pop();
    cout << q.get_head() << endl;
    q.pop();
    cout << q.get_head() << endl;
    q.pop();
    if (q.empty()) { cout << "队空" << endl; }

}