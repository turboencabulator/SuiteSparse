AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	lesser.txt

CHECKSRC = \
	cholmod_check.c \
	cholmod_read.c \
	cholmod_write.c

noinst_LTLIBRARIES = \
	libchecki.la \
	libcheckl.la \
	libcheck.la

libchecki_la_SOURCES = $(CHECKSRC)
libchecki_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(CODE_COVERAGE_LIBS)
libchecki_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libchecki_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcheckl_la_SOURCES = $(CHECKSRC)
libcheckl_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(CODE_COVERAGE_LIBS)
libcheckl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libcheckl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcheck_la_SOURCES =
libcheck_la_LIBADD = libchecki.la libcheckl.la
