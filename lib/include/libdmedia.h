#ifndef LIBDMEDIA_H
#define LIBDMEDIA_H

// EXPORTS
#ifdef _WIN32
#  ifdef dmedia_EXPORTS
#    define LIBDMEDIA_API _declspec(dllexport)
#  else
#    define LIBDMEDIA_API _declspec(dllimport)
#  endif
#else
#  define LIBDMEDIA_API
#endif

#endif // LIBDMEDIA_H
