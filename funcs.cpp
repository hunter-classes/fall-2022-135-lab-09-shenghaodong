#include <iostream>
#include "funcs.h"
#include <cmath>

// add functions here

//Task A:
double length(Coord3D *p){
    int sum;
    for(int i = 0; i < &p.length(); i++){
        sum += &p * &p;
    }
    sum = sqrt(sum);
    return sum;
}

//Task B:
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

}

//Task C:
void move(Coord3D *ppos, Coord3D *pvel, double dt){

}

//Task E:
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){

}

// free memory
void deleteCoord3D(Coord3D *p){
    
}
