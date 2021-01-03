AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	README.txt \
	gpl.txt

dist_noinst_DATA = \
	Matrix/0.tri \
	Matrix/bcsstk01.tri \
	Matrix/bcsstk02.tri \
	Matrix/c.mtx \
	Matrix/c.tri \
	Matrix/can___24.mtx \
	Matrix/d.tri \
	Matrix/empty.tri \
	Matrix/lp_afiro.tri \
	Matrix/mangle1.mtx \
	Matrix/mangle2.mtx \
	Matrix/mangle3.mtx \
	Matrix/mangle4.mtx \
	Matrix/mangle5.tri \
	Matrix/mangle6.tri \
	Matrix/mangle7.tri \
	Matrix/mangle8.tri \
	Matrix/one.tri \
	Matrix/pts5ldd03.mtx \
	Matrix/up.tri

noinst_PROGRAMS = \
	reade \
	readhb \
	readhb2

reade_SOURCES = reade.f
readhb_SOURCES = readhb.f
readhb2_SOURCES = readhb2.f

if MOD_CHECK
if MOD_CHOLESKY

check_PROGRAMS = \
	cholmod_demo \
	cholmod_l_demo \
	cholmod_simple

cholmod_demo_SOURCES = cholmod_demo.c cholmod_demo.h
cholmod_demo_LDADD = $(top_builddir)/libcholmod.la $(SUITESPARSECONFIG_LIBS)

cholmod_l_demo_SOURCES = cholmod_l_demo.c cholmod_demo.h
cholmod_l_demo_LDADD = $(top_builddir)/libcholmod.la $(SUITESPARSECONFIG_LIBS)
cholmod_l_demo_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG

cholmod_simple_SOURCES = cholmod_simple.c
cholmod_simple_LDADD = $(top_builddir)/libcholmod.la

if !CODE_COVERAGE_ENABLED
MATRICES = \
	$(srcdir)/Matrix/bcsstk01.tri \
	$(srcdir)/Matrix/c.tri \
	$(srcdir)/Matrix/can___24.mtx \
	$(srcdir)/Matrix/lp_afiro.tri

check-local: $(check_PROGRAMS) $(MATRICES)
	./cholmod_demo   < $(srcdir)/Matrix/bcsstk01.tri
	./cholmod_l_demo < $(srcdir)/Matrix/bcsstk01.tri
	./cholmod_demo   < $(srcdir)/Matrix/lp_afiro.tri
	./cholmod_l_demo < $(srcdir)/Matrix/lp_afiro.tri
	./cholmod_demo   < $(srcdir)/Matrix/can___24.mtx
	./cholmod_l_demo < $(srcdir)/Matrix/can___24.mtx
	./cholmod_demo   < $(srcdir)/Matrix/c.tri
	./cholmod_l_demo < $(srcdir)/Matrix/c.tri
	./cholmod_simple < $(srcdir)/Matrix/c.tri
	./cholmod_simple < $(srcdir)/Matrix/can___24.mtx
	./cholmod_simple < $(srcdir)/Matrix/bcsstk01.tri

else
MATRICES = \
	$(srcdir)/Matrix/0.tri \
	$(srcdir)/Matrix/bcsstk01.tri \
	$(srcdir)/Matrix/bcsstk02.tri \
	$(srcdir)/Matrix/c.mtx \
	$(srcdir)/Matrix/c.tri \
	$(srcdir)/Matrix/can___24.mtx \
	$(srcdir)/Matrix/d.tri \
	$(srcdir)/Matrix/lp_afiro.tri \
	$(srcdir)/Matrix/mangle1.mtx \
	$(srcdir)/Matrix/mangle2.mtx \
	$(srcdir)/Matrix/mangle3.mtx \
	$(srcdir)/Matrix/mangle4.mtx \
	$(srcdir)/Matrix/pts5ldd03.mtx \
	$(srcdir)/Matrix/up.tri \
	$(top_srcdir)/Tcov/Matrix/3_2 \
	$(top_srcdir)/Tcov/Matrix/c10 \
	$(top_srcdir)/Tcov/Matrix/c5lo

