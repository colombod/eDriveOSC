//
//  IntSerialiser.h
//  eDrive
//
//  Created by Diego Colombo on 01/09/2013.
//  Copyright (c) 2013 Diego Colombo. All rights reserved.
//

#ifndef __eDrive__IntSerialiser__
#define __eDrive__IntSerialiser__

#include "OscSerialiser.h"

namespace mUbreeze{
    namespace eDrive{
		namespace OSC {
            namespace Serialisation{
                
                template<>
                class Serialiser<int>{
                    
                public:
                    static char GetTypeCode(){return 'i';}
                };
                
                class IntSerialiser : public virtual Serialiser<int>{
                    
                };
            };
        };
    };
};

#endif /* defined(__eDrive__IntSerialiser__) */
