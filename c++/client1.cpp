#include <iostream>
#include <dbg.h>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio/ip/address.hpp>
#include <boost/asio/io_context.hpp>

using namespace boost::asio;

int main(){
    io_service service;
    ip::tcp::endpoint ep( ip::address::from_string("127.0.0.1"), 2001);
    ip::tcp::socket sock(service);
    sock.connect(ep);
    sock.write_some(buffer("GET /index.html\r\n")); 
    char buff[1024]; 
    dbg(sock.read_some(buffer(buff,1024))); 
    sock.shutdown(ip::tcp::socket::shutdown_receive);
    sock.close();
    return 0;
}