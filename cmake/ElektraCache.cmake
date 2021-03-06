#
# CACHE
#
# Here all cache variables are set
#
#
# If you add something here, make sure to also add it in
# src/plugins/constants/

include(LibAddMacros)

remember_for_removal(PLUGINS TO_REMOVE_PLUGINS)

#
# the default list of plugins
#
# They are essential so that elektra can work
#
set (PLUGINS_LIST_DEFAULT
	dump
	resolver
	sync
	error
	)

#
# force default list
# (default plugins are always included, so PLUGINS_LIST is unset)
#
if (PLUGINS MATCHES "DEFAULT")
	set (PLUGINS_FORCE FORCE)
endif ()

#
# Those plugins can only be compiled, but cannot be used.
# Should compile on every system where elektra compiles.
#
set (PLUGINS_LIST_COMPILE
	template
	doc
	)

#
# Plugins which only need Ansi C/C++,
# (like elektra core itself)
# Should compile on every system where elektra compiles.
#
set (PLUGINS_LIST_NODEP
	ccode
	fstab
	csvstorage
	lineendings
	hexcode
	hidden
	ni
	null
	struct
	tracer
	counter
	type
	constants
	noresolver
	wresolver
	ini
	list
	)

#
# Plugins which use some posix facility
#
set (PLUGINS_LIST_POSIX
	glob
	hosts
	iconv
	network
	path
	enum
	mathcheck
	conditionals
	keytometa
	rename
	syslog
	uname
	timeofday
	simpleini
	line
	validation
	regexstore
	)

#
# force no dependency list
#
if (PLUGINS MATCHES "NODEP")
	set (PLUGINS_LIST
		${PLUGINS_LIST_COMPILE}
		${PLUGINS_LIST_NODEP}
		${PLUGINS_LIST_POSIX}
	    )
	set (PLUGINS_FORCE FORCE)
endif ()

#
# some are handy for tests,
# other are for standard-compliance
#
set (PLUGINS_LIST_RESOLVER
	resolver_fm_b_b
	resolver_fm_hb_b
	resolver_fm_hp_b
	resolver_fm_ub_x
	resolver_fm_xb_x
	resolver_fm_xp_x
	resolver_fm_xhp_x
	resolver_fm_uhb_xb
	)

#
# plugins with dependencies
#
set (PLUGINS_LIST_DEP
	yajl
	dbus
	tcl
	xmltool
	augeas
	journald
	jni
	python
	python2
	lua
	crypto
	)

#
# force all plugins
#
if (PLUGINS MATCHES "ALL")
	set (PLUGINS_LIST
		${PLUGINS_LIST_COMPILE}
		${PLUGINS_LIST_NODEP}
		${PLUGINS_LIST_POSIX}
		${PLUGINS_LIST_RESOLVER}
		${PLUGINS_LIST_DEP}
		)
	set (PLUGINS_FORCE FORCE)
endif ()


set (PLUGINS_DOC "Which plugins should be added? ALL for all available, NODEP for plugins without additional dependencies and DEFAULT for minimal set.")


#
# now actually set the plugins cache variable
#
# Always include DEFAULT plugins, but maybe include more
#
set (PLUGINS
	${PLUGINS_LIST_DEFAULT}
	${PLUGINS_LIST}
	CACHE STRING ${PLUGINS_DOC}
	${PLUGINS_FORCE}
	)

removal(PLUGINS TO_REMOVE_PLUGINS)
set(PLUGINS ${PLUGINS} CACHE STRING ${PLUGINS_DOC} FORCE)










#
# set BINDINGS cache variable
#

remember_for_removal(BINDINGS TO_REMOVE_BINDINGS)

set (BINDINGS_LIST_DEFAULT cpp)

if (BINDINGS MATCHES "NODEP")
	set (BINDINGS_FORCE FORCE)
endif()

if (BINDINGS MATCHES "DEFAULT")
	set (BINDINGS_FORCE FORCE)
endif()

