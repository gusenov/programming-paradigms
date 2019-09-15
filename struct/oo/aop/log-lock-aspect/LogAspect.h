#ifndef ____LOGASPECT_H____
#define ____LOGASPECT_H____

#include "BaseAspect.h"

template <class T>
class LogAspect: public BaseAspect<T> {
  const char* m_name;
public:
  LogAspect(T* pT, const char* name = ""): BaseAspect<T>(pT), m_name(name) {
    std::cout << "LogAspect: " << m_name << " begin" << std::endl;
  }

  ~LogAspect() {
    std::cout << "LogAspect: " << m_name << " end" << std::endl;
  }
};

#endif
