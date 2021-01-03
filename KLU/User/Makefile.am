AM_CPPFLAGS = -I$(top_srcdir)/Include $(AMD_CFLAGS) $(COLAMD_CFLAGS) $(BTF_CFLAGS) $(CHOLMOD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = README.txt

if CHOLMOD
pkginclude_HEADERS = klu_cholmod.h

lib_LTLIBRARIES = libklu_cholmod.la
libklu_cholmod_la_SOURCES = klu_cholmod.c klu_l_cholmod.c
libklu_cholmod_la_LIBADD = $(CHOLMOD_LIBS) $(CODE_COVERAGE_LIBS)
libklu_cholmod_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libklu_cholmod_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)
libklu_cholmod_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
endif