list (FIND BINDINGS "SWIG" FINDEX)
if (BINDINGS MATCHES "ALL" OR FINDEX GREATER -1)
	set (BINDINGS_LIST_SWIG
		swig_lua
		swig_python2
		swig_python
		)
	set (BINDINGS_FORCE FORCE)
endif ()
# rename swig_python3 to swig_python - TODO remove sometime in the future
list (FIND BINDINGS "swig_python3" FINDEX)
if (FINDEX GREATER -1)
	message (STATUS "swig_python3 has been renamed to swig_python")
	list (REMOVE_ITEM BINDINGS swig_python3)
	list (APPEND BINDINGS swig_python)
endif ()

list (FIND BINDINGS "GI" FINDEX)
if (BINDINGS MATCHES "ALL" OR FINDEX GREATER -1)
	set (BINDINGS_LIST_GI
		glib
		gi_lua
		gi_python
		)
	set (BINDINGS_FORCE FORCE)
endif ()

if (BINDINGS MATCHES "ALL")
	set(BINDINGS_LIST_ALL
		jna
		)
endif()

set (BINDINGS_DOC "Which bindings should be added? ALL for all available, SWIG, GI for plugins based on respective technology, DEFAULT for minimal set.")


set (BINDINGS
	${BINDINGS_LIST_DEFAULT}
	${BINDINGS_LIST_SWIG}
	${BINDINGS_LIST_GI}
	${BINDINGS_LIST_ALL}
	CACHE STRING ${BINDINGS_DOC}
	${BINDINGS_FORCE}
	)

removal(BINDINGS TO_REMOVE_BINDINGS)
set(BINDINGS ${BINDINGS} CACHE STRING ${BINDINGS_DOC} FORCE)









#
# set TOOLS cache variable
#

remember_for_removal(TOOLS TO_REMOVE_TOOLS)

set (TOOLS_LIST_DEFAULT kdb)

if (TOOLS MATCHES "DEFAULT")
	set (TOOLS_FORCE FORCE)
endif ()

if (TOOLS MATCHES "NODEP")
	set (TOOLS_LIST
		)
	set (TOOLS_FORCE FORCE)
endif ()

if (TOOLS MATCHES "ALL")
	set (TOOLS_LIST
		gen
		race
		qt-gui
		)
	set (TOOLS_FORCE FORCE)
endif ()

set (TOOLS_DOC "Which TOOLS should be added? ALL for all available, NODEP for TOOLS without additional dependencies, DEFAULT for minimal set.")

set (TOOLS
	${TOOLS_LIST_DEFAULT}
	${TOOLS_LIST}
	CACHE STRING ${TOOLS_DOC}
	${TOOLS_FORCE}
	)

removal(TOOLS TO_REMOVE_TOOLS)
set(TOOLS ${TOOLS} CACHE STRING ${TOOLS_DOC} FORCE)







#
# Runtime pathes for KDB
#

set (KDB_DB_SYSTEM "/etc/kdb" CACHE PATH
		"The path to the system key database."
		)

set (KDB_DB_HOME "/home" CACHE PATH
		"The compiled-in fallback path to users home directories."
		)

set (KDB_DB_USER ".config" CACHE PATH
		"This path will be appended after the resolved home directory. It completes the path to the user key database."
		)

set (KDB_DB_SPEC "share/elektra/specification" CACHE PATH
		"This path will be appended after the prefix. It completes the path to the specification key database."
		)

set (KDB_DB_DIR ".dir" CACHE PATH
		"The configuration directory for config files in dir namespace."
		)

set (KDB_DB_FILE "default.ecf" CACHE PATH
		"This configuration file will be used initially (for bootstrapping)."
		)

set (KDB_DEFAULT_STORAGE "dump" CACHE STRING
	"This storage plugin will be used initially (for bootstrapping).")


set (KDB_DEFAULT_RESOLVER "resolver" CACHE STRING
	"This resolver plugin will be used initially (for bootstrapping).")

