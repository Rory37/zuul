#include <iostream>
#include <map> //includes the map extension
#include <vector>
#include <cstring>
#include "zuulroom.h"
#include "zuulitem.h"

using namespace std;

int main() {
  cout << "It is a stormy night. Raining. More than usual. You have heard of a man with a portal to the \033[34mfuture\033[0m. However, he is a" << endl <<" recluse in a \033[31mvolcano mine\033[0m. So, like any teenager, you head straight to it." << endl;//use Ansi Escape for effects

  //Setting up all the rooms
  vector <zuulroom*>* roomlist = new vector<zuulroom*>(); //makes vector to hold all of the rooms
  zuulroom* r1 = new zuulroom();//Creates new room
  zuulroom* r2 = new zuulroom();//Creates new room
  zuulroom* r3 = new zuulroom();//Creates new room
  zuulroom* r4 = new zuulroom();//Creates new room
  zuulroom* r5 = new zuulroom();//Creates new room
  zuulroom* r6 = new zuulroom();//Creates new room
  zuulroom* r7 = new zuulroom();//Creates new room
  zuulroom* r8 = new zuulroom();//Creates new room
  zuulroom* r9 = new zuulroom();//Creates new room
  zuulroom* r10 = new zuulroom();//Creates new room
  zuulroom* r11 = new zuulroom();//Creates new room
  zuulroom* r12 = new zuulroom();//Creates new room
  zuulroom* r13 = new zuulroom();//Creates new room
  zuulroom* r14 = new zuulroom();//Creates new room
  zuulroom* r15 = new zuulroom();//Creates new room
  
  //Mine Entrance
  char* n1 = new char[80]; //Creates pointer to array
  strcpy (n1, "Mine Entrance");//points to name
  r1 -> setTitle(n1);//sets name
  char* d1 = new char[80]; //Creates pointer to array
  strcpy (d1, "The atmosphere is \033[31mhot\033[0m. You see ash falling. There is a large locked iron gate.");//points to description
  r1 -> setDes(d1);//sets description
  map<char*, zuulroom*>* m1 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d1ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d1ir1, "NORTH"); //Puts direction in array of the pointer
  m1 -> insert(pair<char*,zuulroom*>(d1ir1, r2));//adds the direction and room to the map (Mine Main Room)
  r1 -> setMap(m1);//sets the map for the room
  roomlist -> push_back(r1);//adds room to vector

  //Mine Main Room
  char* n2 = new char[80]; //Creates pointer to array
  strcpy (n2, "Mine Main Room");//points to name
  r2 -> setTitle(n2);//sets name
  char* d2 = new char[80]; //Creates pointer to array
  strcpy (d2, "It is very \033[36mcool[0. There is a minecart full of coal. The iron gate has closed");//points to description
  r2 -> setDes(d2);//sets description
  map<char*, zuulroom*>* m2 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d2ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d2ir1, "NORTH"); //Puts direction in array of the pointer
  m2 -> insert(pair<char*,zuulroom*>(d2ir1, r3));//adds the direction and room to the map (elevator)
  char* d2ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d2ir2, "WEST"); //Puts direction in array of the pointer
  m2 -> insert(pair<char*,zuulroom*>(d2ir2, r4));//adds the direction and room to the map (supply room)
  char* d2ir3 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d2ir3, "SOUTH"); //Puts direction in array of the pointer
  m2 -> insert(pair<char*,zuulroom*>(d2ir3, r1));//adds the direction and room to the map (mine entrance)
  char* d2ir4 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d2ir4, "EAST"); //Puts direction in array of the pointer
  m2 -> insert(pair<char*,zuulroom*>(d2ir4, r5));//adds the direction and room to the map (Mine Branch)
  r2 -> setMap(m2);//sets the map for the room
  roomlist -> push_back(r2);//adds room to vector

  //Elevator
  char* n3 = new char[80]; //Creates pointer to array
  strcpy (n3, "Elevator");//points to name
  r3 -> setTitle(n3);//sets name
  char* d3 = new char[80]; //Creates pointer to array
  strcpy (d3, "The elevator \033[33mcrashes[0m! You miraculously survive, but the only way out is a door 10 feet over your head");//points to description
  r3 -> setDes(d3);//sets description
  map<char*, zuulroom*>* m3 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d3ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d3ir1, "NORTH"); //Puts direction in array of the pointer
  m3 -> insert(pair<char*,zuulroom*>(d3ir1, r6));//adds the direction and room to the map (lower section)
  r3 -> setMap(m3);//sets the map for the room
  roomlist -> push_back(r3);//adds room to vector

  //Supply Room
  char* n4 = new char[80]; //Creates pointer to array
  strcpy (n4, "Supply Room");//points to name
  r4 -> setTitle(n4);//sets name
  char* d4 = new char[80]; //Creates pointer to array
  strcpy (d4, "There are a bunch of miscellanious \033[32msupplies[0m strewn about");//points to description
  r4 -> setDes(d4);//sets description
  map<char*, zuulroom*>* m4 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d4ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d4ir1, "NORTH"); //Puts direction in array of the pointer
  m4 -> insert(pair<char*,zuulroom*>(d4ir1, r7));//adds the direction and room to the map (Hole Room)
  char* d4ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d4ir2, "EAST"); //Puts direction in array of the pointer
  m4 -> insert(pair<char*,zuulroom*>(d4ir2, r2));//adds the direction and room to the map (Mine Main Room)
  r4 -> setMap(m4);//sets the map for the room
  roomlist -> push_back(r4);//adds room to vector

  //Mine Branch
  char* n5 = new char[80]; //Creates pointer to array
  strcpy (n5, "Elevator");//points to name
  r5 -> setTitle(n5);//sets name
  char* d5 = new char[80]; //Creates pointer to array
  strcpy (d5, "It is an empty mine room. There is a crack in the wall, and a pile of dirt");//points to description
  r5 -> setDes(d5);//sets description
  map<char*, zuulroom*>* m5 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d5ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d5ir1, "WEST"); //Puts direction in array of the pointer
  m5 -> insert(pair<char*,zuulroom*>(d5ir1, r2));//adds the direction and room to the map (Mine Main Room)
  r5 -> setMap(m5);//sets the map for the room
  roomlist -> push_back(r5);//adds room to vector

  //Lower Section
  char* n6 = new char[80]; //Creates pointer to array
  strcpy (n6, "Lower Section");//points to name
  r6 -> setTitle(n3);//sets name
  char* d6 = new char[80]; //Creates pointer to array
  strcpy (d6, "It is yet another dusty room (What a Surprise) with a fork in it");//points to description
  r6 -> setDes(d6);//sets description
  map<char*, zuulroom*>* m6 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d6ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d6ir1, "WEST"); //Puts direction in array of the pointer
  m6 -> insert(pair<char*,zuulroom*>(d6ir1, r7));//adds the direction and room to the map (Cracked tunnel)
  char* d6ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d6ir2, "EAST"); //Puts direction in array of the pointer
  m6 -> insert(pair<char*,zuulroom*>(d6ir2, r8));//adds the direction and room to the map (Break Room)
  r6 -> setMap(m6);//sets the map for the room
  roomlist -> push_back(r6);//adds room to vector
}
