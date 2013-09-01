//
//  BooleanSerialiser.h
//  eDrive
//
//  Created by Diego Colombo on 01/09/2013.
//  Copyright (c) 2013 Diego Colombo. All rights reserved.
//

#ifndef __eDrive__BooleanSerialiser__
#define __eDrive__BooleanSerialiser__

#include "OscSerialiser.h"

namespace mUbreeze{
    namespace eDrive{
		namespace OSC {
            namespace Serialisation{
                
                template<>
                class Serialiser<bool>{
                    
                public:
                    static char GetTypeCode(bool value){return value == true ? 'T' : 'F';}
                };
                
                class BooleanSerialiser : public virtual Serialiser<bool>{
                    
                };
            };
        };
    };
};

#endif /* defined(__eDrive__BooleanSerialiser__) */
