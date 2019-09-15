#ifndef ____ACTION_H____
#define ____ACTION_H____

class Action {
public:
  void Say(const char* str) {
    std::cout << "Action::Say( " << str << " )" << std::endl;
  }
};

#endif
