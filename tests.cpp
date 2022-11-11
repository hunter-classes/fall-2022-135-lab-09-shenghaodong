#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//Part A
TEST_CASE("Calculate Length"){
    Coord3D test1A{3.9, 27, 93};
    Coord3D test1B{96, 3.28, 84.1};
    Coord3D test1C{20.3, 3.5, 7.1};
    CHECK(calcLength(&test1A) == 96.91857407122744);
    CHECK(calcLength(&test1B) == 127.66976306079681919791668594002100989440381837720076985448);
    CHECK(calcLength(&test1C) == 21.788758569500925102493136768155913206768157333146816431212);
}

//Part B
TEST_CASE("Furthest From Origin"){
    Coord3D test2A{3.9, 27, 93};
    Coord3D test2B{96, 3.28, 84.1};
    Coord3D test2C{20.3, 3.5, 7.1};
    CHECK(fartherFromOrigin(&test2A, &test2B) == &test2B);
    CHECK(fartherFromOrigin(&test2B, &test2C)  == &test2B);
    CHECK(fartherFromOrigin(&test2A, &test2C)  == &test2A);
}
//Part C
TEST_CASE("Move"){
    Coord3D pos = {3, 9, 93.0};
    Coord3D vel = {-3, 5, 3};
    Coord3D pos2 = {2.3, 7, 39.0};
    Coord3D vel2 = {3.6, -9, 2.7};
    move(&pos, &vel, 3.9);
    move(&pos2, &vel2, 2.7);

    //pos
    CHECK(pos.x == -8.7);
    CHECK(pos.y == 28.5);
    CHECK(pos.z == 104.7);

    //pos2
    CHECK(pos2.x == 12.02);
    CHECK(pos2.y == -17.3);
    CHECK(pos2.z == 46.29);

}

//Part E
TEST_CASE("Create Coord3D"){
    Coord3D *test1E = createCoord3D(3.9, 27, 93);
    Coord3D *test2E = createCoord3D(96, 3.28, 84.1);
    Coord3D *test3E = createCoord3D(20.3, 3.5, 7.1);
    //A
    CHECK((*test1E).x == 3.9);
    CHECK((*test1E).y == 27);
    CHECK((*test1E).z == 93);

    //B
    CHECK((*test2E).x == 96);
    CHECK((*test2E).y == 3.28);
    CHECK((*test2E).z == 84.1);

    //C
    CHECK((*test3E).x == 20.3);
    CHECK((*test3E).y == 3.5);
    CHECK((*test3E).z == 7.1);
    deleteCoord3D(test1E);
    deleteCoord3D(test2E);
    deleteCoord3D(test3E);
}