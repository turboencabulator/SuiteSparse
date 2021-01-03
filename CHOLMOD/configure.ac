#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([CHOLMOD],[3.0.14],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[cholmod],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([Core/cholmod_common.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h Include/cholmod_config.h])
AM_INIT_AUTOMAKE([foreign])
AM_SILENT_RULES([yes])
LT_INIT([disable-static])

# Checks for programs.
PKG_PROG_PKG_CONFIG
AC_PROG_INSTALL
AC_PROG_CC
AC_PROG_F77
AC_PROG_AWK
AC_OPENMP
AX_CODE_COVERAGE

AC_ARG_ENABLE([mod-check],
	[AS_HELP_STRING(
		[--disable-mod-check],
		[do not build the Check module])],
	[],
	[AS_VAR_SET([enable_mod_check], [yes])])

AC_ARG_ENABLE([mod-cholesky],
	[AS_HELP_STRING(
		[--disable-mod-cholesky],
		[do not build the Cholesky module])],
	[],
	[AS_VAR_SET([enable_mod_cholesky], [yes])])

AC_ARG_ENABLE([mod-partition],
	[AS_HELP_STRING(
		[--disable-mod-partition],
		[do not build the Partition module])],
	[],
	[AS_VAR_SET([enable_mod_partition], [yes])])

AC_ARG_ENABLE([mod-matrixops],
	[AS_HELP_STRING(
		[--disable-mod-matrixops],
		[do not build the MatrixOps module])],
	[],
	[AS_VAR_SET([enable_mod_matrixops], [yes])])

AC_ARG_ENABLE([mod-modify],
	[AS_HELP_STRING(
		[--disable-mod-modify],
		[do not build the Modify module])],
	[],
	[AS_VAR_SET([enable_mod_modify], [yes])])

AC_ARG_ENABLE([mod-supernodal],
	[AS_HELP_STRING(
		[--disable-mod-supernodal],
		[do not build the Supernodal module])],
	[],
	[AS_VAR_SET([enable_mod_supernodal], [yes])])

AC_ARG_ENABLE([gpl-modules],
	[AS_HELP_STRING(
		[--disable-gpl-modules],
		[do not build GPL-licensed modules])],
	[],
	[AS_VAR_SET([enable_gpl_modules], [yes])])

AC_ARG_ENABLE([timing],
	[AS_HELP_STRING(
		[--disable-timing],
		[do not use timing routines])],
	[],
	[AS_VAR_SET([enable_timing], [yes])])

AS_VAR_SET([LIBS_SAVED], [$LIBS])

# Checks for libraries.
AC_CHECK_LIB([m], [sqrt])

PKG_CHECK_MODULES([SUITESPARSECONFIG], [suitesparseconfig])
AS_VAR_SET([CHOLMOD_REQUIRES], ["suitesparseconfig"])

AS_IF([test "x$enable_gpl_modules" != "xyes"], [
	AC_DEFINE([NGPL], [], [Define to disable GPL-licensed modules])
	AS_VAR_SET([enable_mod_matrixops], [no])
	AS_VAR_SET([enable_mod_modify], [no])
	AS_VAR_SET([enable_mod_supernodal], [no])
])

AS_IF([test "x$enable_mod_check" != "xyes"], [
	AC_DEFINE([NCHECK], [], [Define to disable the Check module])
])

AS_IF([test "x$enable_mod_cholesky" != "xyes"], [
	AC_DEFINE([NCHOLESKY], [], [Define to disable the Cholesky module])
], [
	PKG_CHECK_MODULES([AMD], [amd],
		[AS_VAR_APPEND([CHOLMOD_REQUIRES], [" amd"])],
		[AC_MSG_ERROR([$AMD_PKG_ERRORS (required by mod-cholesky)])])

	PKG_CHECK_MODULES([COLAMD], [colamd],
		[AS_VAR_APPEND([CHOLMOD_REQUIRES], [" colamd"])],
		[AC_MSG_ERROR([$COLAMD_PKG_ERRORS (required by mod-cholesky)])])
])

