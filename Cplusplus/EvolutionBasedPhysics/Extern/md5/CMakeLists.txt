add_library(MD5 STATIC
	md5.cpp
	md5.h
	)

set_target_properties(MD5 PROPERTIES FOLDER "${FOLDER_PREFIX}ExternalProjectTargets")
set_target_properties(MD5 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
