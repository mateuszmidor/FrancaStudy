/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_Persistence_Service_PROXY_HPP_
#define COMMONAPI_Persistence_Service_PROXY_HPP_

#include <v1_0/commonapi/PersistenceServiceProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {

template <typename ... _AttributeExtensions>
class PersistenceServiceProxy
    : virtual public PersistenceService, 
      virtual public PersistenceServiceProxyBase,
      public _AttributeExtensions... {
public:
    PersistenceServiceProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~PersistenceServiceProxy();

    typedef PersistenceService InterfaceType;




    /**
     * Calls store with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void store(const std::string &_key, const std::string &_value, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls store with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> storeAsync(const std::string &_key, const std::string &_value, StoreAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls load with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void load(const std::string &_key, CommonAPI::CallStatus &_internalCallStatus, std::string &_value, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls load with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> loadAsync(const std::string &_key, LoadAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<PersistenceServiceProxyBase> delegate_;
};

typedef PersistenceServiceProxy<> PersistenceServiceProxyDefault;


//
// PersistenceServiceProxy Implementation
//
template <typename ... _AttributeExtensions>
PersistenceServiceProxy<_AttributeExtensions...>::PersistenceServiceProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<PersistenceServiceProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<PersistenceServiceProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
PersistenceServiceProxy<_AttributeExtensions...>::~PersistenceServiceProxy() {
}

template <typename ... _AttributeExtensions>
void PersistenceServiceProxy<_AttributeExtensions...>::store(const std::string &_key, const std::string &_value, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->store(_key, _value, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PersistenceServiceProxy<_AttributeExtensions...>::storeAsync(const std::string &_key, const std::string &_value, StoreAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->storeAsync(_key, _value, _callback, _info);
}
template <typename ... _AttributeExtensions>
void PersistenceServiceProxy<_AttributeExtensions...>::load(const std::string &_key, CommonAPI::CallStatus &_internalCallStatus, std::string &_value, const CommonAPI::CallInfo *_info) {
    delegate_->load(_key, _internalCallStatus, _value, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> PersistenceServiceProxy<_AttributeExtensions...>::loadAsync(const std::string &_key, LoadAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->loadAsync(_key, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &PersistenceServiceProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool PersistenceServiceProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool PersistenceServiceProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& PersistenceServiceProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& PersistenceServiceProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace commonapi
} // namespace v1_0


#endif // COMMONAPI_Persistence_Service_PROXY_HPP_
