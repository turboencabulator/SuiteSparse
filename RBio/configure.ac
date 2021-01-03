#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([RBio],[2.2.6],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[rbio],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([Source/RBio.c])
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
AX_CODE_COVERAGE

AS_VAR_SET([LIBS_SAVED], [$LIBS])

# Checks for libraries.
PKG_CHECK_MODULES([SUITESPARSECONFIG], [suitesparseconfig])

# Checks for header files.
AC_CHECK_HEADERS([stddef.h stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AS_VAR_SET([LIBS], [$LIBS_SAVED])

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	rbio.pc
	Makefile
	Demo/Makefile
	Include/Makefile
	RBio/Makefile
	RBio/private/Makefile
	Source/Makefile
	Tcov/Makefile
])
AC_OUTPUT
