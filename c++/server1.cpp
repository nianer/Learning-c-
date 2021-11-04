#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>

using namespace boost::asio;

typedef boost::shared_ptr<ip::tcp::socket> socket_ptr;
void client_session(socket_ptr sock);
int main(){
    io_service service;
    ip::tcp::endpoint ep(ip::tcp::v4(), 2001); // listen on 2001
    ip::tcp::acceptor acc(service, ep);
    while ( true) {
        socket_ptr sock(new ip::tcp::socket(service));
        acc.accept(*sock);
        boost::asio::detail::thread( boost::bind(client_session, sock));
    }
    return 0;
}
void client_session(socket_ptr sock) {
    while ( true) {
        char data[512];
        size_t len = sock->read_some(buffer(data));
        if ( len > 0)
            write(*sock, buffer("ok", 2));
    }
}