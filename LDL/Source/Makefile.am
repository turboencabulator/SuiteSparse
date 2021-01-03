AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

LDLSRC = \
	ldl.c

lib_LTLIBRARIES = libldl.la
noinst_LTLIBRARIES = libldli.la libldll.la

libldli_la_SOURCES = $(LDLSRC)
libldli_la_LIBADD = $(CODE_COVERAGE_LIBS)
libldli_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libldli_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libldll_la_SOURCES = $(LDLSRC)
libldll_la_LIBADD = $(CODE_COVERAGE_LIBS)
libldll_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DLDL_LONG
libldll_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libldl_la_SOURCES =
libldl_la_LIBADD = libldli.la libldll.la
libldl_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
