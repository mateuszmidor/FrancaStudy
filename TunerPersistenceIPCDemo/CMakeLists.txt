cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++0x")
set (COMMONAPI_DIR "${PROJECT_SOURCE_DIR}/CommonAPI")
 
include_directories(
    src-gen
    ${COMMONAPI_DIR}/common-api-runtime/include
    ${COMMONAPI_DIR}/common-api-dbus-runtime/include
    ${COMMONAPI_DIR}/dbus-1.8.20
)
  
link_directories(
    ${COMMONAPI_DIR}/common-api-runtime/build
    ${COMMONAPI_DIR}/common-api-dbus-runtime/build
    ${COMMONAPI_DIR}/dbus-1.8.20/dbus/.libs
)
 
add_executable(Tuner
    src/Tuner.cpp
    src-gen/v1_0/commonapi/PersistenceServiceDBusProxy.cpp
    src-gen/v1_0/commonapi/PersistenceServiceDBusDeployment.cpp
)
target_link_libraries(Tuner CommonAPI CommonAPI-DBus dbus-1)
 
add_executable(Persistence
    src/Persistence.cpp
    src/PersistenceServiceImpl.cpp
    src-gen/v1_0/commonapi/PersistenceServiceDBusStubAdapter.cpp
    src-gen/v1_0/commonapi/PersistenceServiceStubDefault.cpp
    src-gen/v1_0/commonapi/PersistenceServiceDBusDeployment.cpp
)
target_link_libraries(Persistence CommonAPI CommonAPI-DBus dbus-1)