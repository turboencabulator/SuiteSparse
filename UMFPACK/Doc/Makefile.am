EXTRA_DIST = \
	ChangeLog \
	License.txt \
	gpl.txt

dist_noinst_DATA = \
	UMFPACK_QuickStart.tex \
	UserGuide.bib \
	UserGuide.sed1 \
	UserGuide.sed2 \
	UMFPACK_UserGuide.stex

dist_pdf_DATA = \
	UMFPACK_QuickStart.pdf \
	UMFPACK_UserGuide.pdf

# Unlike UserGuide.sed1, use \input{filename.tex} to insert the source code
# which we will construct below.  Also remove the \begin{verbatim} and
# \end{verbatim} on the adjacent lines and add them to filename.tex.
define sed1 =
sed -e ':more;$$!N;s/\n/&/2;t enough;$$!b more;:enough;/^\\begin{verbatim}\nINCLUDE umfpack\(.*\)\.\([ch]\) via sed\n\\end{verbatim}$$/s//\\input{\1_\2.tex}/;P;D' $< > $@
endef

# UserGuide.sed2 currently strips out C-style comments.  In some cases it
# strips out too much due to formatting; we'll leave that for upstream to fix.
define sed2 =
echo '\begin{verbatim}' > $@
sed -e '/[/][*]/d' -e '/[*][/]/d' < $< | expand -8 >> $@
echo '\end{verbatim}' >> $@
endef

UMFPACK_UserGuide.tex: $(srcdir)/UMFPACK_UserGuide.stex
	$(sed1)

_simple_c.tex: $(top_srcdir)/Demo/umfpack_simple.c
	$(sed2)
%_h.tex: $(top_srcdir)/Include/umfpack%.h
	$(sed2)

SRC = \
	_simple_c.tex \
	_col_to_triplet_h.tex \
	_defaults_h.tex \
	_free_numeric_h.tex \
	_free_symbolic_h.tex \
	_get_determinant_h.tex \
	_get_lunz_h.tex \
	_get_numeric_h.tex \
	_get_symbolic_h.tex \
	_load_numeric_h.tex \
	_load_symbolic_h.tex \
	_numeric_h.tex \
	_qsymbolic_h.tex \
	_report_control_h.tex \
	_report_info_h.tex \
	_report_matrix_h.tex \
	_report_numeric_h.tex \
	_report_perm_h.tex \
	_report_status_h.tex \
	_report_symbolic_h.tex \
	_report_triplet_h.tex \
	_report_vector_h.tex \
	_save_numeric_h.tex \
	_save_symbolic_h.tex \
	_scale_h.tex \
	_solve_h.tex \
	_symbolic_h.tex \
	_tictoc_h.tex \
	_timer_h.tex \
	_transpose_h.tex \
	_triplet_to_col_h.tex \
	_wsolve_h.tex

.INTERMEDIATE: UMFPACK_UserGuide.tex $(SRC)
UMFPACK_UserGuide.tex: $(SRC)

.INTERMEDIATE: UMFPACK_UserGuide.bib
UMFPACK_UserGuide.bib: UserGuide.bib
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

# QuickStart does not include a bibliography, so the above rule won't work.
UMFPACK_QuickStart.pdf: %.pdf: %.tex
	$(TEX) $*
	while grep -q "Rerun to get cross-references right" $*.log; do \
		$(TEX) $*; \
	done

CLEANFILES = *.aux *.bbl *.blg *.log *.toc UMFPACK_UserGuide.tex
MAINTAINERCLEANFILES = $(dist_pdf_DATA)
