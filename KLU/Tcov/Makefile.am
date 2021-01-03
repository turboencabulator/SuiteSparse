AM_CPPFLAGS = -I$(top_srcdir)/Include -I$(top_srcdir)/User $(AMD_CFLAGS) $(COLAMD_CFLAGS) $(BTF_CFLAGS) $(CHOLMOD_CFLAGS)
LDADD = $(top_builddir)/Source/libklu.la $(top_builddir)/User/libklu_cholmod.la

EXTRA_DIST = \
	README.txt

if CODE_COVERAGE_ENABLED
check_PROGRAMS = \
	klutest \
	klultest

klutest_SOURCES = klutest.c
klutest_LDADD = $(LDADD) $(CHOLMOD_LIBS) $(SUITESPARSECONFIG_LIBS)

klultest_SOURCES = klutest.c
klultest_LDADD = $(LDADD) $(CHOLMOD_LIBS) $(SUITESPARSECONFIG_LIBS)
klultest_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG

MATRICES = \
	$(top_srcdir)/Matrix/1c.mtx \
	$(top_srcdir)/Matrix/GD99_cc.mtx \
	$(top_srcdir)/Matrix/arrow.mtx \
	$(top_srcdir)/Matrix/arrowc.mtx \
	$(top_srcdir)/Matrix/ctina.mtx \
	$(top_srcdir)/Matrix/impcol_a.mtx \
	$(top_srcdir)/Matrix/one.mtx \
	$(top_srcdir)/Matrix/onec.mtx \
	$(top_srcdir)/Matrix/two.mtx \
	$(top_srcdir)/Matrix/w156.mtx

check-local: $(check_PROGRAMS) $(MATRICES)
	./klultest < $(top_srcdir)/Matrix/impcol_a.mtx  > klultests.out
	./klultest < $(top_srcdir)/Matrix/GD99_cc.mtx  >> klultests.out
	./klultest < $(top_srcdir)/Matrix/two.mtx      >> klultests.out
	./klultest < $(top_srcdir)/Matrix/w156.mtx     >> klultests.out
	./klultest < $(top_srcdir)/Matrix/arrow.mtx    >> klultests.out
	./klultest < $(top_srcdir)/Matrix/arrowc.mtx   >> klultests.out
	./klultest < $(top_srcdir)/Matrix/onec.mtx     >> klultests.out
	./klultest < $(top_srcdir)/Matrix/one.mtx      >> klultests.out
	./klultest < $(top_srcdir)/Matrix/1c.mtx       >> klultests.out
	./klultest < $(top_srcdir)/Matrix/ctina.mtx    >> klultests.out
	./klutest < $(top_srcdir)/Matrix/impcol_a.mtx   > klutests.out
	./klutest < $(top_srcdir)/Matrix/GD99_cc.mtx   >> klutests.out
	./klutest < $(top_srcdir)/Matrix/two.mtx       >> klutests.out
	./klutest < $(top_srcdir)/Matrix/w156.mtx      >> klutests.out
	./klutest < $(top_srcdir)/Matrix/arrow.mtx     >> klutests.out
	./klutest < $(top_srcdir)/Matrix/arrowc.mtx    >> klutests.out
	./klutest < $(top_srcdir)/Matrix/onec.mtx      >> klutests.out
	./klutest < $(top_srcdir)/Matrix/one.mtx       >> klutests.out
	./klutest < $(top_srcdir)/Matrix/1c.mtx        >> klutests.out
	./klutest < $(top_srcdir)/Matrix/ctina.mtx     >> klutests.out
endif

CLEANFILES = *.out
