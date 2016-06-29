#ifndef __PhisicalObject_H_
#define __PhisicalObject_H_

#include <iostream>
#include "Environment.h"
#include "Object.h"

class PhisicalObject : public Object
{
  public:
    inline void setWeight(float newWeight)
    {
      weight = newWeight;
    }

  private:
    float weight;
};
#endif
