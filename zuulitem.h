#include "zuulroom.h"

class zuulitem {
 public:
  void setName(char*);//sets the name of item
  char* getName(); //returns name of item
  void setLoc(zuulroom*); //Sets which room it is in
  zuulroom* getLoc(); //Returns which room it is in

  char* name; //to hold name of item
  zuulroom* loc; //to hold which room it is 

};
