#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([BTF],[1.2.6],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[btf],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([Source/btf_order.c])
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

# Checks for libraries.
PKG_CHECK_MODULES([SUITESPARSECONFIG], [suitesparseconfig])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	btf.pc
	Makefile
	Include/Makefile
	Source/Makefile
])
AC_OUTPUT
