#ifndef PLDK_HEADER_CONFIG_LINKING_HH
#define PLDK_HEADER_CONFIG_LINKING_HH

#ifdef PLDK_STATIC
#	define PLDK_EXPORT
#else
#	ifdef _MSC_VER
#		ifdef PLDK
#			define PLDK_EXPORT __declspec(dllexport)
#		else
#			define PLDK_EXPORT __declspec(dllimport)
#		endif
#	else
#		define PLDK_EXPORT
#	endif
#endif

#endif