check-local: $(check_PROGRAMS) $(MATRICES)
	./cholmod_demo     $(srcdir)/Matrix/bcsstk01.tri  > demo_k1.out
	./cholmod_demo     $(srcdir)/Matrix/bcsstk02.tri  > demo_k2.out
	./cholmod_demo   < $(srcdir)/Matrix/lp_afiro.tri  > demo_afiro.out
	./cholmod_demo   < $(srcdir)/Matrix/can___24.mtx  > demo_can24.out
	./cholmod_demo   < $(srcdir)/Matrix/c.tri         > demo_c.out
	./cholmod_demo   < $(srcdir)/Matrix/d.tri         > demo_d.out
	./cholmod_demo   < $(srcdir)/Matrix/up.tri        > demo_up.out
	./cholmod_demo   < $(srcdir)/Matrix/c.mtx         > demo_c_mtx.out
	./cholmod_demo   < $(srcdir)/Matrix/0.tri         > demo_0.out
	./cholmod_demo   < $(top_srcdir)/Tcov/Matrix/3_2  > demo_3_2.out
	./cholmod_demo   < $(top_srcdir)/Tcov/Matrix/c5lo > demo_c5lo.out
	./cholmod_demo   < $(top_srcdir)/Tcov/Matrix/c10  > demo_c10.out
	./cholmod_demo     no_such_file                   > demo_no_such_file.out
	./cholmod_demo     $(srcdir)/Matrix/mangle1.mtx   > demo_mangle1.out
	./cholmod_demo     $(srcdir)/Matrix/mangle2.mtx   > demo_mangle2.out
	./cholmod_demo     $(srcdir)/Matrix/mangle3.mtx   > demo_mangle3.out
	./cholmod_demo     $(srcdir)/Matrix/mangle4.mtx   > demo_mangle4.out
	./cholmod_demo     $(srcdir)/Matrix/pts5ldd03.mtx > demo_pts5ldd03.out
	./cholmod_l_demo   $(srcdir)/Matrix/bcsstk01.tri  > ldemo_k1.out
	./cholmod_l_demo   $(srcdir)/Matrix/bcsstk02.tri  > ldemo_k2.out
	./cholmod_l_demo < $(srcdir)/Matrix/lp_afiro.tri  > ldemo_afiro.out
	./cholmod_l_demo < $(srcdir)/Matrix/can___24.mtx  > ldemo_can24.out
	./cholmod_l_demo < $(srcdir)/Matrix/c.tri         > ldemo_c.out
	./cholmod_l_demo   $(srcdir)/Matrix/c.tri 1       > ldemo_c_zomplex.out
	./cholmod_l_demo < $(srcdir)/Matrix/d.tri         > ldemo_d.out
	./cholmod_l_demo   $(srcdir)/Matrix/d.tri 1       > ldemo_d.out
	./cholmod_l_demo < $(srcdir)/Matrix/up.tri        > ldemo_up.out
	./cholmod_l_demo   $(srcdir)/Matrix/up.tri 1      > ldemo_up_zomplex.out
	./cholmod_l_demo < $(srcdir)/Matrix/c.mtx         > ldemo_c_mtx.out
	./cholmod_l_demo   $(srcdir)/Matrix/c.mtx 1       > ldemo_c_mtx_zomplex.out
	./cholmod_l_demo < $(srcdir)/Matrix/0.tri         > ldemo_0.out
	./cholmod_l_demo < $(top_srcdir)/Tcov/Matrix/3_2  > ldemo_3_2.out
	./cholmod_l_demo < $(top_srcdir)/Tcov/Matrix/c5lo > ldemo_c5lo.out
	./cholmod_l_demo < $(top_srcdir)/Tcov/Matrix/c10  > ldemo_c10.out
	./cholmod_l_demo   no_such_file                   > ldemo_no_such_file.out
	./cholmod_l_demo   $(srcdir)/Matrix/mangle1.mtx   > ldemo_mangle1.out
	./cholmod_l_demo   $(srcdir)/Matrix/mangle2.mtx   > ldemo_mangle2.out
	./cholmod_l_demo   $(srcdir)/Matrix/mangle3.mtx   > ldemo_mangle3.out
	./cholmod_l_demo   $(srcdir)/Matrix/mangle4.mtx   > ldemo_mangle4.out
	./cholmod_l_demo   $(srcdir)/Matrix/pts5ldd03.mtx > ldemo_pts5ldd03.out
endif

endif
endif

CLEANFILES = timelog.m *.out
