AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

CCOLAMDSRC = \
	ccolamd.c

lib_LTLIBRARIES = libccolamd.la
noinst_LTLIBRARIES = libccolamdl.la libccolamdi.la

libccolamdi_la_SOURCES = $(CCOLAMDSRC)
libccolamdi_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libccolamdi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libccolamdi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libccolamdl_la_SOURCES = $(CCOLAMDSRC)
libccolamdl_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libccolamdl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libccolamdl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libccolamd_la_SOURCES =
libccolamd_la_LIBADD = libccolamdi.la libccolamdl.la
libccolamd_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
