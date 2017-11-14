#include <map>
#include <iostream>
#ifndef guard //Note: This guard code is based on wikipedia's Include_Guard page ;
#define guard

using namespace std;

class zuulroom {
 public:
  void setDes(char*);//will set room description
  char* getDes();//will return room description
  void setMap(map<char*, zuulroom*>*);//will set a map of exits
  map<char*, zuulroom*>* getMap();//will return a map of exits
  void setTitle(char*);//will set room title
  char* getTitle();//will return room title

  char* des;//stores description of rooms
  map<char*, zuulroom*>* exits;//stores map of exits
  char* title;//stores title of room
};

#endif
