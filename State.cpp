#include "State.h"

State::State() {
	name = "";
	accepting = 0;
}

State::State(string n, bool a) {
  name = n;
  accepting = a;
}

State::~State() {
}

void State::setFinal(bool set) {
	accepting = set;
}

string State::getName() const {
  return name;
}

bool State::accept() const {
  return accepting;
}

void State::setDelta(char in, int stateNum) {
	input = in;
	tranState = stateNum;
}
