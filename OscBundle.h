//
//  OscBundle.h
//  eDrive
//
//  Created by Diego Colombo on 01/09/2013.
//  Copyright (c) 2013 Diego Colombo. All rights reserved.
//

#ifndef __eDrive__OscBundle__
#define __eDrive__OscBundle__


#include "OscPacket.h"
#include "OscMessage.h"


namespace mUbreeze{
    namespace eDrive{
		namespace OSC {
            class OscBundle : public virtual OscPacket{
            public:
                OscBundle();
                virtual ~OscBundle();
        	};
		}
    }
}

#endif /* defined(__eDrive__OscBundle__) */
