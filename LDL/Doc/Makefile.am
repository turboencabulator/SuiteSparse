EXTRA_DIST = ChangeLog License.txt lesser.txt

dist_noinst_DATA = ldl_userguide.tex ldl.bib
dist_pdf_DATA = ldl_userguide.pdf

.INTERMEDIATE: ldl_userguide.bib
ldl_userguide.bib: ldl.bib
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

CLEANFILES = *.aux *.bbl *.blg *.log *.toc
MAINTAINERCLEANFILES = $(dist_pdf_DATA)
