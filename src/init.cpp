//init.cpp
//on first run, generates all files needed
//later, check for all files needed
#include "Init.h"
#include <iostream>
#include <fstream>
#include <direct.h>

std::fstream checks;

bool is_empty(std::fstream& pFile)
{
    return pFile.peek() == std::fstream::traits_type::eof();
}

void generate_dirs(){
    _mkdir("ember");

}

void mvdirs(){

}

void init(){
    //dont forget to add warning for file gen here ("please make sure this is in the file you want it to be in")
    checks.open("data.txt", std::ios::out | std::ios::in);
    if (!checks){
    // file is not open
    }

    if (is_empty(checks)){
        checks << "1";
        generate_dirs();

    }

    

}