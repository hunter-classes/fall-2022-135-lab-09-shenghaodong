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
  std::cout << "Part A: " << std::endl;
  std::cout << calcLength(&pointP) << std::endl;
  std::cout << "\n";

  //Part B
  std::cout << "Part B: " << std::endl;
  std::cout << fartherFromOrigin(&pointP, &pointQ) << std::endl;
  std::cout << "\n";

  //Part C
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << "Part C: " << std::endl;
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  std::cout << "\n";

  //Part E
  std::cout << "Part E: " << std::endl;
  Coord3D *randomVal = createCoord3D(4.1, 5.2, 3.2);
  std::cout << (*randomVal).x << " " << (*randomVal).y << " " << (*randomVal).z << std::endl;
  deleteCoord3D(randomVal);
  std::cout << "\n";
  
  return 0;
}
