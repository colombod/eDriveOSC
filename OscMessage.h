//
//  OscMessage.h
//  eDrive
//
//  Created by Diego Colombo on 07/07/2013.
//
//

#ifndef __eDrive__OscMessage__
#define __eDrive__OscMessage__

#include "OscPacket.h"
#include "OscSerialisation.h"

namespace mUbreeze{
    namespace eDrive{
		namespace OSC {
            class OscMessage : public virtual OscPacket{
            public:
                template<class T>
                void AddPayload(T value)
                {
                    char code = Serialisation::Serialiser<T>::GetTypeCode(value);
                }
        	};
		}
    }
}

#endif
