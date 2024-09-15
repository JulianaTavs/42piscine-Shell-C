#!/bin/bash

# Verifica se estamos em um repositório git
if [ ! -d .git ]; then
    echo "Este script deve ser executado dentro de um repositório Git."
    exit 1
fi

# Lista os arquivos ignorados
git ls-files --ignored --exclude-standard --others --directory
