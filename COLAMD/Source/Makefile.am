AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

COLAMDSRC = \
	colamd.c

lib_LTLIBRARIES = libcolamd.la
noinst_LTLIBRARIES = libcolamdi.la libcolamdl.la

libcolamdi_la_SOURCES = $(COLAMDSRC)
libcolamdi_la_LIBADD = $(SUITESPARSECONFIG_LIBS) -lm $(CODE_COVERAGE_LIBS)
libcolamdi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libcolamdi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcolamdl_la_SOURCES = $(COLAMDSRC)
libcolamdl_la_LIBADD = $(SUITESPARSECONFIG_LIBS) -lm $(CODE_COVERAGE_LIBS)
libcolamdl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libcolamdl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcolamd_la_SOURCES =
libcolamd_la_LIBADD = libcolamdi.la libcolamdl.la
libcolamd_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
