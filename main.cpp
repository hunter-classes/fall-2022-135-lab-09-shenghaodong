#include <iostream>


#include "funcs.h"
#include "coord3d.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  //Part A
  std::cout << calcLength(&pointP) << std::endl;

  //Part B
  std::cout << fartherFromOrigin(&pointP, &pointQ) << std::endl;

  //Part C
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

  //Part E
  Coord3D *randomVal = createCoord3D(4.1, 5.2, 3.2);
  std::cout << (*randomVal).x << " " << (*randomVal).y << " " << (*randomVal).z << std::endl;
  deleteCoord3D(randomVal);
  return 0;
}
