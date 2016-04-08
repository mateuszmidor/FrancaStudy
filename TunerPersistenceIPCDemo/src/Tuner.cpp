/*
 * Tuner.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: mateusz
 *
 *  Tuner is the client-side of IPC communication here
 */

#include <iostream>
#include <string>
#include <memory>
#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>
#include <v1_0/commonapi/PersistenceServiceProxy.hpp>

#include "Console.hpp"
#include <tuple>

using namespace std;
using namespace v1_0::commonapi;

int main() {

    // initialize CommonAPI runtime and get Persistence proxy instance
    shared_ptr<CommonAPI::Runtime> runtime = CommonAPI::Runtime::get();
    shared_ptr<PersistenceServiceProxy<>> myProxy = runtime->buildProxy<PersistenceServiceProxy>("local", "persistence");

    // loop until the persistence is available
    cout << "Checking availability!" << endl;
    while (!myProxy->isAvailable())
        usleep(10);
    cout << "Available..." << endl;


    CommonAPI::CallStatus callStatus;
    string persistenceReturnValue;
    string command;
    vector<string> params;


    // interact with the user. forever
    while (true) {
        // get user input from console
        tie(command, params) = Console::getInput();

        // parse the input
        if (command == "store") {
            if (params.size() < 2) continue;
            myProxy->store(params[0], params[1], callStatus);
        }
        else if (command == "load") {
            if (params.size() < 1) continue;
            myProxy->load(params[0], callStatus, persistenceReturnValue);
            cout << "> " << persistenceReturnValue << endl;
        }
        else {
            cout << "wrong command! Use: store name value/load name" << endl;
        }
        // loop and again...
    }

    return 0;
}
