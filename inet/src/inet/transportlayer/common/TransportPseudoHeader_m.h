//
// Generated file, do not edit! Created by opp_msgtool 6.0 from inet/transportlayer/common/TransportPseudoHeader.msg.
//

#ifndef __INET_TRANSPORTPSEUDOHEADER_M_H
#define __INET_TRANSPORTPSEUDOHEADER_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class TransportPseudoHeader;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/Units_m.h" // import inet.common.Units

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address


namespace inet {

/**
 * Class generated from <tt>inet/transportlayer/common/TransportPseudoHeader.msg:18</tt> by opp_msgtool.
 * <pre>
 * //
 * // Represents a TCP/UDP pseudo header, used for crc calculation.
 * //
 * class TransportPseudoHeader extends FieldsChunk
 * {
 *     L3Address srcAddress;
 *     L3Address destAddress;
 *     int networkProtocolId;  // inet specific value, Protocol::getId()
 *     int protocolId = -1;    // TCP: 6, UDP: 17
 *     B packetLength = B(-1);
 * }
 * </pre>
 */
class INET_API TransportPseudoHeader : public ::inet::FieldsChunk
{
  protected:
    L3Address srcAddress;
    L3Address destAddress;
    int networkProtocolId = 0;
    int protocolId = -1;
    B packetLength = B(-1);

  private:
    void copy(const TransportPseudoHeader& other);

  protected:
    bool operator==(const TransportPseudoHeader&) = delete;

  public:
    TransportPseudoHeader();
    TransportPseudoHeader(const TransportPseudoHeader& other);
    virtual ~TransportPseudoHeader();
    TransportPseudoHeader& operator=(const TransportPseudoHeader& other);
    virtual TransportPseudoHeader *dup() const override {return new TransportPseudoHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const L3Address& getSrcAddress() const;
    virtual L3Address& getSrcAddressForUpdate() { handleChange();return const_cast<L3Address&>(const_cast<TransportPseudoHeader*>(this)->getSrcAddress());}
    virtual void setSrcAddress(const L3Address& srcAddress);

    virtual const L3Address& getDestAddress() const;
    virtual L3Address& getDestAddressForUpdate() { handleChange();return const_cast<L3Address&>(const_cast<TransportPseudoHeader*>(this)->getDestAddress());}
    virtual void setDestAddress(const L3Address& destAddress);

    virtual int getNetworkProtocolId() const;
    virtual void setNetworkProtocolId(int networkProtocolId);

    virtual int getProtocolId() const;
    virtual void setProtocolId(int protocolId);

    virtual B getPacketLength() const;
    virtual void setPacketLength(B packetLength);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TransportPseudoHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TransportPseudoHeader& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::TransportPseudoHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::TransportPseudoHeader*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_TRANSPORTPSEUDOHEADER_M_H

