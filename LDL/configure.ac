#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([LDL],[2.2.6],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[ldl],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([Source/ldl.c])
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
AC_PROG_LN_S
AX_CODE_COVERAGE

AS_VAR_SET([LIBS_SAVED], [$LIBS])

# Checks for libraries.
PKG_CHECK_MODULES([SUITESPARSECONFIG], [suitesparseconfig])
PKG_CHECK_MODULES([AMD], [amd],
	[AS_VAR_SET([have_amd], [yes])],
	[AS_VAR_SET([have_amd], [no])
	 AC_MSG_WARN([$AMD_PKG_ERRORS (required by some demos), disabling some functionality])])

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC

AS_VAR_SET([LIBS], [$LIBS_SAVED])

AM_CONDITIONAL([AMD], [test "x$have_amd" = "xyes"])

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	ldl.pc
	Makefile
	Demo/Makefile
	Doc/Makefile
	Include/Makefile
	Matrix/Makefile
	Source/Makefile
])
AC_OUTPUT
