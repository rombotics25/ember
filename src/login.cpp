#include <iostream>
#include "Login.h"
#include <filesystem>
#include <unistd.h>


namespace fs = std::filesystem;

void create_usr_acct(){
    fs::create_directory("User");
    system("cd User");
    std::cout <<"Welcome to Ember! Please mind the dust while I set things up for you\n";
}
//TODO
    //take in users name and output a dir with that name
    //cd into thee dir (!!)