list (FIND PLUGINS ${KDB_DEFAULT_STORAGE} output)
if (output EQUAL -1)
	message(SEND_ERROR "selected default storage (${KDB_DEFAULT_STORAGE})  is not selected in PLUGINS, please change KDB_DEFAULT_STORAGE or PLUGINS")
endif()

list (FIND PLUGINS ${KDB_DEFAULT_RESOLVER} output)
if (output EQUAL -1)
	message(SEND_ERROR "selected default resolver (${KDB_DEFAULT_RESOLVER}) is not selected in PLUGINS, please change KDB_DEFAULT_RESOLVER or PLUGINS")
endif()


#
# Compile options
#


option (ENABLE_CXX11 "WARNING: Option will be removed with 0.8.13. See libelektra.org/issues/262. Include code using C++11 standard, needs gcc 4.7 or comparable clang/icc." ON)

set (GTEST_ROOT "" CACHE PATH "use external gtest instead of internal")

set (CMAKE_PIC_FLAGS "-fPIC"
	CACHE STRING "Which pic flags should be used for cases cmake cannot handle it itself")

set (CMAKE_STATIC_FLAGS ""
	CACHE STRING "Which static flags should be used for compilation of *-static libs+tools, use \"-static\" if you want a real static kdb-static (it needs .a for every dependency though)")




#
# Build properties
#


option (BUILD_SHARED "Build the shared version of elektra." ON)
option (BUILD_FULL "Build the full version of elektra (shared with all selected backends included)." ON)
option (BUILD_STATIC "Build the static version of elektra (all selected backends included statically)." ON)

option (BUILD_DOCUMENTATION "Build the documentation (API, man pages)" ON)
if (BUILD_DOCUMENTATION)
	option (INSTALL_DOCUMENTATION "Install the documentation (API, man pages)" ON)
	option (BUILD_PDF "Build the documentation also in PDF form" OFF)
else (BUILD_DOCUMENTATION)
	#install documentation makes no sense if it is not build
	#(even though the option would not harm)
	set (INSTALL_DOCUMENTATION OFF CACHE BOOL
			"Install the documentation (API, man pages)"
			FORCE
		)
	set (BUILD_PDF OFF CACHE BOOL
			"Build the documentation also in PDF form"
			FORCE
		)
endif (BUILD_DOCUMENTATION)

option (ENABLE_TESTING "Enable to run (any) tests by make test" ON)
if (ENABLE_TESTING)
	option (ENABLE_KDB_TESTING "Enable to run tests writing to hard disc" ON)
else (ENABLE_TESTING)
	set (ENABLE_KDB_TESTING OFF CACHE BOOL "Enable to run tests writing to hard disc" FORCE)
endif (ENABLE_TESTING)



option (BUILD_TESTING "Build main test suite (does not affect plugins+bindings)" ON)
if (BUILD_TESTING)
	option (INSTALL_TESTING "Install testcases" ON)
else (BUILD_TESTING)
	#install testing makes no sense if it is not build
	#(even though the option would not harm)
	set (INSTALL_TESTING OFF CACHE BOOL "Install testcases" FORCE)
endif (BUILD_TESTING)

set (ENABLE_COVERAGE OFF CACHE BOOL "enable coverage analysis (using gcov)")
set (COVERAGE_PREFIX
		"${PROJECT_SOURCE_DIR}/.."
		CACHE FILEPATH
		"Full path to common prefix of build+source directory"
    )

option (INSTALL_SYSTEM_FILES "Install files to system directories" ON)


#
# Developer builds (debug or verbose build)
#

option (ELEKTRA_DEBUG_BUILD "Build with extra debug print messages (to debug elektra).")
if (ELEKTRA_DEBUG_BUILD)
	set (DEBUG "1")
else (ELEKTRA_DEBUG_BUILD)
	set (DEBUG "0")
endif (ELEKTRA_DEBUG_BUILD)
MARK_AS_ADVANCED(ELEKTRA_DEBUG_BUILD)

