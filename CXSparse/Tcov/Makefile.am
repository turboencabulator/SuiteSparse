AM_CPPFLAGS = -I$(top_srcdir)/Include -I$(top_srcdir)/Demo $(SUITESPARSECONFIG_CFLAGS)
LDADD = $(top_builddir)/Source/libcxsparse.la

EXTRA_DIST = \
	README.txt

dist_noinst_DATA = \
	czero \
	nil \
	zero

if CODE_COVERAGE_ENABLED
check_PROGRAMS = \
	cstcov_di_test \
	cstcov_dl_test \
	cstcov_ci_test \
	cstcov_cl_test

cstcov_di_test_SOURCES = cstcov_test.c
cstcov_di_test_LDADD = $(top_builddir)/Demo/libcs_di_demo.la $(LDADD)

cstcov_dl_test_SOURCES = cstcov_test.c
cstcov_dl_test_LDADD = $(top_builddir)/Demo/libcs_dl_demo.la $(LDADD)
cstcov_dl_test_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG

cstcov_ci_test_SOURCES = cstcov_test.c
cstcov_ci_test_LDADD = $(top_builddir)/Demo/libcs_ci_demo.la $(LDADD)
cstcov_ci_test_CPPFLAGS = $(AM_CPPFLAGS) -DCS_COMPLEX

cstcov_cl_test_SOURCES = cstcov_test.c
cstcov_cl_test_LDADD = $(top_builddir)/Demo/libcs_cl_demo.la $(LDADD)
cstcov_cl_test_CPPFLAGS = $(AM_CPPFLAGS) -DCS_LONG -DCS_COMPLEX

MATRICES = \
	$(top_srcdir)/Tcov/nil \
	$(top_srcdir)/Tcov/zero \
	$(top_srcdir)/Matrix/ash219 \
	$(top_srcdir)/Matrix/bcsstk01 \
	$(top_srcdir)/Matrix/fs_183_1 \
	$(top_srcdir)/Matrix/lp_afiro \
	$(top_srcdir)/Matrix/mhd1280b \
	$(top_srcdir)/Matrix/neumann \
	$(top_srcdir)/Matrix/qc324 \
	$(top_srcdir)/Matrix/t1 \
	$(top_srcdir)/Matrix/t2 \
	$(top_srcdir)/Matrix/west0067 \
	$(top_srcdir)/Matrix/young1c

check-local: $(check_PROGRAMS) $(MATRICES)
	-./cstcov_di_test $(top_srcdir)/Tcov/nil > test_di_nil.out
	-./cstcov_di_test $(top_srcdir)/Tcov/zero > test_di_zero.out
	-./cstcov_di_test $(top_srcdir)/Matrix/t1 > test_di_t1.out
	-./cstcov_di_test $(top_srcdir)/Matrix/bcsstk01 > test_di_k1.out
	-./cstcov_di_test $(top_srcdir)/Matrix/fs_183_1 > test_di_fs.out
	-./cstcov_di_test $(top_srcdir)/Matrix/west0067 > test_di_we.out
	-./cstcov_di_test $(top_srcdir)/Matrix/ash219 > test_di_ash.out
	-./cstcov_di_test $(top_srcdir)/Matrix/lp_afiro > test_di_afiro.out
	-./cstcov_dl_test $(top_srcdir)/Tcov/nil > test_dl_nil.out
	-./cstcov_dl_test $(top_srcdir)/Tcov/zero > test_dl_zero.out
	-./cstcov_dl_test $(top_srcdir)/Matrix/t1 > test_dl_t1.out
	-./cstcov_dl_test $(top_srcdir)/Matrix/bcsstk01 > test_dl_k1.out
	-./cstcov_dl_test $(top_srcdir)/Matrix/fs_183_1 > test_dl_fs.out
	-./cstcov_dl_test $(top_srcdir)/Matrix/west0067 > test_dl_we.out
	-./cstcov_dl_test $(top_srcdir)/Matrix/ash219 > test_dl_ash.out
	-./cstcov_dl_test $(top_srcdir)/Matrix/lp_afiro > test_dl_afiro.out
	-./cstcov_ci_test $(top_srcdir)/Matrix/t2 > test_ci_t2.out
	-./cstcov_ci_test $(top_srcdir)/Matrix/young1c > test_ci_young1c.out
	-./cstcov_ci_test $(top_srcdir)/Matrix/qc324 > test_ci_qc324.out
	-./cstcov_ci_test $(top_srcdir)/Matrix/neumann > test_ci_neumann.out
	-./cstcov_ci_test $(top_srcdir)/Matrix/mhd1280b > test_ci_mhd1280b.out
	-./cstcov_cl_test $(top_srcdir)/Matrix/t2 > test_cl_t2.out
	-./cstcov_cl_test $(top_srcdir)/Matrix/young1c > test_cl_young1c.out
	-./cstcov_cl_test $(top_srcdir)/Matrix/qc324 > test_cl_qc324.out
	-./cstcov_cl_test $(top_srcdir)/Matrix/neumann > test_cl_neumann.out
	-./cstcov_cl_test $(top_srcdir)/Matrix/mhd1280b > test_cl_mhd1280b.out
endif

CLEANFILES = *.out
