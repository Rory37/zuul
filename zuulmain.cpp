#include <iostream>
#include <map> //includes the map extension
#include <vector>
#include <cstring>
#include "zuulroom.h"
#include "zuulitem.h"

using namespace std;

int main() {
  cout << "It is a stormy night. Raining. More than usual. You have heard of a man with a portal to the \033[34mfuture\033[0m";//use Ansi Escape for effects

  //Setting up all the rooms
  vector <zuulroom*>* roomlist = new vector<zuulroom*>(); //makes vector to hold all of the rooms
  zuulroom* r1 = new zuulroom();//Creates new room
  char* n1 = new char[80]; //Creates pointer to array
  strcpy (n1, "Mine Entrance");//points to name
  r1 -> setTitle(n1);//sets name
  roomlist -> push_back(r1);//adds room to vector

}
