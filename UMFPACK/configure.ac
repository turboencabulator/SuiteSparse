#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([UMFPACK],[5.7.9],[https://github.com/DrTimothyAldenDavis/SuiteSparse],[umfpack],[http://www.suitesparse.com/])
AC_CONFIG_SRCDIR([Source/umfpack_solve.c])
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

AC_ARG_WITH([cholmod],
	[AS_HELP_STRING(
		[--without-cholmod],
		[do not use CHOLMOD for ordering methods])],
	[],
	[AS_VAR_SET([with_cholmod], [yes])])

# Checks for libraries.
AC_DEFUN([SS_SEARCH_LIBS],
	[AC_SEARCH_LIBS([$1], [$2],
		[test "$ac_res" = "none required" || $3="$ac_res $$3"],
		[AC_MSG_ERROR([cannot find library containing $1])],
		[$4])])

AS_VAR_SET([LIBS_SAVED], [$LIBS])
AS_VAR_SET([POSIX_LIBS])
SS_SEARCH_LIBS([pow], [m], [POSIX_LIBS])
SS_SEARCH_LIBS([sqrt], [m], [POSIX_LIBS])
AC_SUBST([POSIX_LIBS])
AS_VAR_SET([LIBS], [$LIBS_SAVED])

AX_BLAS(
	[],
	[AC_MSG_ERROR([cannot find BLAS])])

PKG_CHECK_MODULES([SUITESPARSECONFIG], [suitesparseconfig])
PKG_CHECK_MODULES([AMD], [amd])
AS_VAR_SET([UMFPACK_REQUIRES], ["suitesparseconfig amd"])

AS_IF([test "x$with_cholmod" = "xyes"], [
	PKG_CHECK_MODULES([CHOLMOD], [cholmod])
	AS_VAR_APPEND([UMFPACK_REQUIRES], [" cholmod"])
])

# Checks for header files.
AC_CHECK_HEADERS([float.h stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC

AC_MSG_CHECKING([whether to use CHOLMOD for ordering methods])
AC_MSG_RESULT([$with_cholmod])
AM_CONDITIONAL([CHOLMOD], [test "x$with_cholmod" = "xyes"])

AC_SUBST([UMFPACK_REQUIRES])

m4_ifdef([PKG_INSTALLDIR], [PKG_INSTALLDIR], [AC_SUBST([pkgconfigdir], [${libdir}/pkgconfig])])
AC_CONFIG_FILES([
	umfpack.pc
	Makefile
	Demo/Makefile
	Doc/Makefile
	Include/Makefile
	Source/Makefile
	Tcov/Makefile
])
AC_CONFIG_LINKS([Tcov/badnum.umf:Tcov/badnum.umf])
AC_CONFIG_LINKS([Tcov/badnum2.umf:Tcov/badnum2.umf])
AC_CONFIG_LINKS([Tcov/badsym.umf:Tcov/badsym.umf])
AC_CONFIG_LINKS([Tcov/badsym2.umf:Tcov/badsym2.umf])
#AC_CONFIG_LINKS([Tcov/TestMat:Tcov/TestMat])  # Can't link an entire directory?
AC_CONFIG_LINKS([Tcov/TestMat/S_d2q06c:Tcov/TestMat/S_d2q06c])
AC_CONFIG_LINKS([Tcov/TestMat/adlittle:Tcov/TestMat/adlittle])
AC_CONFIG_LINKS([Tcov/TestMat/arc130:Tcov/TestMat/arc130])
AC_CONFIG_LINKS([Tcov/TestMat/cage3:Tcov/TestMat/cage3])
AC_CONFIG_LINKS([Tcov/TestMat/d_dyn:Tcov/TestMat/d_dyn])
AC_CONFIG_LINKS([Tcov/TestMat/galenet:Tcov/TestMat/galenet])
AC_CONFIG_LINKS([Tcov/TestMat/matrix1:Tcov/TestMat/matrix1])
AC_CONFIG_LINKS([Tcov/TestMat/matrix2:Tcov/TestMat/matrix2])
AC_CONFIG_LINKS([Tcov/TestMat/matrix3:Tcov/TestMat/matrix3])
AC_CONFIG_LINKS([Tcov/TestMat/matrix4:Tcov/TestMat/matrix4])
AC_CONFIG_LINKS([Tcov/TestMat/matrix5:Tcov/TestMat/matrix5])
AC_CONFIG_LINKS([Tcov/TestMat/matrix6:Tcov/TestMat/matrix6])
AC_CONFIG_LINKS([Tcov/TestMat/matrix7:Tcov/TestMat/matrix7])
AC_CONFIG_LINKS([Tcov/TestMat/matrix8:Tcov/TestMat/matrix8])
AC_CONFIG_LINKS([Tcov/TestMat/matrix10:Tcov/TestMat/matrix10])
AC_CONFIG_LINKS([Tcov/TestMat/matrix11:Tcov/TestMat/matrix11])
AC_CONFIG_LINKS([Tcov/TestMat/matrix12:Tcov/TestMat/matrix12])
AC_CONFIG_LINKS([Tcov/TestMat/matrix13:Tcov/TestMat/matrix13])
AC_CONFIG_LINKS([Tcov/TestMat/matrix14:Tcov/TestMat/matrix14])
AC_CONFIG_LINKS([Tcov/TestMat/matrix15:Tcov/TestMat/matrix15])
AC_CONFIG_LINKS([Tcov/TestMat/matrix16:Tcov/TestMat/matrix16])
AC_CONFIG_LINKS([Tcov/TestMat/matrix17:Tcov/TestMat/matrix17])
AC_CONFIG_LINKS([Tcov/TestMat/matrix18:Tcov/TestMat/matrix18])
AC_CONFIG_LINKS([Tcov/TestMat/matrix19:Tcov/TestMat/matrix19])
AC_CONFIG_LINKS([Tcov/TestMat/matrix20:Tcov/TestMat/matrix20])
AC_CONFIG_LINKS([Tcov/TestMat/matrix21:Tcov/TestMat/matrix21])
AC_CONFIG_LINKS([Tcov/TestMat/matrix22:Tcov/TestMat/matrix22])
AC_CONFIG_LINKS([Tcov/TestMat/matrix23:Tcov/TestMat/matrix23])
AC_CONFIG_LINKS([Tcov/TestMat/matrix24:Tcov/TestMat/matrix24])
AC_CONFIG_LINKS([Tcov/TestMat/matrix25:Tcov/TestMat/matrix25])
AC_CONFIG_LINKS([Tcov/TestMat/matrix26:Tcov/TestMat/matrix26])
AC_CONFIG_LINKS([Tcov/TestMat/matrix27:Tcov/TestMat/matrix27])
AC_CONFIG_LINKS([Tcov/TestMat/matrix28:Tcov/TestMat/matrix28])
AC_CONFIG_LINKS([Tcov/TestMat/matrix29:Tcov/TestMat/matrix29])
AC_CONFIG_LINKS([Tcov/TestMat/matrix30:Tcov/TestMat/matrix30])
AC_CONFIG_LINKS([Tcov/TestMat/nug07:Tcov/TestMat/nug07])
AC_CONFIG_LINKS([Tcov/TestMat/shl0:Tcov/TestMat/shl0])
AC_OUTPUT
