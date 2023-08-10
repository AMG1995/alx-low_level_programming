#!/bin/bash

file_names=("0-preprocessor" "1-compiler" "2-assembler" "3-name"  "4-puts.c"  "5-printf.c"  "6-size.c")

for file in "${file_names[@]}"; do
    echo "#!/bin/bash" > "$file"
    chmod +x "$file"
done
