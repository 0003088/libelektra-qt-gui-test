/*
 * \copydoc lua.cpp
 */

#ifndef ELEKTRA_PLUGIN_LUA_H

extern "C"
{
#include <kdbplugin.h>

int elektraLuaOpen(ckdb::Plugin *handle,  ckdb::Key *errorKey);
int elektraLuaClose(ckdb::Plugin *handle, ckdb::Key *errorKey);
int elektraLuaGet(ckdb::Plugin *handle,   ckdb::KeySet *ks, ckdb::Key *parentKey);
int elektraLuaSet(ckdb::Plugin *handle,   ckdb::KeySet *ks, ckdb::Key *parentKey);
int elektraLuaError(ckdb::Plugin *handle, ckdb::KeySet *ks, ckdb::Key *parentKey);

ckdb::Plugin *ELEKTRA_PLUGIN_EXPORT(lua);
}

#endif
