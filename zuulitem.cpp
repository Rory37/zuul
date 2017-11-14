#include <iostream>
#include <cstring>
#include "zuulitem.h"

using namespace std;

void zuulitem::setName(char* newName) {//Takes in pointer to name of item
  name = new char[80]; //Declares what name is pointing to
  strcpy(name, newName); //Copies the item name into char* name
}

char* zuulitem::getName(){ //returns name of item
  return name;
}

void zuulitem::setLoc(zuulroom* newLoc) { //Takes in pointer to room which item will be in
  loc = newLoc;
}

zuulroom* zuulitem::getLoc() {//returns the location of the item
  return loc;
}
