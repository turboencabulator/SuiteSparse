AM_CPPFLAGS = -I$(top_srcdir)/Include $(CHOLMOD_CFLAGS) $(AMD_CFLAGS) $(SUITESPARSECONFIG_CFLAGS) $(CODE_COVERAGE_CPPFLAGS)
AM_CFLAGS = $(CODE_COVERAGE_CFLAGS)

if CODE_COVERAGE_ENABLED
AM_CPPFLAGS += -DTESTING
endif

# non-user-callable umf_*.[ch] files:
UMF = \
	umf_assemble.c \
	umf_blas3_update.c \
	umf_build_tuples.c \
	umf_create_element.c \
	umf_dump.c \
	umf_extend_front.c \
	umf_garbage_collection.c \
	umf_get_memory.c \
	umf_grow_front.c \
	umf_init_front.c \
	umf_kernel.c \
	umf_kernel_init.c \
	umf_kernel_wrapup.c \
	umf_local_search.c \
	umf_lsolve.c \
	umf_ltsolve.c \
	umf_mem_alloc_element.c \
	umf_mem_alloc_head_block.c \
	umf_mem_alloc_tail_block.c \
	umf_mem_free_tail_block.c \
	umf_mem_init_memoryspace.c \
	umf_report_vector.c \
	umf_row_search.c \
	umf_scale.c \
	umf_scale_column.c \
	umf_set_stats.c \
	umf_solve.c \
	umf_start_front.c \
	umf_store_lu.c \
	umf_symbolic_usage.c \
	umf_transpose.c \
	umf_triplet.c \
	umf_tuple_lengths.c \
	umf_usolve.c \
	umf_utsolve.c \
	umf_valid_numeric.c \
	umf_valid_symbolic.c

# non-user-callable umf_*.[ch] files
# int/SuiteSparse_long versions only (no real/complex):
UMFINT = \
	umf_analyze.c \
	umf_apply_order.c \
	umf_cholmod.c \
	umf_colamd.c \
	umf_free.c \
	umf_fsize.c \
	umf_is_permutation.c \
	umf_malloc.c \
	umf_realloc.c \
	umf_report_perm.c \
	umf_singletons.c

# user-callable umfpack_*.c files
# (int/SuiteSparse_long and real/complex):
UMFPACK = \
	umfpack_col_to_triplet.c \
	umfpack_defaults.c \
	umfpack_free_numeric.c \
	umfpack_free_symbolic.c \
	umfpack_get_determinant.c \
	umfpack_get_lunz.c \
	umfpack_get_numeric.c \
	umfpack_get_symbolic.c \
	umfpack_load_numeric.c \
	umfpack_load_symbolic.c \
	umfpack_numeric.c \
	umfpack_qsymbolic.c \
	umfpack_report_control.c \
	umfpack_report_info.c \
	umfpack_report_matrix.c \
	umfpack_report_numeric.c \
	umfpack_report_perm.c \
	umfpack_report_status.c \
	umfpack_report_symbolic.c \
	umfpack_report_triplet.c \
	umfpack_report_vector.c \
	umfpack_save_numeric.c \
	umfpack_save_symbolic.c \
	umfpack_scale.c \
	umfpack_solve.c \
	umfpack_symbolic.c \
	umfpack_transpose.c \
	umfpack_triplet_to_col.c

# user-callable umfpack_*.c files
# only one version for int/SuiteSparse_long, real/complex:
GENERIC = \
	umfpack_timer.c \
	umfpack_tictoc.c \
	umfpack_global.c

noinst_HEADERS = \
	cholmod_blas.h \
	umf_config.h \
	umf_internal.h \
	umf_version.h \
	$(UMF:.c=.h) \
	$(UMFINT:.c=.h)

