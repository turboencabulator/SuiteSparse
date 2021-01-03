EXTRA_DIST = \
	ChangeLog \
	License.txt

dist_noinst_DATA = \
	UserGuide.bib \
	CHOLMOD_UserGuide.tex \
	header.tex \
	footer.tex \
	mheader.tex \
	mfooter.tex \
	mfile.awk \
	rule.awk

dist_pdf_DATA = \
	CHOLMOD_UserGuide.pdf

dist_noinst_SCRIPTS = \
	getmproto \
	getproto

# ./getmproto file.m > _file_m.tex
define getmproto =
( \
cat $(srcdir)/mheader.tex; \
expand -8 $< | awk -f $(srcdir)/mfile.awk; \
cat $(srcdir)/mfooter.tex; \
) > $@
endef

# ./getproto 'proto' header.h > _file.tex
define getproto =
( \
echo -n $(PATTERN); \
cat $(srcdir)/rule.awk; \
) > $(basename $@).awk
( \
cat $(srcdir)/header.tex; \
expand -8 $< | awk -f $(basename $@).awk; \
cat $(srcdir)/footer.tex; \
) > $@
$(RM) $(basename $@).awk
endef

PROTO_M = \
	_analyze_m.tex \
	_bisect_m.tex \
	_chol2_m.tex \
	_cholmod2_m.tex \
	_cholmod_demo_m.tex \
	_cholmod_make_m.tex \
	_etree2_m.tex \
	_graph_demo_m.tex \
	_lchol_m.tex \
	_ldl_normest_m.tex \
	_ldlchol_m.tex \
	_ldlsolve_m.tex \
	_ldlsplit_m.tex \
	_ldlupdate_m.tex \
	_ldlrowmod_m.tex \
	_metis_m.tex \
	_mread_m.tex \
	_mwrite_m.tex \
	_nesdis_m.tex \
	_resymbol_m.tex \
	_sdmult_m.tex \
	_sparse2_m.tex \
	_spsym_m.tex \
	_symbfact2_m.tex

$(PROTO_M): mheader.tex mfile.awk mfooter.tex
_%_m.tex: $(top_srcdir)/MATLAB/%.m
	$(getmproto)

PROTO_SIMPLE = \
	_simple.tex

_simple.tex: PATTERN = '/include/, /^}/'

$(PROTO_SIMPLE): $(top_srcdir)/Demo/cholmod_simple.c header.tex rule.awk footer.tex
	$(getproto)

PROTO_CORE = \
	_common.tex \
	_start.tex \
	_finish.tex \
	_defaults.tex \
	_maxrank.tex \
	_allocate_work.tex \
	_free_work.tex \
	_clear_flag.tex \
	_error.tex \
	_dbound.tex \
	_hypot.tex \
	_divcomplex.tex \
	_sparse.tex \
	_allocate_sparse.tex \
	_free_sparse.tex \
	_reallocate_sparse.tex \
	_nnz.tex \
	_speye.tex \
	_spzeros.tex \
	_transpose.tex \
	_transpose_unsym.tex \
	_transpose_sym.tex \
	_ptranspose.tex \
	_sort.tex \
	_band.tex \
	_band_inplace.tex \
	_aat.tex \
	_copy_sparse.tex \
	_copy.tex \
	_add.tex \
	_sparse_xtype.tex \
	_factor.tex \
	_allocate_factor.tex \
	_free_factor.tex \
	_reallocate_factor.tex \
	_change_factor.tex \
	_pack_factor.tex \
	_reallocate_column.tex \
	_factor_to_sparse.tex \
	_copy_factor.tex \
	_factor_xtype.tex \
	_dense.tex \
	_allocate_dense.tex \
	_ensure_dense.tex \
	_zeros.tex \
	_ones.tex \
	_eye.tex \
	_free_dense.tex \
	_sparse_to_dense.tex \
	_dense_to_sparse.tex \
	_copy_dense.tex \
	_copy_dense2.tex \
	_dense_xtype.tex \
	_triplet.tex \
	_allocate_triplet.tex \
	_free_triplet.tex \
	_reallocate_triplet.tex \
	_sparse_to_triplet.tex \
	_triplet_to_sparse.tex \
	_copy_triplet.tex \
	_triplet_xtype.tex \
	_malloc.tex \
	_calloc.tex \
	_free.tex \
	_realloc.tex \
	_realloc_multiple.tex \
	_version.tex \
	_defn.tex

