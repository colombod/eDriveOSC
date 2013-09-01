//
//  OscPacket.h
//  eDrive
//
//  Created by Diego Colombo on 01/09/2013.
//  Copyright (c) 2013 Diego Colombo. All rights reserved.
//

#ifndef __eDrive__OscPacket__
#define __eDrive__OscPacket__

#include <string>

namespace mUbreeze{
    namespace eDrive{
        namespace OSC {
            class OscPacket{
        
                protected :
                std::string m_address;
                
            public:
                const std::string* const GetAddress();
            };
        };
    };
};
#endif /* defined(__eDrive__OscPacket__) */
