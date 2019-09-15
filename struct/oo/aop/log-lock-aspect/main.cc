#include <iostream>

#include "LogAspect.h"
#include "LockAspect.h"
#include "Action.h"

using namespace std;

int main(int argc, char* argv[]) {
	Action a;
	LogAspect<Action>(&a, "Action::Say")->Say("Hi");
	std::cout<<std::endl;
	LockAspect<Action>(&a)->Say("Hello");
	return 0;
}

/*
LogAspect: Action::Say begin
Action::Say( Hi )
LogAspect: Action::Say end

LockAspect: lock
Action::Say( Hello )
LockAspect: unlock
*/
