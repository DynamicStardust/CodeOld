//
//  main.cpp
//  DataIO
//
//  Created by Ashish Gupta on 12/16/15.
//  Copyright © 2015 Ohio State University. All rights reserved.
//

#include <iostream>
#include "testBoost.hpp"
#include "readMyFile.hpp"

int main(int argc, const char * argv[]) {
//    testBoost();
    std::cout << readFile(argc, argv);
    
    
    return 0;
}
