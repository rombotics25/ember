//init.cpp
//on first run, generates all files needed
//later, check for all files needed
#include "Init.h"
#include <iostream>
#include <fstream>
#include <direct.h>

std::fstream checks;

void generate(){
    _mkdir("ember");
}

void init(){
    //dont forget to add warning for file gen here ("please make sure this is in the file you want it to be in")
    checks.open("data.bin", std::ios::in | std::ios::out);
    

}