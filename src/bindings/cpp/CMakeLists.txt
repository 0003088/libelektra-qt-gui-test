include (LibAddMacros)

if (BUILD_FULL OR BUILD_STATIC)
	if (BUILD_TESTING)
		add_subdirectory (tests)
	endif (BUILD_TESTING)
	add_subdirectory (examples)
	add_subdirectory (benchmarks)
endif (BUILD_FULL OR BUILD_STATIC)

add_subdirectory(include)
