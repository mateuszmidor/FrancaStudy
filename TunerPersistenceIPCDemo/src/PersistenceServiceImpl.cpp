/*
 * PersistenceServiceImpl.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: mateusz
 */

#include "PersistenceServiceImpl.hpp"

using namespace std;

PersistenceServiceImpl::PersistenceServiceImpl() {
}
PersistenceServiceImpl::~PersistenceServiceImpl() {
}

void PersistenceServiceImpl::store(const shared_ptr<CommonAPI::ClientId> _client, string _key, string _value, storeReply_t _reply) {
    cout << "[store] " << _key << " = " << _value << endl;
    dictionary[_key] = _value;
    _reply();
}

void PersistenceServiceImpl::load(const shared_ptr<CommonAPI::ClientId> _client, string _key, loadReply_t _reply) {
    cout << "[load] " << _key << endl;
    _reply(dictionary[_key]);
}
