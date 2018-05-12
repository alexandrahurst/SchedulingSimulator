#ifndef _EVENT_H_
#define _EVENT_H_

#include "SystemState.h"

class Event {
public: 
    enum class Type {
        Internal, 
        External,
    };
    
    virtual ~Event() = 0;
    
    virtual void process(SystemState& state) = 0;
    int get_time() const;
    virtual Type get_type() const = 0;
    bool operator< (const Event& other) const;

private:
    int m_time;
};

#endif // _EVENT_H_
