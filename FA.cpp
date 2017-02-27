#include <iostream>
#include <string>
#include <fstream>
#include "State.h"

using namespace std;

void printFinalStates(State arr[], int);

int main() {
	const int NUMSTATES = 45; //The nember of states in the FA
	State *Q;	//To hold all states in the FA
	Q = new State[NUMSTATES];	//initialize set of states as an array

	int finalStates[9] = {14, 20, 28, 33, 34, 36, 38, 43, 44}; //declare which states will be final

	ifstream file; //used for opening message.txt
	char c;	//to process each symbol of input

	for (int i = 0; i < 9; i++) {
		Q[finalStates[i]].setFinal(1);	//Sets all final states in Q
	}


	file.open("messagefile.txt");	//read the file of messages
	if (file.is_open()) {
		while (EOF != (c = file.get()))	//read one symbol of input at a time
			;//processInput
  }
  else {
	  cout << "unable to open 'messagefile.txt'" << endl;
  }

  delete[] Q; //delete Q to avoid memory leaks

  cin >> c; //THIS IS ONLY FOR VISUAL STUDIO - DELETE THIS WHEN RUNNING ON PUTTY!!!

  return 0;
}

void printFinalStates(State arr[], int size) {
	for (int i = 0; i < size; i++)
		if (arr[i].accept())
			cout << "q" << i << " is a final state." << endl;
}
