AM_CFLAGS = $(OPENMP_CFLAGS)
AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	gpl.txt

SUPERNODALSRC = \
	cholmod_super_numeric.c \
	cholmod_super_solve.c \
	cholmod_super_symbolic.c

noinst_HEADERS = \
	t_cholmod_super_numeric.c \
	t_cholmod_super_solve.c

noinst_LTLIBRARIES = \
	libsupernodali.la \
	libsupernodall.la \
	libsupernodal.la

libsupernodali_la_SOURCES = $(SUPERNODALSRC)
libsupernodali_la_LIBADD = $(LAPACK_LIBS) $(BLAS_LIBS) $(SUITESPARSECONFIG_LIBS) $(CODE_COVERAGE_LIBS)
libsupernodali_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libsupernodali_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libsupernodall_la_SOURCES = $(SUPERNODALSRC)
libsupernodall_la_LIBADD = $(LAPACK_LIBS) $(BLAS_LIBS) $(SUITESPARSECONFIG_LIBS) $(CODE_COVERAGE_LIBS)
libsupernodall_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libsupernodall_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

if !TIMING
libsupernodali_la_CPPFLAGS += -DNTIMER
libsupernodall_la_CPPFLAGS += -DNTIMER
endif

libsupernodal_la_SOURCES =
libsupernodal_la_LIBADD = libsupernodali.la libsupernodall.la
