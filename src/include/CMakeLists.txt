include(CheckIncludeFile)
include(CheckSymbolExists)
include(CheckTypeSize)

check_symbol_exists(clearenv     "stdlib.h"         HAVE_CLEARENV)
check_symbol_exists(setenv       "stdlib.h"         HAVE_SETENV)
check_symbol_exists(futimens     "sys/stat.h"       HAVE_FUTIMENS)
check_symbol_exists(futimes      "sys/time.h"       HAVE_FUTIMES)

check_include_file(ctype.h      HAVE_CTYPE_H)
check_include_file(errno.h      HAVE_ERRNO_H)
check_include_file(locale.h     HAVE_LOCALE_H)
check_include_file(stdio.h      HAVE_STDIO_H)
check_include_file(stdlib.h     HAVE_STDLIB_H)
check_include_file(string.h     HAVE_STRING_H)
check_include_file(time.h       HAVE_TIME_H)
check_include_file(unistd.h     HAVE_UNISTD_H)

check_type_size(int             SIZEOF_INT)
check_type_size(long            SIZEOF_LONG)
check_type_size("long long"     SIZEOF_LONG_LONG)
check_type_size("long double"   SIZEOF_LONG_DOUBLE)
check_type_size(mode_t          SIZEOF_MODE_T)

set (BUILTIN_EXEC_FOLDER
	"${CMAKE_INSTALL_PREFIX}/${TARGET_TOOL_EXEC_FOLDER}")
set (BUILTIN_DATA_FOLDER
	"${CMAKE_INSTALL_PREFIX}/${TARGET_TEST_DATA_FOLDER}")
set (ELEKTRA_DEPRECATED "__attribute__ ((deprecated))")
set (ELEKTRA_UNUSED "__attribute__ ((unused))")

set (BUILTIN_SPEC_FOLDER
	"${CMAKE_INSTALL_PREFIX}/${KDB_DB_SPEC}")

configure_file (
	"${CMAKE_CURRENT_SOURCE_DIR}/kdb.h.in"
	"${CMAKE_CURRENT_BINARY_DIR}/kdb.h"
	)

configure_file (
	"${CMAKE_CURRENT_SOURCE_DIR}/kdbconfig.h.in"
	"${CMAKE_CURRENT_BINARY_DIR}/kdbconfig.h"
	)

configure_file (
	"${CMAKE_CURRENT_SOURCE_DIR}/kdbversion.h.in"
	"${CMAKE_CURRENT_BINARY_DIR}/kdbversion.h"
	)

install (FILES
	"${CMAKE_CURRENT_BINARY_DIR}/kdbconfig.h"
	kdbextension.h
	kdbmeta.h
	kdbtypes.h
	kdbhelper.h
	"${CMAKE_CURRENT_BINARY_DIR}/kdb.h"
	kdbmodule.h
	kdbos.h
	kdbplugin.h
	kdbprivate.h
	kdbproposal.h
	"${CMAKE_CURRENT_BINARY_DIR}/kdbversion.h"
	DESTINATION include/${TARGET_INCLUDE_FOLDER})
