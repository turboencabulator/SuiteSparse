#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([SuiteSparse_config],[5.8.1],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[suitesparseconfig],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([SuiteSparse_config.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign])
AM_SILENT_RULES([yes])
LT_INIT([disable-static])

# Checks for programs.
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
SS_SEARCH_LIBS([clock_gettime], [rt], [POSIX_LIBS])
AC_SUBST([POSIX_LIBS])
AS_VAR_SET([LIBS], [$LIBS_SAVED])

# Checks for header files.
AC_CHECK_HEADERS([limits.h stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MALLOC

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	suitesparseconfig.pc
	Makefile
	xerbla/Makefile
])
AC_OUTPUT
