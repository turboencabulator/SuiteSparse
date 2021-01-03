AM_CPPFLAGS = -I$(top_srcdir)/Include $(SUITESPARSECONFIG_CFLAGS)

EXTRA_DIST = \
	README.txt \
	gpl.txt

dist_noinst_DATA = \
	comments.txt \
	Matrix/0 \
	Matrix/0_1 \
	Matrix/1_0 \
	Matrix/1e99 \
	Matrix/2.tri \
	Matrix/20lo \
	Matrix/2diag.tri \
	Matrix/2lo.tri \
	Matrix/2up.tri \
	Matrix/3_2 \
	Matrix/3b \
	Matrix/3by0.mtx \
	Matrix/3singular \
	Matrix/5by50 \
	Matrix/C9840 \
	Matrix/afiro \
	Matrix/c10 \
	Matrix/c30lo \
	Matrix/c30up \
	Matrix/c3singular \
	Matrix/c5lo \
	Matrix/c5up2 \
	Matrix/cha.mtx \
	Matrix/cpi \
	Matrix/crud1 \
	Matrix/crud2 \
	Matrix/cs.mtx \
	Matrix/csa.mtx \
	Matrix/cza \
	Matrix/cza.mtx \
	Matrix/diag \
	Matrix/ex5lo \
	Matrix/fullcha.mtx \
	Matrix/fullcrud.mtx \
	Matrix/fullcrud1.mtx \
	Matrix/fullcrud2.mtx \
	Matrix/fullcsa.mtx \
	Matrix/fullcza.mtx \
	Matrix/fullrsa.mtx \
	Matrix/fullrza.mtx \
	Matrix/galenet \
	Matrix/huge.tri \
	Matrix/ibm32 \
	Matrix/k01up \
	Matrix/one \
	Matrix/pi \
	Matrix/plskz362.mtx \
	Matrix/r5lo \
	Matrix/r5lo2 \
	Matrix/r5up \
	Matrix/r5up2 \
	Matrix/rza.mtx \
	Matrix/z10 \
	Matrix/z30lo \
	Matrix/z30up \
	Matrix/z3singular \
	Matrix/z5lo \
	Matrix/z5up \
	Matrix/z5up2 \
	Matrix/zero

TEST = \
	amdtest.c \
	aug.c \
	camdtest.c \
	cctest.c \
	cm.c \
	cm.h \
	ctest.c \
	huge.c \
	lpdemo.c \
	memory.c \
	null.c \
	null2.c \
	raw_factor.c \
	solve.c \
	test_ops.c \
	unpack.c

if MOD_CHECK
if MOD_CHOLESKY
if MOD_PARTITION
if MOD_MATRIXOPS
if MOD_MODIFY
if MOD_SUPERNODAL
if CODE_COVERAGE_ENABLED

check_PROGRAMS = \
	cm \
	cl \
	cmread \
	clread

cm_SOURCES = $(TEST)
cm_LDADD = $(top_builddir)/libcholmod.la $(COLAMD_LIBS) $(AMD_LIBS) $(CCOLAMD_LIBS) $(CAMD_LIBS) $(BLAS_LIBS) $(SUITESPARSECONFIG_LIBS)
cm_CPPFLAGS = $(AM_CPPFLAGS) $(COLAMD_CFLAGS) $(AMD_CFLAGS) $(CCOLAMD_CFLAGS) $(CAMD_CFLAGS)

cl_SOURCES = $(TEST)
cl_LDADD = $(top_builddir)/libcholmod.la $(COLAMD_LIBS) $(AMD_LIBS) $(CCOLAMD_LIBS) $(CAMD_LIBS) $(BLAS_LIBS) $(SUITESPARSECONFIG_LIBS)
cl_CPPFLAGS = $(AM_CPPFLAGS) $(COLAMD_CFLAGS) $(AMD_CFLAGS) $(CCOLAMD_CFLAGS) $(CAMD_CFLAGS) -DDLONG

cmread_SOURCES = cmread.c
cmread_LDADD = $(top_builddir)/libcholmod.la

clread_SOURCES = cmread.c
clread_LDADD = $(top_builddir)/libcholmod.la
clread_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG

