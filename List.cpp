#include <bits/stdc++.h>
using namespace std;
void print(list<int> l)
{
    // O(n)
    // list<int>::iterator it = l.begin();
    auto it = l.begin();
    while (it != l.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}
// Insert at any position
void Insert(list<int> &l, int index, int value)
{
    auto it = l.begin();
    advance(it, index);//O(index)
    l.insert(it, value);
}
// Delet at any position
void Delet(list<int> &l, int index)
{
    auto it = l.begin();
    advance(it, index);//O(index)
    l.erase(it);
}
int main()
{
    list<int> l;
    // O(1)
    l.push_front(30);
    l.push_front(20);
    l.push_front(10);

    // print(l);
    l.push_back(40);
    l.push_back(70);
    l.push_back(60);
    l.push_back(50);

    l.pop_back();
    l.pop_front();
    print(l);
    cout << "\n";

    l.sort();
    print(l);

    Insert(l, 0, 10);
    print(l);

    Delet(l,1);
    print(l);
    cout<<l.size()<<endl;
}
