//
//  OscUtilities.h
//  eDrive
//
//  Created by Diego Colombo on 01/09/2013.
//  Copyright (c) 2013 Diego Colombo. All rights reserved.
//

#ifndef __eDrive__OscUtilities__
#define __eDrive__OscUtilities__

namespace mUBreeze {
    namespace eDrive{
        namespace Osc{
            typedef enum {
                OSC_OK = 0,
                BUFFER_FULL,
                INVALID_OSC,
                ALLOCFAILED,
                INDEX_OUT_OF_BOUNDS
            } OscErrorCode;
        };
        
        /*
         based on http://stackoverflow.com/questions/809902/64-bit-ntohl-in-c
         
         if the system is little endian, it will flip the bits
         if the system is big endian, it'll do nothing
         */
        template<typename T>
        static inline T BigEndian(const T& x)
        {
            const int one = 1;
            const char sig = *(char*)&one;
            if (sig == 0) return x; // for big endian machine just return the input
            T ret;
            int size = sizeof(T);
            char* src = (char*)&x + sizeof(T) - 1;
            char* dst = (char*)&ret;
            while (size-- > 0){
                *dst++ = *src--;
            }
            return ret;
        }
        
    };
};

#endif /* defined(__eDrive__OscUtilities__) */
