EXTRA_DIST = \
	ChangeLog \
	License.txt \
	lesser.txt

dist_noinst_DATA = KLU_UserGuide.tex KLU_UserGuide.bib
dist_pdf_DATA = KLU_UserGuide.pdf palamadai_e.pdf

SRC = \
	klu_h.tex \
	btf_h.tex \
	klu_simple_c.tex

KLU_UserGuide.pdf KLU_UserGuide.aux: $(SRC)
.INTERMEDIATE: KLU_UserGuide.aux $(SRC)

define verbatim =
echo '\begin{verbatim}' > $@
expand -8 $< >> $@
echo '\end{verbatim}' >> $@
endef

klu_h.tex: $(top_srcdir)/Include/klu.h
	$(verbatim)

# FIXME:  We don't know the location of btf.h.
# Insert a placeholder for now.
#btf_h.tex: /usr/include/btf.h
#	$(verbatim)
btf_h.tex:
	echo '\begin{verbatim}' > $@
	echo 'See your btf.h local install' >> $@
	echo '\end{verbatim}' >> $@

klu_simple_c.tex: $(top_srcdir)/Demo/klu_simple.c
	$(verbatim)

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

CLEANFILES = *.aux *.bbl *.blg *.log *.toc $(SRC)
MAINTAINERCLEANFILES = $(dist_pdf_DATA)
