// server.hpp

#ifndef SERVER_HPP
#define SERVER_HPP

namespace hft
{
class server
{
public:
    virtual void setup() = 0;
    virtual void listen() = 0;
    virtual ~server();
};
}

#endif // SERVER_HPP
