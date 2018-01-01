/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */
/* Process this file with autoheader to produce config.h.in */
#ifndef CONFIG_H
#define CONFIG_H

/* Package and version */
#define PACKAGE "t1utils"
#define VERSION "1.9"


/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Name of package */
#define PACKAGE "t1utils"

/* Version number of package */
#define VERSION "1.9"


#ifdef __cplusplus
extern "C" {
#endif

/* Prototype strerror() if we don't have it. */
#ifndef HAVE_STRERROR
char *strerror(int errno);
#endif

#ifdef __cplusplus
}
/* Get rid of inline macro under C++ */
/* # undef inline */
#endif
#endif
