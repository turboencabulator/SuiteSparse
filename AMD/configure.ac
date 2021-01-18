#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([AMD],[2.4.6],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[amd],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([Source/amd_order.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign])
AM_SILENT_RULES([yes])
LT_INIT([disable-static])

# Checks for programs.
PKG_PROG_PKG_CONFIG
AC_PROG_INSTALL
AC_PROG_CC
AC_PROG_F77
AX_CODE_COVERAGE

# Checks for libraries.
AC_DEFUN([SS_SEARCH_LIBS],
	[AC_SEARCH_LIBS([$1], [$2],
		[test "$ac_res" = "none required" || $3="$ac_res $$3"],
		[AC_MSG_ERROR([cannot find library containing $1])],
		[$4])])

AS_VAR_SET([LIBS_SAVED], [$LIBS])
AS_VAR_SET([POSIX_LIBS])
SS_SEARCH_LIBS([sqrt], [m], [POSIX_LIBS])
AC_SUBST([POSIX_LIBS])
AS_VAR_SET([LIBS], [$LIBS_SAVED])

PKG_CHECK_MODULES([SUITESPARSECONFIG], [suitesparseconfig])

# Checks for header files.
AC_CHECK_HEADERS([limits.h stddef.h stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	amd.pc
	Makefile
	Demo/Makefile
	Doc/Makefile
	Include/Makefile
	Source/Makefile
])
AC_OUTPUT
