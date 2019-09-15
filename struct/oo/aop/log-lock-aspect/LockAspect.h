#ifndef ____LOCKASPECT_H____
#define ____LOCKASPECT_H____

#include "BaseAspect.h"

template <class T>
class LockAspect : public BaseAspect<T> {
public:
  LockAspect(T* pT): BaseAspect<T>(pT) {
    std::cout << "LockAspect: lock" << std::endl;
  }

  ~LockAspect() {
    std::cout << "LockAspect: unlock" << std::endl;
  }
};

#endif
