#include <iostream>
#include "funcs.h"
#include <cmath>
#include "coord3d.h"

// add functions here

//Task A:
double calcLength(Coord3D *p){
    double sum = (p -> x * p -> x) + (p -> y * p -> y) + (p -> z * p -> z);
    sum = sqrt(sum);
    return sum;
}

//Task B:
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double p1Length = calcLength(p1);
    double p2Length = calcLength(p2);

    if(p1Length > p2Length){
        return p1;
    }else{
        return p2;
    }
}

//Task C:
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    //takes position, velocity and time
    Coord3D oldPos = *ppos;
    Coord3D vel = *pvel;
    ppos -> x = oldPos.x + vel.x * dt;

    ppos -> y = oldPos.y + vel.y * dt;

    ppos -> z = oldPos.z + vel.z * dt;
}

//Task E:
//allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D* returnVal = new Coord3D{x, y, z};
    return returnVal;
}

//free memory
void deleteCoord3D(Coord3D *p){
    delete p;
    p = nullptr;
    
}
