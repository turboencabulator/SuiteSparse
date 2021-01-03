AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	lesser.txt

CORESRC = \
	cholmod_aat.c \
	cholmod_add.c \
	cholmod_band.c \
	cholmod_change_factor.c \
	cholmod_common.c \
	cholmod_complex.c \
	cholmod_copy.c \
	cholmod_dense.c \
	cholmod_error.c \
	cholmod_factor.c \
	cholmod_memory.c \
	cholmod_sparse.c \
	cholmod_transpose.c \
	cholmod_triplet.c \
	cholmod_version.c

noinst_HEADERS = \
	t_cholmod_change_factor.c \
	t_cholmod_dense.c \
	t_cholmod_transpose.c \
	t_cholmod_triplet.c

noinst_LTLIBRARIES = \
	libcorei.la \
	libcorel.la \
	libcore.la

libcorei_la_SOURCES = $(CORESRC)
libcorei_la_LIBADD = $(SUITESPARSECONFIG_LIBS) -lm $(CODE_COVERAGE_LIBS)
libcorei_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libcorei_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcorel_la_SOURCES = $(CORESRC)
libcorel_la_LIBADD = $(SUITESPARSECONFIG_LIBS) -lm $(CODE_COVERAGE_LIBS)
libcorel_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libcorel_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcore_la_SOURCES =
libcore_la_LIBADD = libcorei.la libcorel.la
