//
//  readMyFile.hpp
//  DataIO
//
//  Created by Ashish Gupta on 12/16/15.
//  Copyright © 2015 Ohio State University. All rights reserved.
//

#ifndef readMyFile_h
#define readMyFile_h

#include<fstream>
#include<iostream>
#include<string>
#include<sstream>

#include<boost/iostreams/filter/gzip.hpp>
#include<boost/iostreams/filtering_stream.hpp>

std::string readFile(int argc, const char** argv){
    // the file location is provided as input argument
    std::string inputStr;
    if(argc > 1){
        inputStr = argv[1];
    } else {
        inputStr = "~/Sandbox/jibberish.gz";
    }
    std::stringstream ss;
    // create a handle for the input file
    std::ifstream file(inputStr, std::ios_base::in | std::ios_base::binary);
    try{
        // create a boost instream filter
        boost::iostreams::filtering_istream in;
        in.push(boost::iostreams::gzip_decompressor());
        in.push(file);
        for(std::string line; std::getline(in, line);){
            ss << line;
            std::cout << line << std::endl;
        }
    } catch(const boost::iostreams::gzip_error& err){
        std::cout << "err: " << err.what() << std::endl;
    }
    return ss.str();
}


#endif /* readMyFile_h */
