AM_CPPFLAGS = -I$(top_srcdir)/Include -I$(top_srcdir)/Source $(AMD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	README.txt

dist_noinst_DATA = \
	badnum.umf \
	badnum2.umf \
	badsym.umf \
	badsym2.umf \
	TestMat/S_d2q06c \
	TestMat/adlittle \
	TestMat/arc130 \
	TestMat/cage3 \
	TestMat/d_dyn \
	TestMat/galenet \
	TestMat/matrix1 \
	TestMat/matrix2 \
	TestMat/matrix3 \
	TestMat/matrix4 \
	TestMat/matrix5 \
	TestMat/matrix6 \
	TestMat/matrix7 \
	TestMat/matrix8 \
	TestMat/matrix10 \
	TestMat/matrix11 \
	TestMat/matrix12 \
	TestMat/matrix13 \
	TestMat/matrix14 \
	TestMat/matrix15 \
	TestMat/matrix16 \
	TestMat/matrix17 \
	TestMat/matrix18 \
	TestMat/matrix19 \
	TestMat/matrix20 \
	TestMat/matrix21 \
	TestMat/matrix22 \
	TestMat/matrix23 \
	TestMat/matrix24 \
	TestMat/matrix25 \
	TestMat/matrix26 \
	TestMat/matrix27 \
	TestMat/matrix28 \
	TestMat/matrix29 \
	TestMat/matrix30 \
	TestMat/nug07 \
	TestMat/shl0

if CODE_COVERAGE_ENABLED
# TODO: Support the various flag combinations in the Make.# files.
# Probably requires copying them to Source/Makefile.am and rebuilding all.
AM_CPPFLAGS += -DTESTING

check_PROGRAMS = \
	ut_di \
	ut_dl \
	ut_zi \
	ut_zl

ut_di_SOURCES = ut.c
ut_di_LDADD = $(top_builddir)/Source/libumfpack.la $(AMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS)
ut_di_CPPFLAGS = $(AM_CPPFLAGS) -DDINT

ut_dl_SOURCES = ut.c
ut_dl_LDADD = $(top_builddir)/Source/libumfpack.la $(AMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS)
ut_dl_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG

ut_zi_SOURCES = ut.c
ut_zi_LDADD = $(top_builddir)/Source/libumfpack.la $(AMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS)
ut_zi_CPPFLAGS = $(AM_CPPFLAGS) -DZINT

ut_zl_SOURCES = ut.c
ut_zl_LDADD = $(top_builddir)/Source/libumfpack.la $(AMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS)
ut_zl_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG

check-local: $(check_PROGRAMS)
	./ut_di > ut_di.out
	./ut_dl > ut_dl.out
	./ut_zi > ut_zi.out
	./ut_zl > ut_zl.out
endif

CLEANFILES = A500 n.umf numeric.umf s.umf symbolic.umf debug.amd debug.umf *.out
