/**
* @file
*
* @brief filter plugin providing cryptographic operations
*
* @copyright BSD License (see doc/COPYING or http://www.libelektra.org)
*
*/

#ifndef ELEKTRA_PLUGIN_CRYPTO_H
#define ELEKTRA_PLUGIN_CRYPTO_H

#include <kdbplugin.h>
#include <stdio.h>

#include <crypto_internal.h>

int elektraCryptoGet(Plugin *handle, KeySet *ks, Key *parentKey);
int elektraCryptoSet(Plugin *handle, KeySet *ks, Key *parentKey);
int elektraCryptoError(Plugin *handle, KeySet *ks, Key *parentKey);


int elektraCryptoInit(Key *errorKey);
int elektraCryptoHandleCreate(elektraCryptoHandle **handle, KeySet *config, Key *errorKey);
void elektraCryptoHandleDestroy(elektraCryptoHandle *handle);
int elektraCryptoEncrypt(elektraCryptoHandle *handle, Key *k, Key *errorKey);
int elektraCryptoDecrypt(elektraCryptoHandle *handle, Key *k, Key *errorKey);

Plugin *ELEKTRA_PLUGIN_EXPORT(crypto);

#endif