MATRICES = \
	$(srcdir)/Matrix/0 \
	$(srcdir)/Matrix/0_1 \
	$(srcdir)/Matrix/1_0 \
	$(srcdir)/Matrix/1e99 \
	$(srcdir)/Matrix/2.tri \
	$(srcdir)/Matrix/20lo \
	$(srcdir)/Matrix/2diag.tri \
	$(srcdir)/Matrix/2lo.tri \
	$(srcdir)/Matrix/2up.tri \
	$(srcdir)/Matrix/3b \
	$(srcdir)/Matrix/3by0.mtx \
	$(srcdir)/Matrix/3singular \
	$(srcdir)/Matrix/5by50 \
	$(srcdir)/Matrix/C9840 \
	$(srcdir)/Matrix/afiro \
	$(srcdir)/Matrix/c10 \
	$(srcdir)/Matrix/c30lo \
	$(srcdir)/Matrix/c30up \
	$(srcdir)/Matrix/c3singular \
	$(srcdir)/Matrix/c5lo \
	$(srcdir)/Matrix/c5up2 \
	$(srcdir)/Matrix/cha.mtx \
	$(srcdir)/Matrix/cpi \
	$(srcdir)/Matrix/crud1 \
	$(srcdir)/Matrix/crud2 \
	$(srcdir)/Matrix/cs.mtx \
	$(srcdir)/Matrix/csa.mtx \
	$(srcdir)/Matrix/cza \
	$(srcdir)/Matrix/cza.mtx \
	$(srcdir)/Matrix/diag \
	$(srcdir)/Matrix/ex5lo \
	$(srcdir)/Matrix/fullcha.mtx \
	$(srcdir)/Matrix/fullcrud.mtx \
	$(srcdir)/Matrix/fullcrud1.mtx \
	$(srcdir)/Matrix/fullcrud2.mtx \
	$(srcdir)/Matrix/fullcsa.mtx \
	$(srcdir)/Matrix/fullcza.mtx \
	$(srcdir)/Matrix/fullrsa.mtx \
	$(srcdir)/Matrix/fullrza.mtx \
	$(srcdir)/Matrix/galenet \
	$(srcdir)/Matrix/huge.tri \
	$(srcdir)/Matrix/ibm32 \
	$(srcdir)/Matrix/k01up \
	$(srcdir)/Matrix/one \
	$(srcdir)/Matrix/pi \
	$(srcdir)/Matrix/plskz362.mtx \
	$(srcdir)/Matrix/r5lo \
	$(srcdir)/Matrix/r5lo2 \
	$(srcdir)/Matrix/r5up \
	$(srcdir)/Matrix/r5up2 \
	$(srcdir)/Matrix/rza.mtx \
	$(srcdir)/Matrix/z10 \
	$(srcdir)/Matrix/z30lo \
	$(srcdir)/Matrix/z30up \
	$(srcdir)/Matrix/z3singular \
	$(srcdir)/Matrix/z5lo \
	$(srcdir)/Matrix/z5up \
	$(srcdir)/Matrix/z5up2 \
	$(srcdir)/Matrix/zero \
	$(top_srcdir)/Demo/Matrix/empty.tri \
	$(top_srcdir)/Demo/Matrix/mangle5.tri \
	$(top_srcdir)/Demo/Matrix/mangle6.tri \
	$(top_srcdir)/Demo/Matrix/mangle7.tri \
	$(top_srcdir)/Demo/Matrix/mangle8.tri \
	$(top_srcdir)/Demo/Matrix/one.tri

