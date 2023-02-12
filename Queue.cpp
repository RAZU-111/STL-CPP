#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    // enqueue O(1)
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size : " << q.size() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << "Size : " << q.size() << endl;
}