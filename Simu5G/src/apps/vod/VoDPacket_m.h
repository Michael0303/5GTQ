//
// Generated file, do not edit! Created by opp_msgtool 6.0 from apps/vod/VoDPacket.msg.
//

#ifndef __VODPACKET_M_H
#define __VODPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class VoDPacket;
#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

/**
 * Class generated from <tt>apps/vod/VoDPacket.msg:19</tt> by opp_msgtool.
 * <pre>
 * class VoDPacket extends inet::FieldsChunk
 * {
 *     int frameSeqNum;
 *     int frameLength;
 *     // temporal scalability layer
 *     int tid;
 *     // SNR scalability layer
 *     int qid;
 *     simtime_t payloadTimestamp;
 * }
 * </pre>
 */
class VoDPacket : public ::inet::FieldsChunk
{
  protected:
    int frameSeqNum = 0;
    int frameLength = 0;
    int tid = 0;
    int qid = 0;
    omnetpp::simtime_t payloadTimestamp = SIMTIME_ZERO;

  private:
    void copy(const VoDPacket& other);

  protected:
    bool operator==(const VoDPacket&) = delete;

  public:
    VoDPacket();
    VoDPacket(const VoDPacket& other);
    virtual ~VoDPacket();
    VoDPacket& operator=(const VoDPacket& other);
    virtual VoDPacket *dup() const override {return new VoDPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getFrameSeqNum() const;
    virtual void setFrameSeqNum(int frameSeqNum);

    virtual int getFrameLength() const;
    virtual void setFrameLength(int frameLength);

    virtual int getTid() const;
    virtual void setTid(int tid);

    virtual int getQid() const;
    virtual void setQid(int qid);

    virtual omnetpp::simtime_t getPayloadTimestamp() const;
    virtual void setPayloadTimestamp(omnetpp::simtime_t payloadTimestamp);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const VoDPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, VoDPacket& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline VoDPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<VoDPacket*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __VODPACKET_M_H

