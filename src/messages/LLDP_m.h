//
// Generated file, do not edit! Created by nedtool 4.6 from messages/LLDP.msg.
//

#ifndef _LLDP_M_H_
#define _LLDP_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
    #include <EtherFrame_m.h>
    
    
// }}

/**
 * Class generated from <tt>messages/LLDP.msg:12</tt> by nedtool.
 * <pre>
 * // When packets are received by the data plane and sent to the connected controller,
 * // the OFP_PACKET_IN messages are used. If the complete packet needs to be sent to the controller, because it can not be
 * // stored in the bufer, it is encapsulated in the packet-in message.
 * packet LLDP
 * {
 *     int portID;
 *     string chassisID;
 *     double ttl;
 * }
 * </pre>
 */
class LLDP : public ::cPacket
{
  protected:
    int portID_var;
    opp_string chassisID_var;
    double ttl_var;

  private:
    void copy(const LLDP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LLDP&);

  public:
    LLDP(const char *name=NULL, int kind=0);
    LLDP(const LLDP& other);
    virtual ~LLDP();
    LLDP& operator=(const LLDP& other);
    virtual LLDP *dup() const {return new LLDP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPortID() const;
    virtual void setPortID(int portID);
    virtual const char * getChassisID() const;
    virtual void setChassisID(const char * chassisID);
    virtual double getTtl() const;
    virtual void setTtl(double ttl);
};

inline void doPacking(cCommBuffer *b, LLDP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LLDP& obj) {obj.parsimUnpack(b);}


#endif // ifndef _LLDP_M_H_
