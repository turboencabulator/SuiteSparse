AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

RBIOSRC = \
	RBio.c

lib_LTLIBRARIES = librbio.la
noinst_LTLIBRARIES = librbioi.la librbiol.la

librbioi_la_SOURCES = $(RBIOSRC)
librbioi_la_LIBADD = $(SUITESPARSECONFIG_LIBS)
librbioi_la_CPPFLAGS = $(AM_CPPFLAGS) -DINT
librbioi_la_CFLAGS = $(AM_CFLAGS)

librbiol_la_SOURCES = $(RBIOSRC)
librbiol_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(CODE_COVERAGE_LIBS)
librbiol_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
librbiol_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

librbio_la_SOURCES =
librbio_la_LIBADD = librbioi.la librbiol.la
librbio_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