_common.tex: PATTERN = '/typedef struct cholmod_common/, /^}/'
_start.tex: PATTERN = '/int cholmod_start/, /\*\) ;/'
_finish.tex: PATTERN = '/int cholmod_finish/, /\*\) ;/'
_defaults.tex: PATTERN = '/int cholmod_defaults/, /\*\) ;/'
_maxrank.tex: PATTERN = '/size_t cholmod_maxrank/, /\*\) ;/'
_allocate_work.tex: PATTERN = '/int cholmod_allocate_work/, /\*\) ;/'
_free_work.tex: PATTERN = '/int cholmod_free_work/, /\*\) ;/'
_clear_flag.tex: PATTERN = '/long cholmod_clear_flag/, /\*\) ;/'
_error.tex: PATTERN = '/int cholmod_error/, /\*\) ;/'
_dbound.tex: PATTERN = '/double cholmod_dbound/, /\*\) ;/'
_hypot.tex: PATTERN = '/double cholmod_hypot/, /double\) ;/'
_divcomplex.tex: PATTERN = '/int cholmod_divcomplex/, /\*\) ;/'
_sparse.tex: PATTERN = '/typedef struct cholmod_sparse/, /^}/'
_allocate_sparse.tex: PATTERN = '/cholmod_sparse \*cholmod_allocate_sparse/, /\*\) ;/'
_free_sparse.tex: PATTERN = '/int cholmod_free_sparse/, /\*\) ;/'
_reallocate_sparse.tex: PATTERN = '/int cholmod_reallocate_sparse/, /\*\) ;/'
_nnz.tex: PATTERN = '/long cholmod_nnz/, /\*\) ;/'
_speye.tex: PATTERN = '/cholmod_sparse \*cholmod_speye/, /\*\) ;/'
_spzeros.tex: PATTERN = '/cholmod_sparse \*cholmod_spzeros/, /\*\) ;/'
_transpose.tex: PATTERN = '/cholmod_sparse \*cholmod_transpose/, /\*\) ;/'
_transpose_unsym.tex: PATTERN = '/int cholmod_transpose_unsym/, /\*\) ;/'
_transpose_sym.tex: PATTERN = '/int cholmod_transpose_sym/, /\*\) ;/'
_ptranspose.tex: PATTERN = '/cholmod_sparse \*cholmod_ptranspose/, /\*\) ;/'
_sort.tex: PATTERN = '/int cholmod_sort/, /\*\) ;/'
_band.tex: PATTERN = '/cholmod_sparse \*cholmod_band/, /\*\) ;/'
_band_inplace.tex: PATTERN = '/int cholmod_band_inplace/, /\*\) ;/'
_aat.tex: PATTERN = '/cholmod_sparse \*cholmod_aat/, /\*\) ;/'
_copy_sparse.tex: PATTERN = '/cholmod_sparse \*cholmod_copy_sparse/, /\*\) ;/'
_copy.tex: PATTERN = '/cholmod_sparse \*cholmod_copy /, /\*\) ;/'
_add.tex: PATTERN = '/cholmod_sparse \*cholmod_add/, /\*\) ;/'
_sparse_xtype.tex: PATTERN = '/int cholmod_sparse_xtype/, /\*\) ;/'
_factor.tex: PATTERN = '/typedef struct cholmod_factor/, /^}/'
_allocate_factor.tex: PATTERN = '/cholmod_factor \*cholmod_allocate_factor/, /\*\) ;/'
_free_factor.tex: PATTERN = '/int cholmod_free_factor/, /\*\) ;/'
_reallocate_factor.tex: PATTERN = '/int cholmod_reallocate_factor/, /\*\) ;/'
_change_factor.tex: PATTERN = '/int cholmod_change_factor/, /\*\) ;/'
_pack_factor.tex: PATTERN = '/int cholmod_pack_factor/, /\*\) ;/'
_reallocate_column.tex: PATTERN = '/int cholmod_reallocate_column/, /\*\) ;/'
_factor_to_sparse.tex: PATTERN = '/cholmod_sparse \*cholmod_factor_to_sparse/, /\*\) ;/'
_copy_factor.tex: PATTERN = '/cholmod_factor \*cholmod_copy_factor/, /\*\) ;/'
_factor_xtype.tex: PATTERN = '/int cholmod_factor_xtype/, /\*\) ;/'
_dense.tex: PATTERN = '/typedef struct cholmod_dense/, /^}/'
_allocate_dense.tex: PATTERN = '/cholmod_dense \*cholmod_allocate_dense/, /\*\) ;/'
_ensure_dense.tex: PATTERN = '/cholmod_dense \*cholmod_ensure_dense/, /\*\) ;/'
_zeros.tex: PATTERN = '/cholmod_dense \*cholmod_zeros/, /\*\) ;/'
_ones.tex: PATTERN = '/cholmod_dense \*cholmod_ones/, /\*\) ;/'
_eye.tex: PATTERN = '/cholmod_dense \*cholmod_eye/, /\*\) ;/'
_free_dense.tex: PATTERN = '/int cholmod_free_dense/, /\*\) ;/'
_sparse_to_dense.tex: PATTERN = '/cholmod_dense \*cholmod_sparse_to_dense/, /\*\) ;/'
_dense_to_sparse.tex: PATTERN = '/cholmod_sparse \*cholmod_dense_to_sparse/, /\*\) ;/'
_copy_dense.tex: PATTERN = '/cholmod_dense \*cholmod_copy_dense/, /\*\) ;/'
_copy_dense2.tex: PATTERN = '/int cholmod_copy_dense2/, /\*\) ;/'
_dense_xtype.tex: PATTERN = '/int cholmod_dense_xtype/, /\*\) ;/'
_triplet.tex: PATTERN = '/typedef struct cholmod_triplet/, /^}/'
_allocate_triplet.tex: PATTERN = '/cholmod_triplet \*cholmod_allocate_triplet/, /\*\) ;/'
_free_triplet.tex: PATTERN = '/int cholmod_free_triplet/, /\*\) ;/'
_reallocate_triplet.tex: PATTERN = '/int cholmod_reallocate_triplet/, /\*\) ;/'
_sparse_to_triplet.tex: PATTERN = '/cholmod_triplet \*cholmod_sparse_to_triplet/, /\*\) ;/'
_triplet_to_sparse.tex: PATTERN = '/cholmod_sparse \*cholmod_triplet_to_sparse/, /\*\) ;/'
_copy_triplet.tex: PATTERN = '/cholmod_triplet \*cholmod_copy_triplet/, /\*\) ;/'
_triplet_xtype.tex: PATTERN = '/int cholmod_triplet_xtype/, /\*\) ;/'
_malloc.tex: PATTERN = '/void \*cholmod_malloc/, /\*\) ;/'
_calloc.tex: PATTERN = '/void \*cholmod_calloc/, /\*\) ;/'
_free.tex: PATTERN = '/void \*cholmod_free/, /\*\) ;/'
_realloc.tex: PATTERN = '/void \*cholmod_realloc/, /\*\) ;/'
_realloc_multiple.tex: PATTERN = '/int cholmod_realloc_multiple/, /\*\) ;/'
_version.tex: PATTERN = '/int cholmod_version/, /l_version/'
_defn.tex: PATTERN = '/itype defines the/, /define CHOLMOD_SUPERNODAL/'

