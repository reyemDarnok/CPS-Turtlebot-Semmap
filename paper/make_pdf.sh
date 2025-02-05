#!/bin/bash
pushd "/$( dirname "${BASH_SOURCE[0]}" )" || exit
pdflatex TemplateSeminarPaper.tex
popd || exit
