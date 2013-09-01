//
//  OscMessage.cpp
//  eDrive
//
//  Created by Diego Colombo on 07/07/2013.
//
//

#include "OscMessage.h"

namespace mUbreeze{
    namespace eDrive{
		namespace OSC{
            OscMessage::OscMessage()
            {
                m_isEvent = false;
                m_typeCode = ",";
            }
            
            OscMessage::~OscMessage()
            {
                
            }
            
        
        }
    }
}

