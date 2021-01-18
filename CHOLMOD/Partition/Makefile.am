AM_CPPFLAGS = -I$(top_srcdir)/Include $(METIS_CFLAGS) $(CCOLAMD_CFLAGS) $(CAMD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	lesser.txt

PARTITIONSRC = \
	cholmod_camd.c \
	cholmod_ccolamd.c \
	cholmod_csymamd.c
METISSRC = \
	cholmod_metis.c \
	cholmod_nesdis.c

noinst_LTLIBRARIES = \
	libpartitioni.la \
	libpartitionl.la \
	libpartition.la

libpartitioni_la_SOURCES = $(PARTITIONSRC)
libpartitioni_la_LIBADD = $(METIS_LIBS) $(CCOLAMD_LIBS) $(CAMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libpartitioni_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libpartitioni_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libpartitionl_la_SOURCES = $(PARTITIONSRC)
libpartitionl_la_LIBADD = $(METIS_LIBS) $(CCOLAMD_LIBS) $(CAMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libpartitionl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libpartitionl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

if MOD_PARTITION_METIS
libpartitioni_la_SOURCES += $(METISSRC)
libpartitionl_la_SOURCES += $(METISSRC)
endif

libpartition_la_SOURCES =
libpartition_la_LIBADD = libpartitioni.la libpartitionl.la
