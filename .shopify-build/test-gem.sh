#!/bin/bash
source ".shopify-build/setup-truffleruby.sh"

GEM="${1}"
SCRIPT_PATH="${PROJECT_ROOT}/tested-gems/${GEM}.sh"
if [[ ! -f "${SCRIPT_PATH}" ]]; then
  echo "No script found for ${GEM}"
  exit 1
fi

while read -r line
do
  [[ "${line}" =~ ^\ *#.*$ ]] && continue
  [[ "${line}" =~ ^\ *$ ]] && continue

  ci_step "${line}"
  eval "${line}"
done < "${SCRIPT_PATH}"
