ACLOCAL_AMFLAGS = -I m4

SUBDIRS = xerbla

EXTRA_DIST = README.txt

CODE_COVERAGE_BRANCH_COVERAGE = 1
@CODE_COVERAGE_RULES@

# Octave doesn't find SuiteSparse_config.h if it's placed in a non-default search path.
# Don't put it in a subdirectory for now.  Update suitesparseconfig.pc.in if this changes.
#pkginclude_HEADERS = SuiteSparse_config.h
include_HEADERS = SuiteSparse_config.h

pkgconfig_DATA = suitesparseconfig.pc

lib_LTLIBRARIES = libsuitesparseconfig.la
libsuitesparseconfig_la_SOURCES = SuiteSparse_config.c
libsuitesparseconfig_la_LIBADD = $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libsuitesparseconfig_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libsuitesparseconfig_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)
libsuitesparseconfig_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
