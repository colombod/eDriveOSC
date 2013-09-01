//
//  OscMessage.h
//  eDrive
//
//  Created by Diego Colombo on 07/07/2013.
//
//

#ifndef __eDrive__OscMessage__
#define __eDrive__OscMessage__

#include <string>
#include "OscPacket.h"
#include "OscSerialisation.h"

namespace mUbreeze{
    namespace eDrive{
		namespace OSC {
            class OscMessage : public virtual OscPacket{
            private:
                bool m_isEvent;
                
                std::string m_typeCode;
            public:
                OscMessage();
                virtual ~OscMessage();
                void SetIsEvent(bool isEvent);
                
                inline bool GetIsEvent(){ return m_isEvent;}
                template<class T>
                void AddPayload(T value)
                {
                    char code = Serialisation::Serialiser<T>::GetTypeCode(value);
                    m_typeCode.append(1,code);
                }
        	};
		}
    }
}

#endif
