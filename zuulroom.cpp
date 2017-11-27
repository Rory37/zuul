#include "zuulroom.h"//All of the includes
#include <iostream>
#include <cstring>
#include <map>

using namespace std; 

void zuulroom::setDes(char* newDes) { //method to create a description for rooms (passes pointer to char array)
  des = new char[100]; // defines what it is pointing to
  strcpy(des, newDes); //copies description into the other pointer
}

char* zuulroom::getDes() {//gets the pointer to the description and returns it
  return des;
}

void zuulroom::setMap(map<char*, zuulroom*>* newExits) {//passes the pointer to a map of char* and zuulroom*(for exits)
  exits = new map<char*, zuulroom*>; //defines what exits points to
  exits = newExits; // store the exits
}

map<char*, zuulroom*>* zuulroom::getMap() {//returns pointer to the map of exits
  return exits;
}

void zuulroom::setTitle(char* newTitle) { //method to create a name for rooms (passes pointer to char array)
  title = new char[80]; // defines what it is pointing to
  strcpy(title, newTitle); //copies name into the other pointer
}

char* zuulroom::getTitle() {//gets the pointer to the name and returns it
  return title;
}
