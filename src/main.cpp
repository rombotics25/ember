#include "Init.h"
#include "Login.h"
#include <iostream>



int main(){
	
	init();
	std::string UserName = "";
	std::cin>>UserName;
	login(UserName);
	

}