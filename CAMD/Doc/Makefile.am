EXTRA_DIST = ChangeLog License.txt lesser.txt

dist_noinst_SCRIPTS = cdiff docdiff
dist_noinst_DATA = CAMD_UserGuide.tex CAMD_UserGuide.bib camd.sed
dist_pdf_DATA = CAMD_UserGuide.pdf

CAMD_UserGuide.pdf CAMD_UserGuide.aux: camd_h.tex
.INTERMEDIATE: CAMD_UserGuide.aux camd_h.tex

%_h.tex: $(top_srcdir)/Include/%.h
	echo '\begin{verbatim}' > $@
	expand -8 $< >> $@
	echo '\end{verbatim}' >> $@

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

CLEANFILES = *.aux *.bbl *.blg *.log *.toc *_h.tex
MAINTAINERCLEANFILES = $(dist_pdf_DATA)
