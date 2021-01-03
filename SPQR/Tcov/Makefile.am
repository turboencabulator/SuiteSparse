AM_CPPFLAGS = -I$(top_srcdir)/Include $(CHOLMOD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	README.txt

dist_noinst_DATA = \
	matrix1.txt \
	matrixlist.txt

if CODE_COVERAGE_ENABLED
check_PROGRAMS = \
	qrtest

qrtest_SOURCES = qrtestc.c qrtest.cpp
qrtest_LDADD = $(top_builddir)/Source/libspqr.la $(CHOLMOD_LIBS) $(SUITESPARSECONFIG_LIBS)

MATRICES = \
	$(srcdir)/matrix1.txt \
	$(srcdir)/matrixlist.txt \
	$(top_srcdir)/Matrix/GD01_b.mtx \
	$(top_srcdir)/Matrix/GD06_theory.mtx \
	$(top_srcdir)/Matrix/GD98_a.mtx \
	$(top_srcdir)/Matrix/LFAT5.mtx \
	$(top_srcdir)/Matrix/Ragusa16.mtx \
	$(top_srcdir)/Matrix/Tina_AskCal.mtx \
	$(top_srcdir)/Matrix/Tina_AskCal_perm.mtx \
	$(top_srcdir)/Matrix/a0.mtx \
	$(top_srcdir)/Matrix/a04.mtx \
	$(top_srcdir)/Matrix/a1.mtx \
	$(top_srcdir)/Matrix/a2.mtx \
	$(top_srcdir)/Matrix/a4.mtx \
	$(top_srcdir)/Matrix/arrow.mtx \
	$(top_srcdir)/Matrix/ash219.mtx \
	$(top_srcdir)/Matrix/b1_ss.mtx \
	$(top_srcdir)/Matrix/bcspwr01.mtx \
	$(top_srcdir)/Matrix/bfwa62.mtx \
	$(top_srcdir)/Matrix/c2.mtx \
	$(top_srcdir)/Matrix/c32.mtx \
	$(top_srcdir)/Matrix/lfat5b.mtx \
	$(top_srcdir)/Matrix/lp_share1b.mtx \
	$(top_srcdir)/Matrix/lpi_galenet.mtx \
	$(top_srcdir)/Matrix/lpi_itest6.mtx \
	$(top_srcdir)/Matrix/r2.mtx \
	$(top_srcdir)/Matrix/s32.mtx \
	$(top_srcdir)/Matrix/west0067.mtx

check-local: $(check_PROGRAMS) $(MATRICES)
	./qrtest $(srcdir)/matrixlist.txt > qrtest_out.txt
	./qrtest $(srcdir)/matrix1.txt > qrtest_out1.txt
endif

CLEANFILES = qrtest_out.txt qrtest_out1.txt
