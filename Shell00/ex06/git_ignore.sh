#!/bin/bash

#Verifica se estamos em um repositório Git:
if [ ! -d ../../.git ]; then
    echo "Este script deve ser executado dentro de um repositório Git."
fi
# Lista os arquivos ignorados
git ls-files --ignored --exclude-standard --others --directory
