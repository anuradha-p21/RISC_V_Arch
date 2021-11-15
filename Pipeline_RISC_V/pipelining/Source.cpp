/***********************************************************************
* FILENAME 		: main.cpp           
*
* DESCRIPTION 	: main function for project.
* PARAMETERS 	: This class is a base class which has two parameters 
*					int t for time
*					int v for value
* AUTHOR 		:   Anuradha Patelkhana 
*************************************************************************/

#include <iostream>
#include <fstream>
#include "StartDecoder.h"
#include <bitset>
#include <string>
using namespace std;

int main(int argc, char* argv[]) 
{
 
    
    startdecoder sd;
    sd.init_decode();
    sd.start_process();
    return 0;
}

