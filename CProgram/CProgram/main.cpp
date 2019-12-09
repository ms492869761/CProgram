//
//  main.cpp
//  CProgram
//
//  Created by 王志远 on 2019/11/26.
//  Copyright © 2019 王志远. All rights reserved.
//

#include <iostream>
#include "com/util/Symbol.hpp"
#include "com/util/TimeUtil.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << Symbol::DOUHAO << std::endl ;
    std::cout << TimeUtil::getTime() << std::endl;
    return 0;
}
