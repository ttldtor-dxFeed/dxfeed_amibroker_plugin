#define WIN32_LEAN_AND_MEAN

#include <windows.h>

BOOL APIENTRY DllMain(HANDLE dllModuleHandle, DWORD reasonForCall, LPVOID) {
    switch (reasonForCall) {
        case DLL_PROCESS_ATTACH: // A process is loading the DLL.
            break;
        case DLL_THREAD_ATTACH: // A process is creating a new thread.
            break;
        case DLL_THREAD_DETACH: // A thread exits normally.
            break;
        case DLL_PROCESS_DETACH: // A process unloads the DLL.
            break;
        default:
            break;
    }

    return TRUE;
}