$(PROTO_CORE): $(top_srcdir)/Include/cholmod_core.h header.tex rule.awk footer.tex
	$(getproto)

PROTO_CHECK = \
	_check_common.tex \
	_print_common.tex \
	_check_sparse.tex \
	_print_sparse.tex \
	_check_dense.tex \
	_print_dense.tex \
	_check_factor.tex \
	_print_factor.tex \
	_check_triplet.tex \
	_print_triplet.tex \
	_check_subset.tex \
	_print_subset.tex \
	_check_perm.tex \
	_print_perm.tex \
	_check_parent.tex \
	_print_parent.tex \
	_read_triplet.tex \
	_read_sparse.tex \
	_read_dense.tex \
	_read_matrix.tex \
	_write_sparse.tex \
	_write_dense.tex

_check_common.tex: PATTERN = '/int cholmod_check_common/, /\*\) ;/'
_print_common.tex: PATTERN = '/int cholmod_print_common/, /\*\) ;/'
_check_sparse.tex: PATTERN = '/int cholmod_check_sparse/, /\*\) ;/'
_print_sparse.tex: PATTERN = '/int cholmod_print_sparse/, /\*\) ;/'
_check_dense.tex: PATTERN = '/int cholmod_check_dense/, /\*\) ;/'
_print_dense.tex: PATTERN = '/int cholmod_print_dense/, /\*\) ;/'
_check_factor.tex: PATTERN = '/int cholmod_check_factor/, /\*\) ;/'
_print_factor.tex: PATTERN = '/int cholmod_print_factor/, /\*\) ;/'
_check_triplet.tex: PATTERN = '/int cholmod_check_triplet/, /\*\) ;/'
_print_triplet.tex: PATTERN = '/int cholmod_print_triplet/, /\*\) ;/'
_check_subset.tex: PATTERN = '/int cholmod_check_subset/, /\*\) ;/'
_print_subset.tex: PATTERN = '/int cholmod_print_subset/, /\*\) ;/'
_check_perm.tex: PATTERN = '/int cholmod_check_perm/, /\*\) ;/'
_print_perm.tex: PATTERN = '/int cholmod_print_perm/, /\*\) ;/'
_check_parent.tex: PATTERN = '/int cholmod_check_parent/, /\*\) ;/'
_print_parent.tex: PATTERN = '/int cholmod_print_parent/, /\*\) ;/'
_read_triplet.tex: PATTERN = '/cholmod_triplet \*cholmod_read_triplet/, /\*\) ;/'
_read_sparse.tex: PATTERN = '/cholmod_sparse \*cholmod_read_sparse/, /\*\) ;/'
_read_dense.tex: PATTERN = '/cholmod_dense \*cholmod_read_dense/, /\*\) ;/'
_read_matrix.tex: PATTERN = '/void \*cholmod_read_matrix/, /\*\) ;/'
_write_sparse.tex: PATTERN = '/int cholmod_write_sparse/, /\*\) ;/'
_write_dense.tex: PATTERN = '/int cholmod_write_dense/, /\*\) ;/'

