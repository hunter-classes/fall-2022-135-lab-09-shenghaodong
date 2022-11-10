#include <iostream>


#include "funcs.h"
#include "coord3d.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  std::cout << calcLength(&pointP) << std::endl;
  std::cout << fartherFromOrigin(&pointP, &pointQ) << std::endl;
  return 0;
}
