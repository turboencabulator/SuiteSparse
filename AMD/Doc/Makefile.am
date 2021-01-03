EXTRA_DIST = ChangeLog License.txt lesser.txt

dist_noinst_DATA = AMD_UserGuide.tex AMD_UserGuide.bib
dist_pdf_DATA = AMD_UserGuide.pdf

AMD_UserGuide.pdf AMD_UserGuide.aux: amd_h.tex
.INTERMEDIATE: AMD_UserGuide.aux amd_h.tex

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
