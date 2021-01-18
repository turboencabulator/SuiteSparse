AM_CPPFLAGS = -I$(top_srcdir)/Include $(COLAMD_CFLAGS) $(AMD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	lesser.txt

CHOLESKYSRC = \
	cholmod_amd.c \
	cholmod_analyze.c \
	cholmod_colamd.c \
	cholmod_etree.c \
	cholmod_factorize.c \
	cholmod_postorder.c \
	cholmod_rcond.c \
	cholmod_resymbol.c \
	cholmod_rowcolcounts.c \
	cholmod_rowfac.c \
	cholmod_solve.c \
	cholmod_spsolve.c

noinst_HEADERS = \
	t_cholmod_lsolve.c \
	t_cholmod_ltsolve.c \
	t_cholmod_rowfac.c \
	t_cholmod_solve.c

noinst_LTLIBRARIES = \
	libcholeskyi.la \
	libcholeskyl.la \
	libcholesky.la

libcholeskyi_la_SOURCES = $(CHOLESKYSRC)
libcholeskyi_la_LIBADD = $(COLAMD_LIBS) $(AMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libcholeskyi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libcholeskyi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcholeskyl_la_SOURCES = $(CHOLESKYSRC)
libcholeskyl_la_LIBADD = $(COLAMD_LIBS) $(AMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libcholeskyl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libcholeskyl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcholesky_la_SOURCES =
libcholesky_la_LIBADD = libcholeskyi.la libcholeskyl.la
