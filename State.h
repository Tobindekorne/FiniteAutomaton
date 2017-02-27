#include <iostream>
#include <string>

using namespace std;

#ifndef STATE_H
#define STATE_H

class State {
  public:
	  State();
      State(string, bool);
      ~State();
	  void setFinal(bool);
      bool accept() const;
      string getName() const;
      void setDelta(char, int);
  private:
	  char input;
	  int tranState;
	string name;
    bool accepting;
};

#endif