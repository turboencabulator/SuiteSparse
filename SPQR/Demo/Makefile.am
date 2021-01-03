AM_CPPFLAGS = -I$(top_srcdir)/Include $(CHOLMOD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	README.txt \
	qrdemo_out.txt \
	qrdemoc_out.txt

check_PROGRAMS = \
	qrsimple \
	qrsimplec \
	qrdemo \
	qrdemoc

qrsimple_SOURCES = qrsimple.cpp
qrsimple_LDADD = $(top_builddir)/Source/libspqr.la $(CHOLMOD_LIBS)

qrsimplec_SOURCES = qrsimplec.c
qrsimplec_LDADD = $(top_builddir)/Source/libspqr.la $(CHOLMOD_LIBS)

qrdemo_SOURCES = qrdemo.cpp
qrdemo_LDADD = $(top_builddir)/Source/libspqr.la $(CHOLMOD_LIBS)

qrdemoc_SOURCES = qrdemoc.c
qrdemoc_LDADD = $(top_builddir)/Source/libspqr.la $(CHOLMOD_LIBS)

MATRICES = \
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
	$(top_srcdir)/Matrix/west0067.mtx \
	$(top_srcdir)/Matrix/young1c.mtx \
	$(top_srcdir)/Matrix/lp_e226_transposed.mtx

check-local: $(check_PROGRAMS) $(MATRICES)
	-./qrsimple < $(top_srcdir)/Matrix/ash219.mtx
	-./qrsimplec < $(top_srcdir)/Matrix/ash219.mtx
	-./qrsimple < $(top_srcdir)/Matrix/west0067.mtx
	-./qrsimplec < $(top_srcdir)/Matrix/west0067.mtx
	-./qrdemo < $(top_srcdir)/Matrix/a2.mtx
	-./qrdemo < $(top_srcdir)/Matrix/r2.mtx
	-./qrdemo < $(top_srcdir)/Matrix/a04.mtx
	-./qrdemo < $(top_srcdir)/Matrix/a2.mtx
	-./qrdemo < $(top_srcdir)/Matrix/west0067.mtx
	-./qrdemo < $(top_srcdir)/Matrix/c2.mtx
	-./qrdemo < $(top_srcdir)/Matrix/a0.mtx
	-./qrdemo < $(top_srcdir)/Matrix/lfat5b.mtx
	-./qrdemo < $(top_srcdir)/Matrix/bfwa62.mtx
	-./qrdemo < $(top_srcdir)/Matrix/LFAT5.mtx
	-./qrdemo < $(top_srcdir)/Matrix/b1_ss.mtx
	-./qrdemo < $(top_srcdir)/Matrix/bcspwr01.mtx
	-./qrdemo < $(top_srcdir)/Matrix/lpi_galenet.mtx
	-./qrdemo < $(top_srcdir)/Matrix/lpi_itest6.mtx
	-./qrdemo < $(top_srcdir)/Matrix/ash219.mtx
	-./qrdemo < $(top_srcdir)/Matrix/a4.mtx
	-./qrdemo < $(top_srcdir)/Matrix/s32.mtx
	-./qrdemo < $(top_srcdir)/Matrix/c32.mtx
	-./qrdemo < $(top_srcdir)/Matrix/lp_share1b.mtx
	-./qrdemo < $(top_srcdir)/Matrix/a1.mtx
	-./qrdemo < $(top_srcdir)/Matrix/GD06_theory.mtx
	-./qrdemo < $(top_srcdir)/Matrix/GD01_b.mtx
	-./qrdemo < $(top_srcdir)/Matrix/Tina_AskCal_perm.mtx
	-./qrdemo < $(top_srcdir)/Matrix/Tina_AskCal.mtx
	-./qrdemo < $(top_srcdir)/Matrix/GD98_a.mtx
	-./qrdemo < $(top_srcdir)/Matrix/Ragusa16.mtx
	-./qrdemo < $(top_srcdir)/Matrix/young1c.mtx
	-./qrdemo < $(top_srcdir)/Matrix/lp_e226_transposed.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/a2.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/r2.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/a04.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/a2.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/west0067.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/c2.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/a0.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/lfat5b.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/bfwa62.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/LFAT5.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/b1_ss.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/bcspwr01.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/lpi_galenet.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/lpi_itest6.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/ash219.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/a4.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/s32.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/c32.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/lp_share1b.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/a1.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/GD06_theory.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/GD01_b.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/Tina_AskCal_perm.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/Tina_AskCal.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/GD98_a.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/Ragusa16.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/young1c.mtx
	-./qrdemoc < $(top_srcdir)/Matrix/lp_e226_transposed.mtx
