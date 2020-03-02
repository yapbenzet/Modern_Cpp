//
// Created by atuash on 1.03.2020.
//

#include "chat_sinif.h"

server::server()
{

}

void server::add_client(client cl)
{
    this->clients.push_back(cl);
}

void server::send_message_to_clients(string id, string msg)
{
    //cout << clients.size();
    for (int i = 0; i < this->clients.size(); ++i)
    {
        clients.at(i).write_message_from_server(id + " : " + msg);
    }
}

/////////////////// Sinif ayrimi //////////////////

client::client(const string &id, server *sv) : id(id), sv(sv) {
    sv->add_client(*this);
}

client::~client() {}

void client::setId(const string &id) {
    client::id = id;
}

void client::setSv(server *sv) {
    client::sv = sv;
}

const string &client::getId() const {
    return id;
}

server *client::getSv() const {
    return sv;
}

void client::send_message(string msg)
{
    this->sv->send_message_to_clients(this->id, msg);
}

void client::write_message_from_server(string msg)
{
    cout << this->id << " sayfasinda: " << msg << endl;
}