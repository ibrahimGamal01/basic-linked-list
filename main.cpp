#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
  NumberList list;

  list.appendNode(2.5);
  list.appendNode(7.9);
  list.appendNode(12.6);
  // cout << list.findNode(2.5)<<endl;
  list.displayList();
  list.deleteNode(12.6);
  list.appendNode(145);
  cout << endl;
  list.displayList();
  cout << endl;
  list.insertNode(2, 1.5);
  list.displayList();
  cout << endl;
  list.deleteList();
  list.displayList();

  return 0;
}