noinst_LTLIBRARIES = \
	libumf_i.la \
	libumf_l.la \
	libumf_di_hsolve.la \
	libumf_di_triplet_map_x.la \
	libumf_di_triplet_map_nox.la \
	libumf_di_triplet_nomap_x.la \
	libumf_di_assemble_fixq.la \
	libumf_di_store_lu_drop.la \
	libumf_di.la \
	libumfpack_di_wsolve.la \
	libumfpack_di.la \
	libumf_dl_hsolve.la \
	libumf_dl_triplet_map_x.la \
	libumf_dl_triplet_map_nox.la \
	libumf_dl_triplet_nomap_x.la \
	libumf_dl_assemble_fixq.la \
	libumf_dl_store_lu_drop.la \
	libumf_dl.la \
	libumfpack_dl_wsolve.la \
	libumfpack_dl.la \
	libumf_zi_hsolve.la \
	libumf_zi_triplet_map_x.la \
	libumf_zi_triplet_map_nox.la \
	libumf_zi_triplet_nomap_x.la \
	libumf_zi_assemble_fixq.la \
	libumf_zi_store_lu_drop.la \
	libumf_zi.la \
	libumfpack_zi_wsolve.la \
	libumfpack_zi.la \
	libumf_zl_hsolve.la \
	libumf_zl_triplet_map_x.la \
	libumf_zl_triplet_map_nox.la \
	libumf_zl_triplet_nomap_x.la \
	libumf_zl_assemble_fixq.la \
	libumf_zl_store_lu_drop.la \
	libumf_zl.la \
	libumfpack_zl_wsolve.la \
	libumfpack_zl.la

# compile each int and SuiteSparse_long routine (with no real/complex version)
libumf_i_la_SOURCES = $(UMFINT)
libumf_i_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT

libumf_l_la_SOURCES = $(UMFINT)
libumf_l_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG

if CHOLMOD
libumf_i_la_LIBADD = $(CHOLMOD_LIBS)
libumf_l_la_LIBADD = $(CHOLMOD_LIBS)
else
libumf_i_la_CPPFLAGS += -DNCHOLMOD
libumf_l_la_CPPFLAGS += -DNCHOLMOD
endif

# compile each routine in the DI version
libumf_di_hsolve_la_SOURCES = umf_ltsolve.c umf_utsolve.c
libumf_di_hsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT -DCONJUGATE_SOLVE

libumf_di_triplet_map_x_la_SOURCES = umf_triplet.c
libumf_di_triplet_map_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT -DDO_MAP -DDO_VALUES

libumf_di_triplet_map_nox_la_SOURCES = umf_triplet.c
libumf_di_triplet_map_nox_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT -DDO_MAP

libumf_di_triplet_nomap_x_la_SOURCES = umf_triplet.c
libumf_di_triplet_nomap_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT -DDO_VALUES

libumf_di_assemble_fixq_la_SOURCES = umf_assemble.c
libumf_di_assemble_fixq_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT -DFIXQ

libumf_di_store_lu_drop_la_SOURCES = umf_store_lu.c
libumf_di_store_lu_drop_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT -DDROP

libumf_di_la_SOURCES = $(UMF)
libumf_di_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT
libumf_di_la_LIBADD = \
	libumf_di_hsolve.la \
	libumf_di_triplet_map_x.la \
	libumf_di_triplet_map_nox.la \
	libumf_di_triplet_nomap_x.la \
	libumf_di_assemble_fixq.la \
	libumf_di_store_lu_drop.la

libumfpack_di_wsolve_la_SOURCES = umfpack_solve.c
libumfpack_di_wsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT -DWSOLVE

libumfpack_di_la_SOURCES = $(UMFPACK)
libumfpack_di_la_CPPFLAGS = $(AM_CPPFLAGS) -DDINT
libumfpack_di_la_LIBADD = \
	libumfpack_di_wsolve.la

# compile each routine in the DL version
libumf_dl_hsolve_la_SOURCES = umf_ltsolve.c umf_utsolve.c
libumf_dl_hsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG -DCONJUGATE_SOLVE

libumf_dl_triplet_map_x_la_SOURCES = umf_triplet.c
libumf_dl_triplet_map_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG -DDO_MAP -DDO_VALUES

libumf_dl_triplet_map_nox_la_SOURCES = umf_triplet.c
libumf_dl_triplet_map_nox_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG -DDO_MAP

libumf_dl_triplet_nomap_x_la_SOURCES = umf_triplet.c
libumf_dl_triplet_nomap_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG -DDO_VALUES

libumf_dl_assemble_fixq_la_SOURCES = umf_assemble.c
libumf_dl_assemble_fixq_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG -DFIXQ

libumf_dl_store_lu_drop_la_SOURCES = umf_store_lu.c
libumf_dl_store_lu_drop_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG -DDROP

libumf_dl_la_SOURCES = $(UMF)
libumf_dl_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG
libumf_dl_la_LIBADD = \
	libumf_dl_hsolve.la \
	libumf_dl_triplet_map_x.la \
	libumf_dl_triplet_map_nox.la \
	libumf_dl_triplet_nomap_x.la \
	libumf_dl_assemble_fixq.la \
	libumf_dl_store_lu_drop.la

libumfpack_dl_wsolve_la_SOURCES = umfpack_solve.c
libumfpack_dl_wsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG -DWSOLVE