$(PROTO_CHECK): $(top_srcdir)/Include/cholmod_check.h header.tex rule.awk footer.tex
	$(getproto)

PROTO_CHOLESKY = \
	_analyze.tex \
	_analyze_p.tex \
	_factorize.tex \
	_factorize_p.tex \
	_solve.tex \
	_solve2.tex \
	_spsolve.tex \
	_etree.tex \
	_rowcolcounts.tex \
	_analyze_ordering.tex \
	_amd.tex \
	_colamd.tex \
	_rowfac.tex \
	_rowfac_mask.tex \
	_row_subtree.tex \
	_row_lsubtree.tex \
	_lsolve_pattern.tex \
	_resymbol.tex \
	_resymbol_noperm.tex \
	_rcond.tex \
	_postorder.tex

_analyze.tex: PATTERN = '/cholmod_factor \*cholmod_analyze /, /\*\) ;/'
_analyze_p.tex: PATTERN = '/cholmod_factor \*cholmod_analyze_p/, /\*\) ;/'
_factorize.tex: PATTERN = '/int cholmod_factorize /, /\*\) ;/'
_factorize_p.tex: PATTERN = '/int cholmod_factorize_p/, /\*\) ;/'
_solve.tex: PATTERN = '/cholmod_dense \*cholmod_solve/, /\*\) ;/'
_solve2.tex: PATTERN = '/int cholmod_solve2/, /\*\) ;/'
_spsolve.tex: PATTERN = '/cholmod_sparse \*cholmod_spsolve/, /\*\) ;/'
_etree.tex: PATTERN = '/int cholmod_etree/, /\*\) ;/'
_rowcolcounts.tex: PATTERN = '/int cholmod_rowcolcounts/, /\*\) ;/'
_analyze_ordering.tex: PATTERN = '/int cholmod_analyze_ordering/, /\*\) ;/'
_amd.tex: PATTERN = '/int cholmod_amd/, /\*\) ;/'
_colamd.tex: PATTERN = '/int cholmod_colamd/, /\*\) ;/'
_rowfac.tex: PATTERN = '/int cholmod_rowfac/, /\*\) ;/'
_rowfac_mask.tex: PATTERN = '/int cholmod_rowfac_mask/, /\*\) ;/'
_row_subtree.tex: PATTERN = '/int cholmod_row_subtree/, /\*\) ;/'
_row_lsubtree.tex: PATTERN = '/int cholmod_row_lsubtree/, /\*\) ;/'
_lsolve_pattern.tex: PATTERN = '/int cholmod_lsolve_pattern/, /\*\) ;/'
_resymbol.tex: PATTERN = '/int cholmod_resymbol /, /\*\) ;/'
_resymbol_noperm.tex: PATTERN = '/int cholmod_resymbol_noperm/, /\*\) ;/'
_rcond.tex: PATTERN = '/double cholmod_rcond/, /\*\) ;/'
_postorder.tex: PATTERN = '/long cholmod_postorder/, /\*\) ;/'

