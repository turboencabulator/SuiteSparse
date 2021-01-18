AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	gpl.txt

MODIFYSRC = \
	cholmod_rowadd.c \
	cholmod_rowdel.c \
	cholmod_updown.c

noinst_HEADERS = \
	t_cholmod_updown.c \
	t_cholmod_updown_numkr.c

noinst_LTLIBRARIES = \
	libmodifyi.la \
	libmodifyl.la \
	libmodify.la

libmodifyi_la_SOURCES = $(MODIFYSRC)
libmodifyi_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libmodifyi_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libmodifyi_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libmodifyl_la_SOURCES = $(MODIFYSRC)
libmodifyl_la_LIBADD = $(SUITESPARSECONFIG_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libmodifyl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DDLONG
libmodifyl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libmodify_la_SOURCES =
libmodify_la_LIBADD = libmodifyi.la libmodifyl.la
