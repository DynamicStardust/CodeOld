//
//  objCom.hpp
//  objectifying
//
//  Created by Ashish Gupta on 12/13/15.
//  Copyright © 2015 Ohio State University. All rights reserved.
//

#ifndef objCom_h
#define objCom_h


#include <vector>
#include <list>
#include <algorithm>
#include "myObj1.hpp"

class MyObjComp{
public:
    bool operator()(MyObj1 lhs, MyObj1 rhs){
        return lhs.val < rhs.val;
    }
} myObjComp;

class ObjCom{
public:
    std::vector<MyObj1> objVec;
    // constructor
    ObjCom(){
        // empty constructor
    }
    
    // sort objVec
    void selfSort();
    
    // add elements to container
    void addElem(MyObj1& obj){
        objVec.push_back(obj);
    }
    
    // print the vector;
    std::string toString(){
        std::stringstream ss;
        for(std::vector<MyObj1>::iterator itr = objVec.begin(); itr != objVec.end(); itr++){
            ss << itr->toString() << ", ";
        }
        return ss.str();
    }
    
};

void ObjCom::selfSort(){
    std::sort(objVec.begin(), objVec.end(), myObjComp);
}

void testObjCom(){
    ObjCom* objComPtr = new ObjCom();
    int count = 5;
    while(count--){
        int _val;
        std::string _id;
        std::cout << "\nenter a number: ";
        std::cin >> _val;
        std::cout << "enter a name:";
        std::cin >> _id;
        MyObj1 _obj(_val, _id);
        objComPtr->addElem(_obj);
    }
    std::cout << objComPtr->toString() << std::endl;
    objComPtr->selfSort();
    std::cout << objComPtr->toString() << std::endl;
    
    
}


#endif /* objCom_h */
