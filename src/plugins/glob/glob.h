/***************************************************************************
                     glob.c  -  Skeleton of a plugin
                             -------------------
    begin                : Fri May 21 2010
    copyright            : (C) 2010 by Markus Raab
    email                : elektra@markus-raab.org
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the BSD License (revised).                      *
 *                                                                         *
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This is the skeleton of the methods you'll have to implement in order *
 *   to provide a valid plugin.                                            *
 *   Simple fill the empty functions with your code and you are            *
 *   ready to go.                                                          *
 *                                                                         *
 ***************************************************************************/


#ifndef ELEKTRA_PLUGIN_GLOB_H
#define ELEKTRA_PLUGIN_GLOB_H

#include <kdbplugin.h>

#include <stdlib.h>
#include <string.h>
#include <fnmatch.h>

int elektraGlobOpen(Plugin *handle, Key *errorKey);
int elektraGlobClose(Plugin *handle, Key *errorKey);
int elektraGlobGet(Plugin *handle, KeySet *ks, Key *parentKey);
int elektraGlobSet(Plugin *handle, KeySet *ks, Key *parentKey);
int elektraGlobError(Plugin *handle, KeySet *ks, Key *parentKey);

Plugin *ELEKTRA_PLUGIN_EXPORT(glob);

#endif
