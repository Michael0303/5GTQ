//
// Generated file, do not edit! Created by opp_msgtool 6.0 from apps/mec/MecRequestResponseApp/packets/RequestResponsePacket.msg.
//

#ifndef __REQUESTRESPONSEPACKET_M_H
#define __REQUESTRESPONSEPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class RequestResponseAppPacket;
#include "nodes/mec/MECPlatform/MECPackets_m.h" // import nodes.mec.MECPlatform.MECPackets

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

/**
 * Class generated from <tt>apps/mec/MecRequestResponseApp/packets/RequestResponsePacket.msg:20</tt> by opp_msgtool.
 * <pre>
 * class RequestResponseAppPacket extends inet::FieldsChunk
 * {
 *     int type;
 *     unsigned int sno;
 * 
 *     // request side
 *     simtime_t requestSentTimestamp;
 * 
 *     // response side
 *     simtime_t requestArrivedTimestamp;
 *     double processingTime;
 *     simtime_t serviceResponseTime;
 *     simtime_t responseSentTimestamp;
 * }
 * </pre>
 */
class RequestResponseAppPacket : public ::inet::FieldsChunk
{
  protected:
    int type = 0;
    unsigned int sno = 0;
    omnetpp::simtime_t requestSentTimestamp = SIMTIME_ZERO;
    omnetpp::simtime_t requestArrivedTimestamp = SIMTIME_ZERO;
    double processingTime = 0;
    omnetpp::simtime_t serviceResponseTime = SIMTIME_ZERO;
    omnetpp::simtime_t responseSentTimestamp = SIMTIME_ZERO;

  private:
    void copy(const RequestResponseAppPacket& other);

  protected:
    bool operator==(const RequestResponseAppPacket&) = delete;

  public:
    RequestResponseAppPacket();
    RequestResponseAppPacket(const RequestResponseAppPacket& other);
    virtual ~RequestResponseAppPacket();
    RequestResponseAppPacket& operator=(const RequestResponseAppPacket& other);
    virtual RequestResponseAppPacket *dup() const override {return new RequestResponseAppPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getType() const;
    virtual void setType(int type);

    virtual unsigned int getSno() const;
    virtual void setSno(unsigned int sno);

    virtual omnetpp::simtime_t getRequestSentTimestamp() const;
    virtual void setRequestSentTimestamp(omnetpp::simtime_t requestSentTimestamp);

    virtual omnetpp::simtime_t getRequestArrivedTimestamp() const;
    virtual void setRequestArrivedTimestamp(omnetpp::simtime_t requestArrivedTimestamp);

    virtual double getProcessingTime() const;
    virtual void setProcessingTime(double processingTime);

    virtual omnetpp::simtime_t getServiceResponseTime() const;
    virtual void setServiceResponseTime(omnetpp::simtime_t serviceResponseTime);

    virtual omnetpp::simtime_t getResponseSentTimestamp() const;
    virtual void setResponseSentTimestamp(omnetpp::simtime_t responseSentTimestamp);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RequestResponseAppPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RequestResponseAppPacket& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline RequestResponseAppPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<RequestResponseAppPacket*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __REQUESTRESPONSEPACKET_M_H

