//
//  OscSerialiser.h
//  eDrive
//
//  Created by Diego Colombo on 01/09/2013.
//  Copyright (c) 2013 Diego Colombo. All rights reserved.
//

#ifndef __eDrive__OscSerialiser__
#define __eDrive__OscSerialiser__

namespace mUbreeze{
    namespace eDrive{
		namespace OSC {
            namespace Serialisation{
                
                
                
                template <class T>
                class Serialiser{
                    
                public:
                    static char GetTypeCode(){ return '\0';}
                    static char GetTypeCode(T value){ GetTypeCode();}
                    
                    
                    int PayloadSize(){
                        return sizeof(T);
                    }
                    
                };
                
            };
        };
        
    };
};

#endif
