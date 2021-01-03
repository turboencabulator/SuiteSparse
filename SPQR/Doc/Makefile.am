EXTRA_DIST = \
	ChangeLog \
	License.txt \
	README.txt \
	gpl.txt

dist_noinst_DATA = \
	spqr_user_guide.tex \
	spqr_user_guide.bib

dist_pdf_DATA = \
	spqr_user_guide.pdf \
	algo_spqr.pdf \
	spqr.pdf

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

CLEANFILES = *.aux *.bbl *.blg *.log *.toc
MAINTAINERCLEANFILES = $(dist_pdf_DATA)