option (ELEKTRA_VERBOSE_BUILD "Build with even more print messages (to debug elektra).")
if (ELEKTRA_VERBOSE_BUILD)
	set (VERBOSE "1")
else (ELEKTRA_VERBOSE_BUILD)
	set (VERBOSE "0")
endif (ELEKTRA_VERBOSE_BUILD)
MARK_AS_ADVANCED(ELEKTRA_VERBOSE_BUILD)


#
# Target installation folders
#

set (TARGET_INCLUDE_FOLDER
		"elektra"
		CACHE STRING
		"This folder (below prefix/include) will be used to install include files."
    )

set (TARGET_CMAKE_FOLDER
		"lib${LIB_SUFFIX}/cmake/Elektra"
		CACHE STRING
		"This folder (below prefix) will be used to install cmake files."
    )

set (TARGET_PLUGIN_FOLDER
		"elektra"
		CACHE STRING
		"This folder (below prefix/lib) will be used to install elektra plugins. LIB_SUFFIX is honored."
    )

set (TARGET_PKGCONFIG_FOLDER
		"pkgconfig"
		CACHE STRING
		"The folder (below prefix/lib) folder where to install pkgconfig files. LIB_SUFFIX is honored."
    )

set (TARGET_DOCUMENTATION_HTML_FOLDER
		"share/doc/elektra-api/html"
		CACHE STRING
		"The folder (below prefix) where to install html api documentation files."
    )

set (TARGET_DOCUMENTATION_MAN_FOLDER
		"share/man/man3"
		CACHE STRING
		"The folder (below prefix) where to install man3 api documentation files."
    )

set (TARGET_DOCUMENTATION_LATEX_FOLDER
		"share/doc/elektra-api/latex"
		CACHE STRING
		"The folder (below prefix) where to install latex api documentation files."
    )

set (TARGET_TOOL_EXEC_FOLDER
		"lib${LIB_SUFFIX}/elektra/tool_exec"
		CACHE STRING
		"This folder (below prefix) will be used to install additional kdb-tools"
    )

set (TARGET_TEST_DATA_FOLDER
		"share/elektra/test_data"
		CACHE STRING
		"This folder (below prefix) will be used to install test data"
    )

set (TARGET_TEMPLATE_FOLDER
		"share/elektra/templates"
		CACHE STRING
		"This folder (below prefix) will be used to install templates"
    )

set (TARGET_LUA_CMOD_FOLDER "lib${LIB_SUFFIX}/lua/5.2"
	CACHE PATH
	"Directory to install Lua binary modules, should be in LUA_CPATH"
   )

set (TARGET_LUA_LMOD_FOLDER "share/lua/5.2"
	CACHE PATH
	"Directory to install Lua source modules, should be in LUA_PATH)"
    )

#
# Misc.
#

set (LIB_SUFFIX ""
		CACHE STRING
		"Optional suffix to use on lib folders (e.g. 64 for lib64)"
    )

set (MEMORYCHECK_COMMAND
		/usr/bin/valgrind
		CACHE FILEPATH
		"Full path to valgrind"
    )

set(MEMORYCHECK_SUPPRESSIONS_FILE
		${CMAKE_SOURCE_DIR}/tests/valgrind.suppression
		CACHE FILEPATH
		"Full path to suppression file for valgrind")


set(DISCLAMER "
/***************************************************************************
 *                                                                         *
 * This header file is AUTO GENERATED.                                     *
 * Do not edit this file, otherwise your changes will be discarded in the  *
 * next cmake run.                                                         *
 *                                                                         *
 ***************************************************************************/")


MARK_AS_ADVANCED(FORCE
	# might be relevant to users:
	GTEST_ROOT
	COVERAGE_PREFIX
	Boost_DIR

	# are kind of internal:
	SWIG_DIR SWIG_EXECUTABLE SWIG_VERSION
	gtest_build_samples gtest_build_tests gtest_disable_pthreads
	gtest_force_shared_crt BUILD_SHARED_LIBS
	)
