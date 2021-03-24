//
//  dataStructuresOps.cpp
//  dataStructuresOps
//
//  Created by Gaurav Gupta on 25/03/21.
//

#include <iostream>
#include "dataStructuresOps.hpp"
#include "dataStructuresOpsPriv.hpp"

void dataStructuresOps::HelloWorld(const char * s)
{
    dataStructuresOpsPriv *theObj = new dataStructuresOpsPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void dataStructuresOpsPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

