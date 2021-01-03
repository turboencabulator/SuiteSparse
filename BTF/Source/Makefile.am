AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

BTFSRC = \
	btf_maxtrans.c \
	btf_order.c \
	btf_strongcomp.c

lib_LTLIBRARIES = libbtf.la
noinst_LTLIBRARIES = libbtfi.la libbtfl.la

libbtfi_la_SOURCES = $(BTFSRC)
libbtfi_la_LIBADD = $(CODE_COVERAGE_LIBS)
libbtfi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libbtfi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libbtfl_la_SOURCES = $(BTFSRC)
libbtfl_la_LIBADD = $(CODE_COVERAGE_LIBS)
libbtfl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libbtfl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libbtf_la_SOURCES =
libbtf_la_LIBADD = libbtfi.la libbtfl.la
libbtf_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