check-local: $(check_PROGRAMS) $(MATRICES)
	./cmread no_such_file                          > no_such_file.out
	./cmread $(srcdir)/Matrix/crud1                > crud1.out
	./cmread $(srcdir)/Matrix/crud2                > crud2.out
	./cmread $(srcdir)/Matrix/fullcrud.mtx         > fullcrud.out
	./cmread $(srcdir)/Matrix/fullcrud1.mtx        > fullcrud1.out
	./cmread $(srcdir)/Matrix/fullcrud2.mtx        > fullcrud2.out
	./cmread $(srcdir)/Matrix/3by0.mtx             > 3by0.out
	./cmread $(srcdir)/Matrix/fullrza.mtx          > fullrza.out
	./cmread $(srcdir)/Matrix/fullrsa.mtx          > fullrsa.out
	./cmread $(srcdir)/Matrix/fullcsa.mtx          > fullcsa.out
	./cmread $(srcdir)/Matrix/fullcza.mtx          > fullcza.out
	./cmread $(srcdir)/Matrix/fullcha.mtx          > fullcha.out
	./cmread $(srcdir)/Matrix/cha.mtx              > cha.out
	./cmread $(srcdir)/Matrix/cza.mtx              > cza.out
	./cmread $(srcdir)/Matrix/csa.mtx              > csa.out
	./cmread $(srcdir)/Matrix/one                  > one.out
	./cmread $(srcdir)/Matrix/rza.mtx              > rza.out
	./cmread $(top_srcdir)/Demo/Matrix/mangle5.tri > mangle5.out
	./cmread $(top_srcdir)/Demo/Matrix/mangle6.tri > mangle6.out
	./cmread $(top_srcdir)/Demo/Matrix/mangle7.tri > mangle6.out
	./cmread $(top_srcdir)/Demo/Matrix/mangle8.tri > mangle8.out
	./cmread $(top_srcdir)/Demo/Matrix/empty.tri   > empty.out
	./cmread $(top_srcdir)/Demo/Matrix/one.tri     > one.out
	./cmread $(srcdir)/Matrix/plskz362.mtx         > plskz363.out
	./cmread $(srcdir)/Matrix/2diag.tri            > 2diag.out
	./cmread $(srcdir)/Matrix/r5lo                 > r5lo.out
	./cmread $(srcdir)/Matrix/r5lo2                > r5lo2.out
	./cmread $(srcdir)/Matrix/cs.mtx               > cs.out
	./cmread $(srcdir)/Matrix/2lo.tri              > 2lo.out
	./cmread $(srcdir)/Matrix/2.tri                > 2.out
	./cmread $(srcdir)/Matrix/2up.tri              > 2up.out
	./cmread $(srcdir)/Matrix/huge.tri             > huge.out
	./cmread $(srcdir)/Matrix/1e99                 > 1e99.out
	./clread no_such_file                          > l_no_such_file.out
	./clread $(srcdir)/Matrix/crud1                > l_crud1.out
	./clread $(srcdir)/Matrix/crud2                > l_crud2.out
	./clread $(srcdir)/Matrix/fullcrud.mtx         > l_fullcrud.out
	./clread $(srcdir)/Matrix/fullcrud1.mtx        > l_fullcrud1.out
	./clread $(srcdir)/Matrix/fullcrud2.mtx        > l_fullcrud2.out
	./clread $(srcdir)/Matrix/3by0.mtx             > l_3by0.out
	./clread $(srcdir)/Matrix/fullrza.mtx          > l_fullrza.out
	./clread $(srcdir)/Matrix/fullrsa.mtx          > l_fullrsa.out
	./clread $(srcdir)/Matrix/fullcsa.mtx          > l_fullcsa.out
	./clread $(srcdir)/Matrix/fullcza.mtx          > l_fullcza.out
	./clread $(srcdir)/Matrix/fullcha.mtx          > l_fullcha.out
	./clread $(srcdir)/Matrix/cha.mtx              > l_cha.out
	./clread $(srcdir)/Matrix/cza.mtx              > l_cza.out
	./clread $(srcdir)/Matrix/csa.mtx              > l_csa.out
	./clread $(srcdir)/Matrix/one                  > l_one.out
	./clread $(srcdir)/Matrix/rza.mtx              > l_rza.out
	./clread $(top_srcdir)/Demo/Matrix/mangle5.tri > l_mangle5.out
	./clread $(top_srcdir)/Demo/Matrix/mangle6.tri > l_mangle6.out
	./clread $(top_srcdir)/Demo/Matrix/mangle7.tri > l_mangle6.out
	./clread $(top_srcdir)/Demo/Matrix/mangle8.tri > l_mangle8.out
	./clread $(top_srcdir)/Demo/Matrix/empty.tri   > l_empty.out
	./clread $(top_srcdir)/Demo/Matrix/one.tri     > l_one.out
	./clread $(srcdir)/Matrix/plskz362.mtx         > l_plskz363.out
	./clread $(srcdir)/Matrix/2diag.tri            > l_2diag.out
	./clread $(srcdir)/Matrix/r5lo                 > l_r5lo.out
	./clread $(srcdir)/Matrix/r5lo2                > l_r5lo2.out
	./clread $(srcdir)/Matrix/cs.mtx               > l_cs.out
	./clread $(srcdir)/Matrix/2lo.tri              > l_l_2lo.out
	./clread $(srcdir)/Matrix/2.tri                > l_2.out
	./clread $(srcdir)/Matrix/2up.tri              > l_2up.out
	./clread $(srcdir)/Matrix/huge.tri             > l_huge.out
	./clread $(srcdir)/Matrix/1e99                 > l_1e99.out
	./cm    < $(srcdir)/Matrix/galenet             > galenet.out
	./cl    < $(srcdir)/Matrix/galenet             > l_galenet.out
	./cm    < $(srcdir)/Matrix/5by50               > 5by50.out
	./cl    < $(srcdir)/Matrix/5by50               > l_5by50.out
	./cm    < $(srcdir)/Matrix/r5lo                > r5lo.out
	./cl    < $(srcdir)/Matrix/r5lo                > l_r5lo.out
	./cm    < $(srcdir)/Matrix/r5up                > r5up.out
	./cl    < $(srcdir)/Matrix/r5up                > l_r5up.out
	./cm    < $(srcdir)/Matrix/r5up2               > r5up2.out
	./cl    < $(srcdir)/Matrix/r5up2               > l_r5up2.out
	./cm    < $(srcdir)/Matrix/c5up2               > c5up2.out
	./cl    < $(srcdir)/Matrix/c5up2               > l_c5up2.out
	./cm    < $(srcdir)/Matrix/z5up2               > z5up2.out
	./cl    < $(srcdir)/Matrix/z5up2               > l_z5up2.out
	./cm -m < $(srcdir)/Matrix/z5lo                > z5lo.out
	./cl -m < $(srcdir)/Matrix/z5lo                > l_z5lo.out
	./cm    < $(srcdir)/Matrix/ibm32               > ibm.out
	./cl    < $(srcdir)/Matrix/ibm32               > l_ibm.out
	./cm -m < $(srcdir)/Matrix/c5lo                > c5lo.out
	./cl -m < $(srcdir)/Matrix/c5lo                > l_c5lo.out
	./cm -m < $(srcdir)/Matrix/z10                 > z10.out
	./cl -m < $(srcdir)/Matrix/z10                 > l_z10.out
	./cm -m < $(srcdir)/Matrix/z5up                > z5up.out
	./cl -m < $(srcdir)/Matrix/z5up                > l_z5up.out
	./cm -s < $(srcdir)/Matrix/3singular           > 3singular.out
	./cl -s < $(srcdir)/Matrix/3singular           > l_3singular.out
	./cm -s < $(srcdir)/Matrix/z3singular          > z3singular.out
	./cl -s < $(srcdir)/Matrix/z3singular          > l_z3singular.out
	./cm -s < $(srcdir)/Matrix/c3singular          > c3singular.out
	./cl -s < $(srcdir)/Matrix/c3singular          > l_c3singular.out
	./cm -m < $(srcdir)/Matrix/0                   > 0.out
	./cl -m < $(srcdir)/Matrix/0                   > l_0.out
	./cm -m < $(srcdir)/Matrix/afiro               > afiro.out
	./cl -m < $(srcdir)/Matrix/afiro               > l_afiro.out
	./cm -m < $(srcdir)/Matrix/k01up               > k01up.out
	./cl -m < $(srcdir)/Matrix/k01up               > l_k01up.out
	./cm    < $(srcdir)/Matrix/diag                > diag.out
	./cl    < $(srcdir)/Matrix/diag                > l_diag.out
	./cm -m < $(srcdir)/Matrix/ex5lo               > ex5lo.out
	./cl -m < $(srcdir)/Matrix/ex5lo               > l_ex5lo.out
	./cm    < $(srcdir)/Matrix/20lo                > 20lo.out
	./cl    < $(srcdir)/Matrix/20lo                > l_20lo.out
	./cm    < $(srcdir)/Matrix/z30lo               > z30lo.out
	./cl    < $(srcdir)/Matrix/z30lo               > l_z30lo.out
	./cm -m < $(srcdir)/Matrix/z30up               > z30up.out
	./cl -m < $(srcdir)/Matrix/z30up               > l_z30up.out
	./cm    < $(srcdir)/Matrix/c10                 > c10.out
	./cl    < $(srcdir)/Matrix/c10                 > l_c10.out
	./cm    < $(srcdir)/Matrix/c30lo               > c30lo.out
	./cl    < $(srcdir)/Matrix/c30lo               > l_c30lo.out
	./cm    < $(srcdir)/Matrix/C9840               > C9840.out
	./cl    < $(srcdir)/Matrix/C9840               > l_C9840.out
	./cm -m < $(srcdir)/Matrix/c30up               > c30up.out
	./cl -m < $(srcdir)/Matrix/c30up               > l_c30up.out
	./cm    < $(srcdir)/Matrix/pi                  > pi.out
	./cl    < $(srcdir)/Matrix/pi                  > l_pi.out
	./cm    < $(srcdir)/Matrix/cpi                 > cpi.out
	./cl    < $(srcdir)/Matrix/cpi                 > l_cpi.out
	./cm    < $(srcdir)/Matrix/1_0                 > 1_0.out
	./cl    < $(srcdir)/Matrix/1_0                 > l_1_0.out
	./cm -s < $(srcdir)/Matrix/3b                  > 3b.out
	./cl -s < $(srcdir)/Matrix/3b                  > l_3b.out
	./cm -s < $(srcdir)/Matrix/cza                 > cza2.out
	./cl -s < $(srcdir)/Matrix/cza                 > l_cza2.out
	./cm    < $(srcdir)/Matrix/0_1                 > 0_1.out
	./cl    < $(srcdir)/Matrix/0_1                 > l_0_1.out
	./cm -n < $(srcdir)/Matrix/galenet             > galenet_nan.out
	./cl -n < $(srcdir)/Matrix/galenet             > l_galenet_nan.out
	./cm    < $(srcdir)/Matrix/zero                > zero.out
	./cl    < $(srcdir)/Matrix/zero                > zero.out

endif
endif
endif
endif
endif
endif
endif

CLEANFILES = temp*.mtx *.out
