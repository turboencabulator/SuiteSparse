AM_CPPFLAGS = -I$(top_srcdir)/Include

EXTRA_DIST = \
	README.txt

CSPARSESRC = \
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
CSPARSESRC += \
	cs_malloc.c
else
CSPARSESRC += \
	$(top_srcdir)/Tcov/cstcov_malloc_test.c \
	$(top_srcdir)/Tcov/cstcov_malloc_test.h
endif

lib_LTLIBRARIES = libcsparse.la
libcsparse_la_SOURCES = $(CSPARSESRC)
libcsparse_la_LIBADD = $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libcsparse_la_CPPFLAGS = $(AM_CPPFLAGS) $(CODE_COVERAGE_CPPFLAGS)
libcsparse_la_CFLAGS = $(AM_CFLAGS) $(CODE_COVERAGE_CFLAGS)
libcsparse_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
