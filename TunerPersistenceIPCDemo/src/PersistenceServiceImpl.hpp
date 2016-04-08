/*
 * PersistenceServiceImpl.hpp
 *
 *  Created on: Apr 6, 2016
 *      Author: mateusz
 */

#ifndef PERSISTENCESERVICEIMPL_HPP_
#define PERSISTENCESERVICEIMPL_HPP_

#include <map>
#include <string>
#include <CommonAPI/CommonAPI.hpp>
#include <v1_0/commonapi/PersistenceServiceStubDefault.hpp>

using std::map;
using std::string;
using std::shared_ptr;

class PersistenceServiceImpl: public v1_0::commonapi::PersistenceServiceStubDefault {
private:
    map<string, string> dictionary;

public:
    PersistenceServiceImpl();
    virtual ~PersistenceServiceImpl();

    /// This is the method that will be called on remote calls on the method store.
    virtual void store(const shared_ptr<CommonAPI::ClientId> _client, string _key, string _value, storeReply_t _reply);
    /// This is the method that will be called on remote calls on the method load.
    virtual void load(const shared_ptr<CommonAPI::ClientId> _client, string _key, loadReply_t _reply);

};

#endif /* PERSISTENCESERVICEIMPL_HPP_ */
