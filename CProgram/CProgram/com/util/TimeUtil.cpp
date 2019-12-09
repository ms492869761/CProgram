//
//  TimeUtil.cpp
//  CProgram
//
//  Created by 王志远 on 2019/12/9.
//  Copyright © 2019 王志远. All rights reserved.
//

#include "TimeUtil.hpp"


namespace TimeUtil {
    
    string getTime() {
        time_t timep;
        time(&timep);
        char tmp[64];
        strftime(tmp,sizeof(tmp),"%Y-%m-%d %H:%M:%S", localtime(&timep));
        return tmp;
    }

}
