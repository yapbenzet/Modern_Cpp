#include <iostream>

#include "chat_sinif.h"

int main() {

    server *sv = new server;

    client cl1("cli1",sv);
    client cl2("cli2",sv);
    client cl3("cli3",sv);

    cl1.send_message("merhaba");
    cl2.send_message("selamlar");
    cl3.send_message("nasilsiniz");
    
    return 0;
}