$(PROTO_CHOLESKY): $(top_srcdir)/Include/cholmod_cholesky.h header.tex rule.awk footer.tex
	$(getproto)

PROTO_MODIFY = \
	_updown.tex \
	_updown_solve.tex \
	_updown_mark.tex \
	_updown_mask.tex \
	_rowadd.tex \
	_rowadd_solve.tex \
	_rowadd_mark.tex \
	_rowdel.tex \
	_rowdel_solve.tex \
	_rowdel_mark.tex

_updown.tex: PATTERN = '/int cholmod_updown /, /\*\) ;/'
_updown_solve.tex: PATTERN = '/int cholmod_updown_solve/, /\*\) ;/'
_updown_mark.tex: PATTERN = '/int cholmod_updown_mark/, /\*\) ;/'
_updown_mask.tex: PATTERN = '/int cholmod_updown_mask/, /\*\) ;/'
_rowadd.tex: PATTERN = '/int cholmod_rowadd /, /\*\) ;/'
_rowadd_solve.tex: PATTERN = '/int cholmod_rowadd_solve/, /\*\) ;/'
_rowadd_mark.tex: PATTERN = '/int cholmod_rowadd_mark/, /\*\) ;/'
_rowdel.tex: PATTERN = '/int cholmod_rowdel /, /\*\) ;/'
_rowdel_solve.tex: PATTERN = '/int cholmod_rowdel_solve/, /\*\) ;/'
_rowdel_mark.tex: PATTERN = '/int cholmod_rowdel_mark/, /\*\) ;/'

$(PROTO_MODIFY): $(top_srcdir)/Include/cholmod_modify.h header.tex rule.awk footer.tex
	$(getproto)

PROTO_MATRIXOPS = \
	_drop.tex \
	_norm_dense.tex \
	_norm_sparse.tex \
	_horzcat.tex \
	_scale.tex \
	_sdmult.tex \
	_ssmult.tex \
	_submatrix.tex \
	_vertcat.tex \
	_symmetry.tex

