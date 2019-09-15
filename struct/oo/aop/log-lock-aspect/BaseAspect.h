#ifndef ____BASEASPECT_H____
#define ____BASEASPECT_H____

template <class T>
class BaseAspect {
  T* m_pT;

protected:
  BaseAspect(T* pT): m_pT(pT) {}
  virtual ~BaseAspect() = default;

public:
  T* operator->() {
    return m_pT;
  }
};

#endif
