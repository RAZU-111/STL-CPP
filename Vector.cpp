#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  // declare iterator
  vector<int>::iterator it;

  // initialize the iterator with the first element
  it = num.begin();

  // print the vector element
  cout << "num[0] = " << *it << endl;

  // iterator points to the 3rd element
  it = num.begin() + 2;
  cout << "num[2] = " << *it;

  // iterator points to the last element
  it = num.end() - 1;
  cout << "num[4] = " << *it;

  return 0;
}