_drop.tex: PATTERN = '/int cholmod_drop/, /\*\) ;/'
_norm_dense.tex: PATTERN = '/double cholmod_norm_dense/, /\*\) ;/'
_norm_sparse.tex: PATTERN = '/double cholmod_norm_sparse/, /\*\) ;/'
_horzcat.tex: PATTERN = '/cholmod_sparse \*cholmod_horzcat/, /\*\) ;/'
_scale.tex: PATTERN = '/define CHOLMOD_SCALAR/, /\*\) ;/'
_sdmult.tex: PATTERN = '/int cholmod_sdmult/, /\*\) ;/'
_ssmult.tex: PATTERN = '/cholmod_sparse \*cholmod_ssmult/, /\*\) ;/'
_submatrix.tex: PATTERN = '/cholmod_sparse \*cholmod_submatrix/, /\*\) ;/'
_vertcat.tex: PATTERN = '/cholmod_sparse \*cholmod_vertcat/, /\*\) ;/'
_symmetry.tex: PATTERN = '/int cholmod_symmetry/, /\*\) ;/'

$(PROTO_MATRIXOPS): $(top_srcdir)/Include/cholmod_matrixops.h header.tex rule.awk footer.tex
	$(getproto)

PROTO_SUPERNODAL = \
	_super_symbolic.tex \
	_super_numeric.tex \
	_super_lsolve.tex \
	_super_ltsolve.tex

_super_symbolic.tex: PATTERN = '/int cholmod_super_symbolic/, /\*\) ;/'
_super_numeric.tex: PATTERN = '/int cholmod_super_numeric/, /\*\) ;/'
_super_lsolve.tex: PATTERN = '/int cholmod_super_lsolve/, /\*\) ;/'
_super_ltsolve.tex: PATTERN = '/int cholmod_super_ltsolve/, /\*\) ;/'

$(PROTO_SUPERNODAL): $(top_srcdir)/Include/cholmod_supernodal.h header.tex rule.awk footer.tex
	$(getproto)

PROTO_PARTITION = \
	_nested_dissection.tex \
	_metis.tex \
	_ccolamd.tex \
	_camd.tex \
	_csymamd.tex \
	_bisect.tex \
	_metis_bisector.tex \
	_collapse_septree.tex

_nested_dissection.tex: PATTERN = '/long cholmod_nested_dissection/, /\*\) ;/'
_metis.tex: PATTERN = '/int cholmod_metis/, /\*\) ;/'
_ccolamd.tex: PATTERN = '/int cholmod_ccolamd/, /\*\) ;/'
_camd.tex: PATTERN = '/int cholmod_camd/, /\*\) ;/'
_csymamd.tex: PATTERN = '/int cholmod_csymamd/, /\*\) ;/'
_bisect.tex: PATTERN = '/long cholmod_bisect/, /\*\) ;/'
_metis_bisector.tex: PATTERN = '/long cholmod_metis_bisector/, /\*\) ;/'
_collapse_septree.tex: PATTERN = '/long cholmod_collapse_septree/, /\*\) ;/'

$(PROTO_PARTITION): $(top_srcdir)/Include/cholmod_partition.h header.tex rule.awk footer.tex
	$(getproto)

PROTO = \
	$(PROTO_M) \
	$(PROTO_SIMPLE) \
	$(PROTO_CORE) \
	$(PROTO_CHECK) \
	$(PROTO_CHOLESKY) \
	$(PROTO_MODIFY) \
	$(PROTO_MATRIXOPS) \
	$(PROTO_SUPERNODAL) \
	$(PROTO_PARTITION)

CHOLMOD_UserGuide.pdf CHOLMOD_UserGuide.aux: $(PROTO)
.INTERMEDIATE: CHOLMOD_UserGuide.aux $(PROTO)

.INTERMEDIATE: CHOLMOD_UserGuide.bib
CHOLMOD_UserGuide.bib: UserGuide.bib
	$(LN_S) -f $< $@

TEX = TEXINPUTS="$(srcdir):" pdflatex -interaction nonstopmode -file-line-error
BIB = BIBINPUTS="$(srcdir):" bibtex
%.pdf: %.tex %.bbl
	$(TEX) $*
	while grep -q "Rerun to get cross-references right" $*.log; do \
		$(TEX) $*; \
	done
%.bbl: %.aux %.bib
	$(BIB) $*
%.aux: %.tex
	$(TEX) $*

CLEANFILES = _*.awk _*.tex *.dvi *.aux *.log *.lof *.lot *.toc *.bak *.bbl *.blg
MAINTAINERCLEANFILES = $(dist_pdf_DATA)