libumfpack_dl_la_SOURCES = $(UMFPACK)
libumfpack_dl_la_CPPFLAGS = $(AM_CPPFLAGS) -DDLONG
libumfpack_dl_la_LIBADD = \
	libumfpack_dl_wsolve.la

# compile each routine in the ZI version
libumf_zi_hsolve_la_SOURCES = umf_ltsolve.c umf_utsolve.c
libumf_zi_hsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT -DCONJUGATE_SOLVE

libumf_zi_triplet_map_x_la_SOURCES = umf_triplet.c
libumf_zi_triplet_map_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT -DDO_MAP -DDO_VALUES

libumf_zi_triplet_map_nox_la_SOURCES = umf_triplet.c
libumf_zi_triplet_map_nox_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT -DDO_MAP

libumf_zi_triplet_nomap_x_la_SOURCES = umf_triplet.c
libumf_zi_triplet_nomap_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT -DDO_VALUES

libumf_zi_assemble_fixq_la_SOURCES = umf_assemble.c
libumf_zi_assemble_fixq_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT -DFIXQ

libumf_zi_store_lu_drop_la_SOURCES = umf_store_lu.c
libumf_zi_store_lu_drop_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT -DDROP

libumf_zi_la_SOURCES = $(UMF)
libumf_zi_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT
libumf_zi_la_LIBADD = \
	libumf_zi_hsolve.la \
	libumf_zi_triplet_map_x.la \
	libumf_zi_triplet_map_nox.la \
	libumf_zi_triplet_nomap_x.la \
	libumf_zi_assemble_fixq.la \
	libumf_zi_store_lu_drop.la

libumfpack_zi_wsolve_la_SOURCES = umfpack_solve.c
libumfpack_zi_wsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT -DWSOLVE

libumfpack_zi_la_SOURCES = $(UMFPACK)
libumfpack_zi_la_CPPFLAGS = $(AM_CPPFLAGS) -DZINT
libumfpack_zi_la_LIBADD = \
	libumfpack_zi_wsolve.la

# compile each routine in the ZL version
libumf_zl_hsolve_la_SOURCES = umf_ltsolve.c umf_utsolve.c
libumf_zl_hsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG -DCONJUGATE_SOLVE

libumf_zl_triplet_map_x_la_SOURCES = umf_triplet.c
libumf_zl_triplet_map_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG -DDO_MAP -DDO_VALUES

libumf_zl_triplet_map_nox_la_SOURCES = umf_triplet.c
libumf_zl_triplet_map_nox_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG -DDO_MAP

libumf_zl_triplet_nomap_x_la_SOURCES = umf_triplet.c
libumf_zl_triplet_nomap_x_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG -DDO_VALUES

libumf_zl_assemble_fixq_la_SOURCES = umf_assemble.c
libumf_zl_assemble_fixq_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG -DFIXQ

libumf_zl_store_lu_drop_la_SOURCES = umf_store_lu.c
libumf_zl_store_lu_drop_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG -DDROP

libumf_zl_la_SOURCES = $(UMF)
libumf_zl_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG
libumf_zl_la_LIBADD = \
	libumf_zl_hsolve.la \
	libumf_zl_triplet_map_x.la \
	libumf_zl_triplet_map_nox.la \
	libumf_zl_triplet_nomap_x.la \
	libumf_zl_assemble_fixq.la \
	libumf_zl_store_lu_drop.la

libumfpack_zl_wsolve_la_SOURCES = umfpack_solve.c
libumfpack_zl_wsolve_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG -DWSOLVE

libumfpack_zl_la_SOURCES = $(UMFPACK)
libumfpack_zl_la_CPPFLAGS = $(AM_CPPFLAGS) -DZLONG
libumfpack_zl_la_LIBADD = \
	libumfpack_zl_wsolve.la

lib_LTLIBRARIES = libumfpack.la
libumfpack_la_SOURCES = $(GENERIC)
libumfpack_la_LIBADD = \
	libumf_i.la \
	libumf_l.la \
	libumf_di.la libumfpack_di.la \
	libumf_dl.la libumfpack_dl.la \
	libumf_zi.la libumfpack_zi.la \
	libumf_zl.la libumfpack_zl.la \
	$(AMD_LIBS) $(SUITESPARSECONFIG_LIBS) $(BLAS_LIBS) $(POSIX_LIBS) $(CODE_COVERAGE_LIBS)
libumfpack_la_LDFLAGS = -no-undefined -release $(PACKAGE_VERSION)
