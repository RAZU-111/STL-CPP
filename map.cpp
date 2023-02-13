#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<int,int>m;
   m[1]=10;
   m[2]=20;
   m[3]=30;
   m[2]=40;
   m[1]=50;
   for(auto it : m)
    cout<<it.first<<" -> "<<it.second<<endl;

}
