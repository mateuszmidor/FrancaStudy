What is this?
    A client - server IPC demo of Franca IDL/CommonAPI/DBus.
    Based on "CommonAPI C++ D-Bus in 10 minutes (from scratch)" at:
    https://genivi-oss.atlassian.net/wiki/pages/viewpage.action?pageId=5472316
    More detailed CommonAPI guide available at:
    http://docs.projects.genivi.org/ipc.common-api-tools/3.1.2/pdf/CommonAPICppUserGuide.pdf

What are the parties?
    "Tuner" application - is a client here.
    "Persistence" application - is a server here.

Prerequisites?  
    java jre for c++ code generators (version 6 should suffice)

Steps to run the demo:
    0. Very first, run "install_linux_basetools.sh" to install CommonAPI installer tools.
    1. First run the installer script "install_common_api.sh" in ./CommonAPI/ 
    2. Then run c++ code generator script "generate_c++_from_franca.sh" 
    3. Then run "cmake .." inside ./build/
    4. Then run "make" inside ./build/
    5. Then run Persistence and Tuner in separate terminal windows
    6. Issue "store"/"load" from Tuner and see how it is handled by Persistence
