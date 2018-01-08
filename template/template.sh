#!/bin/bash

SCRIPT_DIR=$(cd $(dirname $0); pwd)
shopt -s expand_aliases
source ~/.bash_aliases

CONTEST=$1
PROBLEM=$2
LANGUAGE=cpp
NAME=${CONTEST}_${PROBLEM}

SRC=${NAME}.${LANGUAGE}

echo "Create Templates."
mkdir ${NAME}
cd ${NAME}
cp -r $SCRIPT_DIR/.vscode ./
cp $SCRIPT_DIR/.clang-format ./
echo "CONTEST = ${CONTEST}" > ./makefile
echo "PROBLEM = ${PROBLEM}" >> ./makefile
echo "LANGUAGE = ${LANGUAGE}" >> ./makefile
cat $SCRIPT_DIR/makefile_template >> ./makefile
cp $SCRIPT_DIR/template.cpp ./${SRC}
