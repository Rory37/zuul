#include <iostream>
#include <map> //includes the map extension
#include <vector>
#include <cstring>
#include "zuulroom.h"
#include "zuulitem.h"

using namespace std;

int main() {
  cout << "It is a stormy night. Raining. More than usual. You have heard of a man with a portal to the \033[34mfuture\033[0m. However, he is a" << endl <<" recluse in a \033[31mvolcano mine\033[0m. So, like any teenager, you head straight to it. Also, turn on caps lock" << endl;//use Ansi Escape for effects

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
  zuulroom* i = new zuulroom();//Creates a inventory room
  zuulroom* d = new zuulroom(); //A room that always results in death
  zuulroom* g = new zuulroom(); //A room for used up items
  
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
  char* d2ir4 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d2ir4, "EAST"); //Puts direction in array of the pointer
  m2 -> insert(pair<char*,zuulroom*>(d2ir4, r5));//adds the direction and room to the map (Mine Branch)
  r2 -> setMap(m2);//sets the map for the room
  roomlist -> push_back(r2);//adds room to vector

  //Elevator
  char* n3 = new char[80]; //Creates pointer to array
  strcpy (n3, "Elevator");//points to name
  r3 -> setTitle(n3);//sets name
  char* d3 = new char[120]; //Creates pointer to array
  strcpy (d3, "The elevator \033[33mcrashes\033[0m! You miraculously survive, but the closest exit is ten feet above your head");//points to description
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
  r6 -> setTitle(n6);//sets name
  char* d6 = new char[80]; //Creates pointer to array
  strcpy (d6, "It is yet another dusty room (What a Surprise) with a fork in it");//points to description
  r6 -> setDes(d6);//sets description
  map<char*, zuulroom*>* m6 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d6ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d6ir1, "WEST"); //Puts direction in array of the pointer
  m6 -> insert(pair<char*,zuulroom*>(d6ir1, r9));//adds the direction and room to the map (Cracked tunnel)
  char* d6ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d6ir2, "EAST"); //Puts direction in array of the pointer
  m6 -> insert(pair<char*,zuulroom*>(d6ir2, r8));//adds the direction and room to the map (Break Room)
  r6 -> setMap(m6);//sets the map for the room
  roomlist -> push_back(r6);//adds room to vector

  //Hole
  char* n7 = new char[80]; //Creates pointer to array
  strcpy (n7, "Hole");//points to name
  r7 -> setTitle(n7);//sets name
  char* d7 = new char[100]; //Creates pointer to array
  strcpy (d7, "You are in a small dusty room with a hole in the ground north of you. You cannot see the bottom");//points to description
  r7 -> setDes(d7);//sets description
  map<char*, zuulroom*>* m7 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d7ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d7ir1, "SOUTH"); //Puts direction in array of the pointer
  m7 -> insert(pair<char*,zuulroom*>(d7ir1, r4));//adds the direction and room to the map (Supply Room)
  char* d7ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d7ir2, "NORTH"); //Puts direction in array of the pointer
  m7 -> insert(pair<char*,zuulroom*>(d7ir2, d));//adds the direction and room to the map (Supply Room)
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
  char* d9 = new char[120]; //Creates pointer to array
  strcpy (d9, "You are in a large tunnel. There is a cracked wall to the north and a shaft that seems to be leading up in the south.");//points to description
  r9 -> setDes(d9);//sets description
  map<char*, zuulroom*>* m9 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d9ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d9ir1, "NORTH"); //Puts direction in array of the pointer
  m9 -> insert(pair<char*,zuulroom*>(d9ir1, r10));//adds the direction and room to the map (Experiment Room)
  char* d9ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d9ir2, "EAST"); //Puts direction in array of the pointer
  m9 -> insert(pair<char*,zuulroom*>(d9ir2, r6));//adds the direction and room to the map (Lower Section)
  char* d9ir3 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d9ir3, "SOUTH"); //Puts direction in array of the pointer
  m9 -> insert(pair<char*,zuulroom*>(d9ir3, d));//adds the direction and room to the map (Death)
  r9 -> setMap(m9);//sets the map for the room
  roomlist -> push_back(r9);//adds room to vector

  //Experiment
  char* n10 = new char[80]; //Creates pointer to array
  strcpy (n10, "Experiment room");//points to name
  r10 -> setTitle(n10);//sets name
  char* d10 = new char[120]; //Creates pointer to array
  strcpy (d10, "The room has polished metal walls. Beakers of suspicious chemicals are on a table");//points to description
  r10 -> setDes(d10);//sets description
  map<char*, zuulroom*>* m10 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d10ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d10ir1, "NORTH"); //Puts direction in array of the pointer
  m10-> insert(pair<char*,zuulroom*>(d10ir1, r11));//adds the direction and room to the map (Lava Room)
  char* d10ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d10ir2, "EAST"); //Puts direction in array of the pointer
  m10-> insert(pair<char*,zuulroom*>(d10ir2, r13));//adds the direction and room to the map (Bedroom)
  char* d10ir3 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d10ir3, "SOUTH"); //Puts direction in array of the pointer
  m10-> insert(pair<char*,zuulroom*>(d10ir3, r9));//adds the direction and room to the map (Cracked Tunnel Wall)
  r10-> setMap(m10);//sets the map for the room
  roomlist -> push_back(r10);//adds room to vector
  
  //Lava Room
  char* n11= new char[80]; //Creates pointer to array
  strcpy (n11, "Lava Room");//points to name
  r11 -> setTitle(n11);//sets name
  char* d11 = new char[120]; //Creates pointer to array
  strcpy (d11, "Its a room with rows of lava on either side.");//points to description
  r11 -> setDes(d11);//sets description
  map<char*, zuulroom*>* m11 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d11ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d11ir1, "NORTH"); //Puts direction in array of the pointer
  m11 -> insert(pair<char*,zuulroom*>(d11ir1, r12));//adds the direction and room to the map (Experiment Room)
  r11 -> setMap(m11);//sets the map for the room
  char* d11ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d11ir2, "SOUTH"); //Puts direction in array of the pointer
  m11 -> insert(pair<char*,zuulroom*>(d11ir2, r10));//adds the direction and room to the map (Security Room)
  r11 -> setMap(m11);//sets the map for the room
  roomlist -> push_back(r9);//adds room to vector

  //Security Room
  char* n12 = new char[80]; //Creates pointer to array
  strcpy (n12, "Security room");//points to name
  r12 -> setTitle(n12);//sets name
  char* d12 = new char[120]; //Creates pointer to array
  strcpy (d12, "It's a room filled with computers and a complicated looking keypad");//points to descrip\tion
  r12 -> setDes(d12);//sets description
  map<char*, zuulroom*>* m12 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d12ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d12ir1, "SOUTH"); //Puts direction in array of the pointer
  m12-> insert(pair<char*,zuulroom*>(d12ir1, r11));//adds the direction and room to the map (Lava Room)
  r12-> setMap(m12);//sets the map for the room
  roomlist -> push_back(r12);//adds room to vector

  //Bedroom
  char* n13 = new char[80]; //Creates pointer to array
  strcpy (n13, "Bedroom");//points to name
  r13 -> setTitle(n13);//sets name
  char* d13 = new char[120]; //Creates pointer to array
  strcpy (d13, "It is a bedroom. It seems like someone actually lives here");//points to descrip\tion
  r13 -> setDes(d13);//sets description
  map<char*, zuulroom*>* m13 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d13ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d13ir1, "NORTH"); //Puts direction in array of the pointer
  m13-> insert(pair<char*,zuulroom*>(d13ir1, r15));//adds the direction and room to the map (Portal Room)
  char* d13ir2 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d13ir2, "EAST"); //Puts direction in array of the pointer
  m13-> insert(pair<char*,zuulroom*>(d13ir2, r14));//adds the direction and room to the map (Vault)
  char* d13ir3 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d13ir3, "WEST"); //Puts direction in array of the pointer
  m13-> insert(pair<char*,zuulroom*>(d13ir3, r10));//adds the direction and room to the map (Experiment room)
  r13-> setMap(m13);//sets the map for the room
  roomlist -> push_back(r13);//adds room to vector

  //Vault
  char* n14 = new char[80]; //Creates pointer to array
  strcpy (n14, "Vault");//points to name
  r14 -> setTitle(n14);//sets name
  char* d14 = new char[120]; //Creates pointer to array
  strcpy (d14, "It's a small safe filled with gold bars");//points to descrip\tion
  r14 -> setDes(d14);//sets description
  map<char*, zuulroom*>* m14 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d14ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d14ir1, "WEST"); //Puts direction in array of the pointer
  m14-> insert(pair<char*,zuulroom*>(d14ir1, r13));//adds the direction and room to the map (Bedroom)
  r14-> setMap(m14);//sets the map for the room
  roomlist -> push_back(r14);//adds room to vector

  //Portal room
  char* n15 = new char[80]; //Creates pointer to array
  strcpy (n15, "Portal room");//points to name
  r15 -> setTitle(n15);//sets name
  char* d15 = new char[120]; //Creates pointer to array
  strcpy (d15, "There is a glowing blue portal in the north of the room. A crazed scientist picks up a laser guns and aim");//points to description
  r15 -> setDes(d15);//sets description
  map<char*, zuulroom*>* m15 = new map<char*, zuulroom*>;//creates a new map pointer
  char* d15ir1 = new char[80]; //direction corresponding with room(pointer)
  strcpy (d15ir1, "NORTH"); //Puts direction in array of the pointer
  m15-> insert(pair<char*,zuulroom*>(d15ir1, r1));//adds the direction and room to the map (Mine Entrance)
  r15-> setMap(m15);//sets the map for the room
  roomlist -> push_back(r10);//adds room to vector

	       
  vector <zuulitem*> items;//Makes vector to hold all items
  zuulitem* i1 = new zuulitem();//Creates new item
  zuulitem* i2 = new zuulitem();//Creates new item
  zuulitem* i3 = new zuulitem();//Creates new item
  zuulitem* i4 = new zuulitem();//Creates new item
  zuulitem* i5 = new zuulitem();//Creates new item
  zuulitem* i6 = new zuulitem();//Creates new item
  zuulitem* i7 = new zuulitem();//Creates new item

  
  //Key
  char* in1 = new char [80];
  strcpy(in1, "KEY");
  i1 -> setName(in1);
  i1 -> setLoc(r1);
  items.push_back(i1);

  //Rope
  char* in2 = new char [80];
  strcpy(in2, "ROPE");
  i2 -> setName(in2);
  i2 -> setLoc(r7);
  items.push_back(i2);

  //TnT
  char* in3 = new char [80];
  strcpy(in3, "TNT");
  i3 ->setName(in3);
  i3 -> setLoc(r5);
  items.push_back(i3);

  //Muney
  char* in4 = new char [80];
  strcpy(in4, "GOLD BARS");
  i4 ->setName(in4);
  i4 -> setLoc(r14);
  items.push_back(i4);

  //Matchbook
  char* in5 = new char [80];
  strcpy(in5, "MATCHBOOK");
  i5 ->setName(in5);
  i5 -> setLoc(r8);
  items.push_back(i5);

  //Pickaxe
  char* in6 = new char [80];
  strcpy(in6, "PICKAXE");
  i6 ->setName(in6);
  i6 -> setLoc(r4);
  items.push_back(i6);

  //Supicious chemical
  char* in7 = new char [80];
  strcpy(in7, "SUSPICIOUS CHEMICAL");
  i7 ->setName(in7);
  i7 -> setLoc(r10);
  items.push_back(i7);

  
  bool playing = true;
  bool sec = true; //Says if security is enabled or not
  bool vopen= false; //Says if vault is open
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
	bool cont = true;//The room transition occurs
	//Special Conditions

	if(strcmp(command, "NORTH") == 0 && curr == r1 && i1 -> getLoc() == i) {//If in first room heading North with key
	  cout << "The door unlocked! Shortly after walking in though the mine entrance collapsed" << endl;
	}
	
	else if (strcmp(command, "NORTH") == 0 && curr == r1 && i1 -> getLoc() != i) { //If in first room Northbound without key
	  cout << "The door is locked" << endl;
	  cont = false;//Prevents room transition
	  legal = true;
	}


	if (strcmp(command, "EAST") == 0 && curr == r13 && vopen == false) { //If in first room Northbound without key
	  cout << "There is a metal door that is locked. A pickaxe will not help" << endl;
	  cont = false;//Prevents room transition
	  legal = true;
	}

	if (strcmp(command, "NORTH") == 0 && curr == r15 ) { //If in last room Northbound through portal
	  cout << "You teleport out of the mine. Apparently it was a teleporter, not a time machine" << endl;
	  cont = false;//Prevents room transition
	  legal = true;
	  if (i4 -> getLoc() == i) {
	    cout << "You got away with the gold bars. You are rich and have won this game" << endl;
	  }
	  else {
	    cout << "You escaped but got nothing out of it. This is the lame win ending. GG" << endl;
	  }
	  playing = false;
	}

	if(strcmp(command, "NORTH") == 0 && curr == r9 && i6 -> getLoc() == i) {//If in first room heading North with pickaxe
	  cout << "You break through the cracked wall!" << endl;
	}

	else if (strcmp(command, "NORTH") == 0 && curr == r9 && i6 -> getLoc() != i) { //If in first room Northbound without pickaxe
	  cout << "You can't break through the wall. Hint: There is nothing down here. It's gg" << endl;
	  cont = false;//Prevents room transition
	  legal = true;
	  playing = false;
	}

	if (strcmp(command, "NORTH") == 0 && curr == r7) {
	  cout << "As you drop down the hole to your inevitable doom, you consider how stupid you were to jump into it. Good Game! Not!" << endl;
	}
	if (strcmp(command, "SOUTH") == 0 && curr == r9) {
	  cout << "You try to climb up the shaft, but right as you reach the top, you slip and fall to your death" << endl;
	}

	if (strcmp(command, "NORTH") == 0 && curr == r13 && sec == true) { //If trying to enter portal room with security
	  cout << "As you walk through the doors, 3 guns swivel and blast you. Inevitably you died. GG." << endl;
	  cont = false;
	  playing = false;
	  legal = true;
	}

	if (curr == r3 && strcmp(command, "NORTH") == 0) {//If you entered the elevator
	  if (i2 -> getLoc() != i) {//If rope is not in inv
	    cout << "Without a way to climb out, you starve! GG!" << endl;
	    playing = false;
	    cont = false;
	    legal = true;
	  }
	  else {
	    cout << "You make a lasso with the roop, catch a piece of metal, and climb out!" << endl;
	  }
	}

	if (cont == true) { //If no special condition stopping transition
	  for(map<char*,zuulroom*>::iterator it = curmap -> begin(); it != curmap -> end(); ++it) {//go through map
	    if (strcmp(command, it -> first) == 0) { //If the direction matches a key
	      legal = true; //legal move
	      curr = it -> second; //changes room
	    }
	  }
	}

	//More Special conditions
	if (curr == d) { //If in death room
	  playing = false;
	}
      }

      else if (strcmp(command, "INSPECT") == 0) {
	
	for (vector<zuulitem*>::iterator it = items.begin(); it != items.end(); ++it) {
	  if ((*it) -> getLoc() == curr) {
	    cout << "There is a " << (*it) -> getName() << endl;
	  }
	}
	legal = true;
      }

      else if (strcmp(command, "TAKE") == 0) {
	for (vector<zuulitem*>::iterator it = items.begin(); it != items.end(); ++it) {
	  if ((*it) -> getLoc() == curr) {
	    cout << "Do you wish to pickup " << (*it) -> getName() << "(answer Y or N)" << endl;
	    char yesno;
	    cin >> yesno;
	    cin.ignore();
	    if (yesno == 'Y') {
	      (*it) -> setLoc(i);
	    }
	  }
	}
	legal = true;
      }
      else if (strcmp(command, "INV") == 0) {
	cout << "You have: " << endl;
	for (vector<zuulitem*>::iterator it = items.begin(); it != items.end(); ++it) {
	  if ((*it) -> getLoc() == i) {//if it is in inventory room
	    cout << (*it) -> getName() << endl;
	  }
	}
	legal = true;
      }

      else if (strcmp(command, "DROP") == 0) {
	cout << "You have: " << endl;
	for (vector<zuulitem*>::iterator it = items.begin(); it != items.end(); ++it) {
	  if ((*it) -> getLoc() == i) {//if it is in inventory room
	    cout << (*it) -> getName() << endl;
	  }
	}
	cout << "Enter the Item you want to drop" << endl;
	char* itemdr = new char [80];
	cin.getline(itemdr, 80);
	bool drop = false;
	for (vector<zuulitem*>::iterator it = items.begin(); it != items.end(); ++it) {
	  if ((*it) -> getLoc() == i && strcmp((*it) -> getName(), itemdr) == 0) {//if it is in inventory room and matches name of item to drop
	      (*it) -> setLoc(curr);
	      cout << "Item has been dropped" << endl;
	      drop = true;
	  }
	}
	//Special condition
	if (drop == true && strcmp(itemdr, i7 -> getName()) == 0 && curr == r12) {//provided chemical is dropped in comp room
	  sec = false;
	  i7 -> setLoc(g);
	  cout << "You dropped the chemicals on the keypad. It might have disabled something" << endl;
	}

	if (drop == true && strcmp(itemdr, i3 -> getName()) == 0 && curr == r13 && i5 -> getLoc() == i) {//provided TnT is dropped while matchbook is in possesion
	  vopen = true;
	  i3 -> setLoc(g);
	  i5 -> setLoc(g);
	  cout << "You light the TnT with matches, blowing open the metal door" << endl;
	}
	
	if (drop == false) {
	  cout << "Specified item is not in your inventory" << endl; 
	}
	legal = true;
      }
      
      else if (strcmp(command, "HELP") == 0) {//Prints all commands
	cout << "Commands:" << endl;
	cout << "NORTH, SOUTH, EAST, or WEST" << endl;
	cout << "HELP" << endl;
	cout << "INSPECT" << endl;
	cout << "TAKE" << endl;
	cout << "DROP" << endl;
	cout << "QUIT" << endl;
	cout << "INV" << endl;
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
