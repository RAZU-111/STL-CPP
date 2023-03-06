#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    cout << s.size() << endl;
    for (auto it : s)
        cout << it << " ";

    s.erase(s.find(30));

    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << endl;
    cout << s.size() << endl;
}
