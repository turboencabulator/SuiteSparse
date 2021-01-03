AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	gpl.txt

MATRIXOPSSRC = \
	cholmod_drop.c \
	cholmod_horzcat.c \
	cholmod_norm.c \
	cholmod_scale.c \
	cholmod_sdmult.c \
	cholmod_ssmult.c \
	cholmod_submatrix.c \
	cholmod_symmetry.c \
	cholmod_vertcat.c

noinst_HEADERS = \
	t_cholmod_sdmult.c

noinst_LTLIBRARIES = \
	libmatrixopsi.la \
	libmatrixopsl.la \
	libmatrixops.la

libmatrixopsi_la_SOURCES = $(MATRIXOPSSRC)
libmatrixopsi_la_LIBADD = $(SUITESPARSECONFIG_LIBS) -lm $(CODE_COVERAGE_LIBS)
libmatrixopsi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libmatrixopsi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libmatrixopsl_la_SOURCES = $(MATRIXOPSSRC)
libmatrixopsl_la_LIBADD = $(SUITESPARSECONFIG_LIBS) -lm $(CODE_COVERAGE_LIBS)
libmatrixopsl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libmatrixopsl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libmatrixops_la_SOURCES =
libmatrixops_la_LIBADD = libmatrixopsi.la libmatrixopsl.la
