AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

CS_SOURCE = \
	cs_add.c \
	cs_amd.c \
	cs_chol.c \
	cs_cholsol.c \
	cs_compress.c \
	cs_counts.c \
	cs_cumsum.c \
	cs_dfs.c \
	cs_dmperm.c \
	cs_droptol.c \
	cs_dropzeros.c \
	cs_dupl.c \
	cs_entry.c \
	cs_ereach.c \
	cs_etree.c \
	cs_fkeep.c \
	cs_gaxpy.c \
	cs_happly.c \
	cs_house.c \
	cs_ipvec.c \
	cs_leaf.c \
	cs_load.c \
	cs_lsolve.c \
	cs_ltsolve.c \
	cs_lu.c \
	cs_lusol.c \
	cs_maxtrans.c \
	cs_multiply.c \
	cs_norm.c \
	cs_permute.c \
	cs_pinv.c \
	cs_post.c \
	cs_print.c \
	cs_pvec.c \
	cs_qr.c \
	cs_qrsol.c \
	cs_randperm.c \
	cs_reach.c \
	cs_scatter.c \
	cs_scc.c \
	cs_schol.c \
	cs_spsolve.c \
	cs_sqr.c \
	cs_symperm.c \
	cs_tdfs.c \
	cs_transpose.c \
	cs_updown.c \
	cs_usolve.c \
	cs_util.c \
	cs_utsolve.c

if !CODE_COVERAGE_ENABLED
CS_SOURCE += \
	cs_malloc.c
else
CS_SOURCE += \
	$(top_srcdir)/Tcov/cstcov_malloc_test.c \
	$(top_srcdir)/Tcov/cstcov_malloc_test.h
endif

lib_LTLIBRARIES = \
	libcxsparse.la

noinst_LTLIBRARIES = \
	libcxsparse_di.la \
	libcxsparse_dl.la \
	libcxsparse_ci.la \
	libcxsparse_cl.la \
	libcs_convert.la

libcxsparse_di_la_SOURCES = $(CS_SOURCE)
libcxsparse_di_la_LIBADD = -lm $(CODE_COVERAGE_LIBS)
libcxsparse_di_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libcxsparse_di_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcxsparse_dl_la_SOURCES = $(CS_SOURCE)
libcxsparse_dl_la_LIBADD = -lm $(CODE_COVERAGE_LIBS)
libcxsparse_dl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DCS_LONG
libcxsparse_dl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcxsparse_ci_la_SOURCES = $(CS_SOURCE)
libcxsparse_ci_la_LIBADD = -lm $(CODE_COVERAGE_LIBS)
libcxsparse_ci_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DCS_COMPLEX
libcxsparse_ci_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcxsparse_cl_la_SOURCES = $(CS_SOURCE)
libcxsparse_cl_la_LIBADD = -lm $(CODE_COVERAGE_LIBS)
libcxsparse_cl_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS) -DCS_LONG -DCS_COMPLEX
libcxsparse_cl_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcs_convert_la_SOURCES = cs_convert.c
libcs_convert_la_LIBADD = $(CODE_COVERAGE_LIBS)
libcs_convert_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libcs_convert_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)

libcxsparse_la_SOURCES =
libcxsparse_la_LIBADD = libcxsparse_di.la libcxsparse_dl.la libcxsparse_ci.la libcxsparse_cl.la libcs_convert.la
libcxsparse_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
