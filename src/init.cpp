//init.cpp
//on first run, generates all files needed
//later, check for all files needed
#include "Init.h"
#include <iostream>
#include "Login.h"
#include <fstream>
#include <string>
#include <filesystem>
//hi

namespace fs = std::filesystem;

namespace ts{

        void tout(const char* Test){
            std::cout << Test << std::endl;
        }
}

std::fstream checks;

bool is_empty(std::fstream& pFile)
{
    return pFile.peek() == std::fstream::traits_type::eof();
}

void generate_dirs(){
    //std::string directory_name("tmp_dir");
    fs::create_directory("ember");
    system("mv main ember && mv data.txt ember");
    system("cd ember");

}



void init(){
    //dont forget to add warning for file gen here ("please make sure this is in the file you want it to be in")
    checks.open("data.txt", std::ios::out | std::ios::in);
    if (checks){
    // if the file exists.
    ts::tout("Not checks!");
    }

    if (is_empty(checks)){
        system("touch data.txt");
        checks.open("data.txt", std::ios::out | std::ios::in);
        checks << "1";
        generate_dirs();
        create_usr_acct();

    }

    

}