/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_Persistence_Service_DBUS_STUB_ADAPTER_HPP_
#define COMMONAPI_Persistence_Service_DBUS_STUB_ADAPTER_HPP_

#include <v1_0/commonapi/PersistenceServiceStub.hpp>
#include "v1_0/commonapi/PersistenceServiceDBusDeployment.hpp"        

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusStubAdapterHelper.hpp>
#include <CommonAPI/DBus/DBusStubAdapter.hpp>
#include <CommonAPI/DBus/DBusDeployment.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {

typedef CommonAPI::DBus::DBusStubAdapterHelper<PersistenceServiceStub> PersistenceServiceDBusStubAdapterHelper;

class PersistenceServiceDBusStubAdapterInternal
    : public virtual PersistenceServiceStubAdapter,
      public PersistenceServiceDBusStubAdapterHelper
{
public:
    PersistenceServiceDBusStubAdapterInternal(
            const CommonAPI::DBus::DBusAddress &_address,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
            const std::shared_ptr<CommonAPI::StubBase> &_stub);

    ~PersistenceServiceDBusStubAdapterInternal();

    virtual bool hasFreedesktopProperties();




    const PersistenceServiceDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    const CommonAPI::DBus::StubAttributeTable& getStubAttributeTable();

    void deactivateManagedInstances();
    

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1_0::commonapi::PersistenceServiceStub,
        CommonAPI::Version
        > getPersistenceServiceInterfaceVersionStubDispatcher;




static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1_0::commonapi::PersistenceServiceStub,
    std::tuple<std::string, std::string>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment>,
    std::tuple<>
    
    > storeStubDispatcher;

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v1_0::commonapi::PersistenceServiceStub,
    std::tuple<std::string>,
    std::tuple<std::string>,
    std::tuple<CommonAPI::DBus::StringDeployment>,
    std::tuple<CommonAPI::DBus::StringDeployment>
    
    > loadStubDispatcher;




 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;

 private:
    PersistenceServiceDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
    CommonAPI::DBus::StubAttributeTable stubAttributeTable_;
};

class PersistenceServiceDBusStubAdapter
    : public PersistenceServiceDBusStubAdapterInternal,
      public std::enable_shared_from_this<PersistenceServiceDBusStubAdapter> {
public:
    PersistenceServiceDBusStubAdapter(
    	const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
    	: CommonAPI::DBus::DBusStubAdapter(
    		_address, 
    		_connection,
            false),
          PersistenceServiceDBusStubAdapterInternal(
          	_address, 
          	_connection, 
          	_stub) { 
    }
};

} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_Persistence_Service_DBUS_STUB_ADAPTER_HPP_
