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
  strcpy (d2, "It is very \033[36mcool\033[0m. There is a minecart full of coal. The iron gate has closed");//points to description
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
  strcpy (d3, "The elevator \033[33mcrashes\033[0m! You miraculously survive, but the only way out is a door 10 feet over your head");//points to description
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
  strcpy (d4, "There are a bunch of miscellanious \033[32msupplies\033[0m strewn about");//points to description
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
  strcpy (n5, "Mine Branch");//points to name
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

  //Hole
  char* n7 = new char[80]; //Creates pointer to array
  strcpy (n7, "Hole");//points to name
  r7 -> setTitle(n7);//sets name
  char* d7 = new char[80]; //Creates pointer to array
  strcpy (d7, "You are in a small dusty room with a hole in the ground north of you. You cannot see the bottom");//points to description
  r7 -> setDes(d7);//sets description
  map<char*, zuulroom*>* m7 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d7ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d7ir1, "SOUTH"); //Puts direction in array of the pointer
  m7 -> insert(pair<char*,zuulroom*>(d7ir1, r4));//adds the direction and room to the map (Supply Room)
  r7 -> setMap(m7);//sets the map for the room
  roomlist -> push_back(r7);//adds room to vector

  //Break Room
  char* n8 = new char[80]; //Creates pointer to array
  strcpy (n8, "Break Room");//points to name
  r8 -> setTitle(n8);//sets name
  char* d8 = new char[80]; //Creates pointer to array
  strcpy (d8, "It seems to be a room where the miners took breaks");//points to description
  r8 -> setDes(d8);//sets description
  map<char*, zuulroom*>* m8 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d8ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d8ir1, "WEST"); //Puts direction in array of the pointer
  m8 -> insert(pair<char*,zuulroom*>(d8ir1, r6));//adds the direction and room to the map (Lower Section)
  r8 -> setMap(m8);//sets the map for the room
  roomlist -> push_back(r8);//adds room to vector

  //Cracked Tunnel
  char* n9 = new char[80]; //Creates pointer to array
  strcpy (n9, "Cracked Tunnel");//points to name
  r9 -> setTitle(n9);//sets name
  char* d9 = new char[80]; //Creates pointer to array
  strcpy (d9, "You are in a large tunnel. There is a cracked wall to the north and a shaft that seems to be leading up in the south.");//points to description
  r9 -> setDes(d9);//sets description
  map<char*, zuulroom*>* m9 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d9ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d9ir1, "NORTH"); //Puts direction in array of the pointer
  m9 -> insert(pair<char*,zuulroom*>(d9ir1, r10));//adds the direction and room to the map (Experiment Room)
  char* d9ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d9ir2, "EAST"); //Puts direction in array of the pointer
  m9 -> insert(pair<char*,zuulroom*>(d9ir2, r6));//adds the direction and room to the map (Lower Section)
  r9 -> setMap(m9);//sets the map for the room
  roomlist -> push_back(r9);//adds room to vector


  vector <zuulitem*> items;//Makes vector to hold all items
  zuulitem* i1 = new zuulitem();//Creates new item
  zuulitem* i2 = new zuulitem();//Creates new item
  zuulitem* i3 = new zuulitem();//Creates new item
  zuulitem* i4 = new zuulitem();//Creates new item
  zuulitem* i5 = new zuulitem();//Creates new item

  
  //Key
  char* in1 = new char [80];
  strcpy(in1, "KEY");
  i1 -> setName(in1);
  i1 -> setLoc(r1);
  items.push_back(i1);
  
  bool playing = true;
  zuulroom* curr = r1;//Creates new room that keeps track of current room
  while (playing == true) {//exits when won, lost, or quit
    //Prints info about the room
    cout << "You are in the " << curr -> getTitle() << "." << endl;
    cout << curr -> getDes() << endl;
    map<char*, zuulroom*>* curmap = curr -> getMap();//Retrieves room's map
    cout << "Directions: " << endl;
    for(map<char*,zuulroom*>::iterator it = curmap -> begin(); it != curmap -> end(); ++it) {//Goes through entire map
      cout << it -> first << endl; //Prints key of map(direction)
    }
    bool legal = false;
    while (legal == false) {//To make sure the command is correct
      legal == false;
      cout << "Input a command (Input HELP to see all available commands)" << endl;
      char* command = new char [80];
      cin.getline(command, 80);//Gets the command
      if (strcmp(command, "NORTH") == 0 || strcmp(command, "SOUTH") == 0 || strcmp(command, "WEST") == 0 || strcmp(command, "EAST") == 0) { //If it is a direction
	
	for(map<char*,zuulroom*>::iterator it = curmap -> begin(); it != curmap -> end(); ++it) {//go through map
	  if (strcmp(command, it -> first) == 0) { //If the direction matches a key
	    legal = true; //legal move
	    curr = it -> second; //changes room
	  }
	}
      }

      else if (strcmp(command, "INSPECT") == 0) {
	
	for (vector<zuulitem*>::iterator it = items.begin(); it != items.end(); ++it) {
	  if ((*it) -> getLoc() == curr) {
	    cout << (*it) -> getName() << endl;
	  }
	}
	legal = true;
      }
      
      else if (strcmp(command, "HELP") == 0) {//Prints all commands
	cout << "Commands:" << endl;
	cout << "NORTH, SOUTH, EAST, or WEST" << endl;
	cout << "HELP" << endl;
	cout << "INSPECT" << endl;
	cout << "PICKUP" << endl;
	cout << "DROP" << endl;
	cout << "QUIT" << endl;
	legal = true;
      }
      
      else if (strcmp(command, "QUIT") == 0) {//Ends the program
	legal = true;
	playing = false;
      }

      if (legal == false) {
	cout << "The inputted command is invalid" << endl;
      }
    }
  }
  
}
