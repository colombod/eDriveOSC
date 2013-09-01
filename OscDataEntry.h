//
//  OscDataEntry.h
//  eDrive
//
//  Created by Diego Colombo on 01/09/2013.
//  Copyright (c) 2013 Diego Colombo. All rights reserved.
//

#ifndef __eDrive__OscDataEntry__
#define __eDrive__OscDataEntry__

#include <inttypes.h>
#include "OscUtilities.h"

namespace mUbreeze{
    namespace eDrive{
		namespace OSC {
           
            class OSCDataEntry
            {
                
            private:
                
                //friends
                friend class OSCMessage;
                
                //should only be used while decoding
                //leaves an invalid OSCMessage with a type, but no data
                OSCDataEntry(char t);
                
            public:
                
                //an error flag
                mUBreeze::eDrive::Osc::OscErrorCode error;
                
                //the size (in bytes) of the data
                int bytes;
                
                //the type of the data
                int type;
                
                //the data
                union {
                    char * s; //string
                    int32_t i; //int
                    float f; //float
                    double d; //double
                    uint64_t l; //long
                    uint8_t * b; //blob
                } data;
                
                //overload the constructor to account for all the types and sizes
                OSCDataEntry(const char * s);
                OSCDataEntry (int);
                OSCDataEntry (int32_t);
                OSCDataEntry (float);
                OSCDataEntry (double);
                OSCDataEntry (uint8_t *, int);
                //accepts another OSCData objects and clones it
                OSCDataEntry (OSCDataEntry *);
                OSCDataEntry  (bool);
                
                //destructor
                OSCDataEntry();
                
                //GETTERS
                int32_t getInt();
                float getFloat();
                double getDouble();
                int getString(char *, int);
                int getBlob(uint8_t *, int);
                bool getBoolean();
                
                //constructor from byte array with type and length
                OSCDataEntry(char, uint8_t *, int);
                //fill the passed in buffer with the data
                //uint8_t * asByteArray();
                
            };
            
          
            
        };
    };
};

#endif /* defined(__eDrive__OscDataEntry__) */