AS_IF([test "x$enable_mod_partition" != "xyes"], [
	AC_DEFINE([NCAMD], [], [Define to disable the Partition module])
], [
	PKG_CHECK_MODULES([CAMD], [camd],
		[AS_VAR_APPEND([CHOLMOD_REQUIRES], [" camd"])],
		[AC_MSG_ERROR([$CAMD_PKG_ERRORS (required by mod-partition)])])

	PKG_CHECK_MODULES([CCOLAMD], [ccolamd],
		[AS_VAR_APPEND([CHOLMOD_REQUIRES], [" ccolamd"])],
		[AC_MSG_ERROR([$CCOLAMD_PKG_ERRORS (required by mod-partition)])])

	PKG_CHECK_MODULES([METIS], [metis >= 5.1.0],
		[AS_VAR_SET([have_metis], [yes])
		 AS_VAR_APPEND([CHOLMOD_REQUIRES], [" metis >= 5.1.0"])],
		[AS_VAR_SET([have_metis], [no])
		 AC_MSG_WARN([$METIS_PKG_ERRORS (used by mod-partition), disabling some functionality])])
])

AS_IF([test "x$have_metis" != "xyes"], [
	AC_DEFINE([NPARTITION], [], [Define to disable METIS support in the Partition module])
])

AS_IF([test "x$enable_mod_matrixops" != "xyes"], [
	AC_DEFINE([NMATRIXOPS], [], [Define to disable the MatrixOps module])
])

AS_IF([test "x$enable_mod_modify" != "xyes"], [
	AC_DEFINE([NMODIFY], [], [Define to disable the Modify module])
])

AS_IF([test "x$enable_mod_supernodal" != "xyes"], [
	AC_DEFINE([NSUPERNODAL], [], [Define to disable the Supernodal module])
], [
	AX_BLAS(
		[],
		[AC_MSG_ERROR([cannot find BLAS (required by mod-supernodal)])])

	AX_LAPACK(
		[],
		[AC_MSG_ERROR([cannot find LAPACK (required by mod-supernodal)])])
])

# Checks for header files.
AC_CHECK_HEADERS([float.h limits.h stddef.h stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([sqrt])

AS_VAR_SET([LIBS], [$LIBS_SAVED])

AC_MSG_CHECKING([whether to build mod-check])
AC_MSG_RESULT([$enable_mod_check])
AM_CONDITIONAL([MOD_CHECK], [test "x$enable_mod_check" = "xyes"])

AC_MSG_CHECKING([whether to build mod-cholesky])
AC_MSG_RESULT([$enable_mod_cholesky])
AM_CONDITIONAL([MOD_CHOLESKY], [test "x$enable_mod_cholesky" = "xyes"])

AC_MSG_CHECKING([whether to build mod-partition])
AC_MSG_RESULT([$enable_mod_partition])
AM_CONDITIONAL([MOD_PARTITION], [test "x$enable_mod_partition" = "xyes"])

AC_MSG_CHECKING([whether to build mod-partition with METIS])
AC_MSG_RESULT([$have_metis])
AM_CONDITIONAL([MOD_PARTITION_METIS], [test "x$have_metis" = "xyes"])

AC_MSG_CHECKING([whether to build mod-matrixops])
AC_MSG_RESULT([$enable_mod_matrixops])
AM_CONDITIONAL([MOD_MATRIXOPS], [test "x$enable_mod_matrixops" = "xyes"])

AC_MSG_CHECKING([whether to build mod-modify])
AC_MSG_RESULT([$enable_mod_modify])
AM_CONDITIONAL([MOD_MODIFY], [test "x$enable_mod_modify" = "xyes"])

AC_MSG_CHECKING([whether to build mod-supernodal])
AC_MSG_RESULT([$enable_mod_supernodal])
AM_CONDITIONAL([MOD_SUPERNODAL], [test "x$enable_mod_supernodal" = "xyes"])

AC_MSG_CHECKING([whether to build mod-gpu])
AC_MSG_RESULT([no])
AM_CONDITIONAL([MOD_GPU], [false])

AC_MSG_CHECKING([whether to use timing routines])
AC_MSG_RESULT([$enable_timing])
AM_CONDITIONAL([TIMING], [test "x$enable_timing" = "xyes"])

AC_SUBST([CHOLMOD_REQUIRES])

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	cholmod.pc
	Makefile
	Check/Makefile
	Cholesky/Makefile
	Core/Makefile
	Demo/Makefile
	Doc/Makefile
	GPU/Makefile
	Include/Makefile
	MATLAB/Makefile
	MatrixOps/Makefile
	Modify/Makefile
	Partition/Makefile
	Supernodal/Makefile
	Tcov/Makefile
])
AC_CONFIG_LINKS([Tcov/comments.txt:Tcov/comments.txt])
AC_OUTPUT
