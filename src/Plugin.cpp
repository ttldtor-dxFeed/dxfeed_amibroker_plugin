#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>
#include "Plugin.h"

#define PLUGIN_NAME "dxFeed data plug-in"
#define VENDOR_NAME "dxfeed.com"
#define PLUGIN_VERSION 10000
//TODO: register PID
#define PLUGIN_ID PIDCODE( 'T', 'E', 'S', 'T')
#define THIS_PLUGIN_TYPE PLUGIN_TYPE_DATA

static PluginInfo oPluginInfo =
        {
                sizeof(struct PluginInfo),
                THIS_PLUGIN_TYPE,
                PLUGIN_VERSION,
                PLUGIN_ID,
                PLUGIN_NAME,
                VENDOR_NAME,
                0, //TODO: get certificate
                371000
        };

PLUGINAPI int GetPluginInfo(PluginInfo *pluginInfo) {
    *pluginInfo = oPluginInfo;

    return TRUE;
}

PLUGINAPI int Init(void) {
    return TRUE;     // default implementation does nothing
}

PLUGINAPI int Release(void) {
    return TRUE;      // default implementation does nothing
}

PLUGINAPI int
GetQuotes(LPCTSTR ticker, int periodicity, int lastValid, int size, QuotationFormat4 *quotes) {
    return 0;
}

PLUGINAPI int GetQuotesEx(LPCTSTR ticker, int periodicity, int lastValid, int size, struct Quotation *quotes,
                          GQEContext *context) {
    return 0;
}
