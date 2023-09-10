//
// Generated file, do not edit! Created by opp_msgtool 6.0 from apps/mec/WarningAlert/packets/WarningAlertPacket.msg.
//

#ifndef __WARNINGALERTPACKET_M_H
#define __WARNINGALERTPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class WarningAppPacket;
class WarningAlertPacket;
class WarningStartPacket;
class WarningStopPacket;
#include "nodes/mec/MECPlatform/MECPackets_m.h" // import nodes.mec.MECPlatform.MECPackets

/**
 * Class generated from <tt>apps/mec/WarningAlert/packets/WarningAlertPacket.msg:20</tt> by opp_msgtool.
 * <pre>
 * class WarningAppPacket extends MECPacket
 * {
 * }
 * </pre>
 */
class WarningAppPacket : public ::MECPacket
{
  protected:

  private:
    void copy(const WarningAppPacket& other);

  protected:
    bool operator==(const WarningAppPacket&) = delete;

  public:
    WarningAppPacket();
    WarningAppPacket(const WarningAppPacket& other);
    virtual ~WarningAppPacket();
    WarningAppPacket& operator=(const WarningAppPacket& other);
    virtual WarningAppPacket *dup() const override {return new WarningAppPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WarningAppPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WarningAppPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>apps/mec/WarningAlert/packets/WarningAlertPacket.msg:23</tt> by opp_msgtool.
 * <pre>
 * class WarningAlertPacket extends WarningAppPacket
 * {
 *     int ueOmnetID;
 *     double positionX;
 *     double positionY;
 *     double positionZ;
 *     bool danger;
 * }
 * </pre>
 */
class WarningAlertPacket : public ::WarningAppPacket
{
  protected:
    int ueOmnetID = 0;
    double positionX = 0;
    double positionY = 0;
    double positionZ = 0;
    bool danger = false;

  private:
    void copy(const WarningAlertPacket& other);

  protected:
    bool operator==(const WarningAlertPacket&) = delete;

  public:
    WarningAlertPacket();
    WarningAlertPacket(const WarningAlertPacket& other);
    virtual ~WarningAlertPacket();
    WarningAlertPacket& operator=(const WarningAlertPacket& other);
    virtual WarningAlertPacket *dup() const override {return new WarningAlertPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getUeOmnetID() const;
    virtual void setUeOmnetID(int ueOmnetID);

    virtual double getPositionX() const;
    virtual void setPositionX(double positionX);

    virtual double getPositionY() const;
    virtual void setPositionY(double positionY);

    virtual double getPositionZ() const;
    virtual void setPositionZ(double positionZ);

    virtual bool getDanger() const;
    virtual void setDanger(bool danger);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WarningAlertPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WarningAlertPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>apps/mec/WarningAlert/packets/WarningAlertPacket.msg:32</tt> by opp_msgtool.
 * <pre>
 * class WarningStartPacket extends WarningAppPacket
 * {
 *     double centerPositionX;
 *     double centerPositionY;
 *     double centerPositionZ;
 * 
 *     double radius;
 * }
 * </pre>
 */
class WarningStartPacket : public ::WarningAppPacket
{
  protected:
    double centerPositionX = 0;
    double centerPositionY = 0;
    double centerPositionZ = 0;
    double radius = 0;

  private:
    void copy(const WarningStartPacket& other);

  protected:
    bool operator==(const WarningStartPacket&) = delete;

  public:
    WarningStartPacket();
    WarningStartPacket(const WarningStartPacket& other);
    virtual ~WarningStartPacket();
    WarningStartPacket& operator=(const WarningStartPacket& other);
    virtual WarningStartPacket *dup() const override {return new WarningStartPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual double getCenterPositionX() const;
    virtual void setCenterPositionX(double centerPositionX);

    virtual double getCenterPositionY() const;
    virtual void setCenterPositionY(double centerPositionY);

    virtual double getCenterPositionZ() const;
    virtual void setCenterPositionZ(double centerPositionZ);

    virtual double getRadius() const;
    virtual void setRadius(double radius);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WarningStartPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WarningStartPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>apps/mec/WarningAlert/packets/WarningAlertPacket.msg:41</tt> by opp_msgtool.
 * <pre>
 * class WarningStopPacket extends WarningAppPacket
 * {
 * }
 * </pre>
 */
class WarningStopPacket : public ::WarningAppPacket
{
  protected:

  private:
    void copy(const WarningStopPacket& other);

  protected:
    bool operator==(const WarningStopPacket&) = delete;

  public:
    WarningStopPacket();
    WarningStopPacket(const WarningStopPacket& other);
    virtual ~WarningStopPacket();
    WarningStopPacket& operator=(const WarningStopPacket& other);
    virtual WarningStopPacket *dup() const override {return new WarningStopPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WarningStopPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WarningStopPacket& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline WarningAppPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<WarningAppPacket*>(ptr.get<cObject>()); }
template<> inline WarningAlertPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<WarningAlertPacket*>(ptr.get<cObject>()); }
template<> inline WarningStartPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<WarningStartPacket*>(ptr.get<cObject>()); }
template<> inline WarningStopPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<WarningStopPacket*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __WARNINGALERTPACKET_M_H

