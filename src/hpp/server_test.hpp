// server_test.hpp

#include "server.hpp"

#ifndef SERVER_TEST_HPP
#define SERVER_TEST_HPP

namespace hft
{

class server_test : public server
{
public:
    server_test();
    ~server_test();

    void setup() override;
    void listen() override;
};
}

#endif // SERVER_TEST_HPP
