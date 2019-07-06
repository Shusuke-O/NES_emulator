#include <vector>

namespace CPU
{

// status flag
union
{
 RegBit<0> C;
 RegBit<1> Z;
 RegBit<2> I;
 RegBit<3> D;
 RegBit<6> V;
 RegBit<7> N;
}

}
