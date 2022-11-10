#include <iostream>
#include "funcs.h"
#include <cmath>

// add functions here
double length(Coord3D *p){
    int sum;
    for(int i = 0; i < &p.length(); i++){
        sum += &p * &p;
    }
    sum = sqrt(sum);
    return sum;
}
