AM_CPPFLAGS = -I$(top_srcdir)/Include $(AMD_CFLAGS) $(COLAMD_CFLAGS) $(BTF_CFLAGS) $(CHOLMOD_CFLAGS)
LDADD = $(top_builddir)/Source/libklu.la

EXTRA_DIST = \
	klu_simple.out \
	kludemo.out

# Disable the .out implicit pattern rule.  Prevents GNU make from
# adding bogus dependencies for the .out files listed above.
%.out: %

check_PROGRAMS = klu_simple
TESTS = klu_simple
klu_simple_SOURCES = klu_simple.c

if CHOLMOD
check_PROGRAMS += kludemo kluldemo

kludemo_SOURCES = kludemo.c
kludemo_LDADD = $(LDADD) $(CHOLMOD_LIBS) $(POSIX_LIBS)

kluldemo_SOURCES = kluldemo.c
kluldemo_LDADD = $(LDADD) $(CHOLMOD_LIBS) $(POSIX_LIBS)

MATRICES = \
	$(top_srcdir)/Matrix/1c.mtx \
	$(top_srcdir)/Matrix/arrowc.mtx \
	$(top_srcdir)/Matrix/arrow.mtx \
	$(top_srcdir)/Matrix/impcol_a.mtx \
	$(top_srcdir)/Matrix/w156.mtx \
	$(top_srcdir)/Matrix/ctina.mtx

check-local: kludemo kluldemo $(MATRICES)
	-./kludemo < $(top_srcdir)/Matrix/1c.mtx
	-./kludemo < $(top_srcdir)/Matrix/arrowc.mtx
	-./kludemo < $(top_srcdir)/Matrix/arrow.mtx
	-./kludemo < $(top_srcdir)/Matrix/impcol_a.mtx
	-./kludemo < $(top_srcdir)/Matrix/w156.mtx
	-./kludemo < $(top_srcdir)/Matrix/ctina.mtx
	-./kluldemo < $(top_srcdir)/Matrix/1c.mtx
	-./kluldemo < $(top_srcdir)/Matrix/arrowc.mtx
	-./kluldemo < $(top_srcdir)/Matrix/arrow.mtx
	-./kluldemo < $(top_srcdir)/Matrix/impcol_a.mtx
	-./kluldemo < $(top_srcdir)/Matrix/w156.mtx
	-./kluldemo < $(top_srcdir)/Matrix/ctina.mtx
endif
