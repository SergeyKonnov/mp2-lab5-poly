#ifndef __DATVALUE_H__
#define __DATVALUE_H__

class TDatValue {
  public:
    virtual TDatValue * GetCopy() = 0; // �������� �����
   ~TDatValue() {}
};

#endif // __DATVALUE_H__