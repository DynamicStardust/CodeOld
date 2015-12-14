//
//  myObj1.hpp
//  objectifying
//
//  Created by Ashish Gupta on 12/13/15.
//  Copyright © 2015 Ohio State University. All rights reserved.
//

#ifndef myObj1_h
#define myObj1_h

#include <string>
#include <sstream>

class MyObj1{
public:
    int val;
    std::string id;
    MyObj1(){
        val = 0;
        id = "john doe";
    }
    
    MyObj1(int _val, std::string _str){
        val = _val;
        id = _str;
    }
    
    std::string toString(){
        std::stringstream ss;
        ss << id << ":" << val;
        return ss.str();
    }
};


#endif /* myObj1_h */
