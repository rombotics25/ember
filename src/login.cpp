#include <iostream>
#include "Login.h"
#include <direct.h>

void create_usr_acct(const char*Name){
    _mkdir(Name);
    _chdir(Name);
}