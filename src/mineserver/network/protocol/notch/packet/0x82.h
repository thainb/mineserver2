/*
  Copyright (c) 2011, The Mineserver Project
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
  * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
  * Neither the name of the The Mineserver Project nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _MINESERVER_NETWORK_PROTOCOL_NOTCH_PACKET_0x82_H
#define _MINESERVER_NETWORK_PROTOCOL_NOTCH_PACKET_0x82_H

#include <mineserver/byteorder.h>
#include <mineserver/network/packet/0x82.h>
#include <mineserver/network/protocol/notch/packet.h>

namespace Mineserver
{
  struct Network_Protocol_Notch_Packet_0x82 : public Mineserver::Network_Protocol_Notch_Packet, public Mineserver::Network_Packet_0x82
  {
    int32_t x;
    int16_t y;
    int32_t z;
    std::string line1;
    std::string line2;
    std::string line3;
    std::string line4;

    void read(Mineserver::Network_Protocol_Notch_PacketStream& ps);
    void write(Mineserver::Network_Protocol_Notch_PacketStream& ps);
  };
};

#endif