//
// Created by atuash on 1.03.2020.
//

#ifndef CHAT_CHAT_SINIF_H
#define CHAT_CHAT_SINIF_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class server;
class client;

class server{
public:
    server();

    vector<client> clients;

    void add_client(client cl);
    void send_message_to_clients(string id, string msg);
};

class client{
public:
    string id;
    server *sv;

    client(const string &id, server *sv);

    void setId(const string &id);
    void setSv(server *sv);
    const string &getId() const;
    server *getSv() const;

    virtual ~client();

    void send_message(string msg);
    void write_message_from_server(string msg);

};

#endif //CHAT_CHAT_SINIF_H
