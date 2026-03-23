find . -iname "*.sh" -execdir sh -c 'printf "%s\n" "${0%.*}"' {} ';' | cut -c3-
