#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([SPQR],[2.0.9],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[spqr],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([Source/spqr_kernel.cpp])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign])
AM_SILENT_RULES([yes])
LT_INIT([disable-static])

# Checks for programs.
PKG_PROG_PKG_CONFIG
AC_PROG_INSTALL
AC_PROG_F77
AC_PROG_CC
AC_PROG_CXX
AC_LANG([C++])
AX_CODE_COVERAGE

AC_ARG_ENABLE([expert],
	[AS_HELP_STRING(
		[--disable-expert],
		[compile without the min 2-norm solution option])],
	[],
	[AS_VAR_SET([enable_expert], [yes])])

AC_ARG_WITH([tbb],
	[AS_HELP_STRING(
		[--without-tbb],
		[do not use Intel Threading Building Blocks for multithreading])],
	[],
	[AS_VAR_SET([with_tbb], [yes])])

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

AX_BLAS(
	[],
	[AC_MSG_ERROR([cannot find BLAS])])

AX_LAPACK(
	[],
	[AC_MSG_ERROR([cannot find LAPACK])])

PKG_CHECK_MODULES([SUITESPARSECONFIG], [suitesparseconfig])
PKG_CHECK_MODULES([CHOLMOD], [cholmod])

# Checks for header files.
AC_CHECK_HEADERS([float.h stdlib.h])

AS_IF([test "x$with_tbb" = "xyes"], [
	AC_CHECK_HEADERS([tbb/task_scheduler_init.h tbb/task.h])
])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.

AS_IF([test "x$with_tbb" = "xyes"], [
	AC_SUBST([TBB_CFLAGS], [""])
	AC_SUBST([TBB_LIBS], ["-ltbb"])
])

AC_MSG_CHECKING([whether to use expert routines])
AC_MSG_RESULT([$enable_expert])
AM_CONDITIONAL([EXPERT], [test "x$enable_expert" = "xyes"])

AC_MSG_CHECKING([whether to use Intel Threading Building Blocks])
AC_MSG_RESULT([$with_tbb])
AM_CONDITIONAL([TBB], [test "x$with_tbb" = "xyes"])

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	spqr.pc
	Makefile
	Demo/Makefile
	Doc/Makefile
	Include/Makefile
	Matrix/Makefile
	Source/Makefile
	Tcov/Makefile
])
#AC_CONFIG_LINKS([Matrix:Matrix])  # Can't link an entire directory?
AC_CONFIG_LINKS([Matrix/GD01_b.mtx:Matrix/GD01_b.mtx])
AC_CONFIG_LINKS([Matrix/GD06_theory.mtx:Matrix/GD06_theory.mtx])
AC_CONFIG_LINKS([Matrix/GD98_a.mtx:Matrix/GD98_a.mtx])
AC_CONFIG_LINKS([Matrix/LFAT5.mtx:Matrix/LFAT5.mtx])
AC_CONFIG_LINKS([Matrix/Ragusa16.mtx:Matrix/Ragusa16.mtx])
AC_CONFIG_LINKS([Matrix/Tina_AskCal.mtx:Matrix/Tina_AskCal.mtx])
AC_CONFIG_LINKS([Matrix/Tina_AskCal_perm.mtx:Matrix/Tina_AskCal_perm.mtx])
AC_CONFIG_LINKS([Matrix/a0.mtx:Matrix/a0.mtx])
AC_CONFIG_LINKS([Matrix/a04.mtx:Matrix/a04.mtx])
AC_CONFIG_LINKS([Matrix/a1.mtx:Matrix/a1.mtx])
AC_CONFIG_LINKS([Matrix/a2.mtx:Matrix/a2.mtx])
AC_CONFIG_LINKS([Matrix/a4.mtx:Matrix/a4.mtx])
AC_CONFIG_LINKS([Matrix/arrow.mtx:Matrix/arrow.mtx])
AC_CONFIG_LINKS([Matrix/ash219.mtx:Matrix/ash219.mtx])
AC_CONFIG_LINKS([Matrix/b1_ss.mtx:Matrix/b1_ss.mtx])
AC_CONFIG_LINKS([Matrix/bcspwr01.mtx:Matrix/bcspwr01.mtx])
AC_CONFIG_LINKS([Matrix/bfwa62.mtx:Matrix/bfwa62.mtx])
AC_CONFIG_LINKS([Matrix/c2.mtx:Matrix/c2.mtx])
AC_CONFIG_LINKS([Matrix/c32.mtx:Matrix/c32.mtx])
AC_CONFIG_LINKS([Matrix/lfat5b.mtx:Matrix/lfat5b.mtx])
AC_CONFIG_LINKS([Matrix/lp_share1b.mtx:Matrix/lp_share1b.mtx])
AC_CONFIG_LINKS([Matrix/lpi_galenet.mtx:Matrix/lpi_galenet.mtx])
AC_CONFIG_LINKS([Matrix/lpi_itest6.mtx:Matrix/lpi_itest6.mtx])
AC_CONFIG_LINKS([Matrix/r2.mtx:Matrix/r2.mtx])
AC_CONFIG_LINKS([Matrix/s32.mtx:Matrix/s32.mtx])
AC_CONFIG_LINKS([Matrix/west0067.mtx:Matrix/west0067.mtx])
AC_OUTPUT
