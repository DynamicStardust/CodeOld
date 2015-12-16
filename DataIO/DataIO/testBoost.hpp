//
//  testBoost.hpp
//  DataIO
//
//  Created by Ashish Gupta on 12/16/15.
//  Copyright © 2015 Ohio State University. All rights reserved.
//

#ifndef testBoost_h
#define testBoost_h

#include <boost/iostreams/filtering_stream.hpp>
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>
#include <string>

void testBoost(){
    std::cout << boost::format{"%1% went in and %2% came out."}%12%2 << std::endl;
    
    std::string _usrInput;
    std::cout << "Enter a number: ";
    std::cin >> _usrInput;
    
//    std::cout << "Half of " << _usrInput << " is " << boost::lexical_cast<float>(_usrInput) / 2 << std::endl;
    
    std::cout << boost::format("Half of %1% is %2%.")%_usrInput%boost::lexical_cast<float>(_usrInput)<< std::endl;
    return;
}


#endif /* testBoost_h */
