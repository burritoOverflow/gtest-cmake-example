#include <iostream>

#include "thing.h"

int main(int argc, char const* argv[]) {
    Thing t{"hello world"};
    std::cout << t.GetThingName() << std::endl;
}
