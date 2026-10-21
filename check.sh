#!/usr/bin/env bash

set -euo pipefail

CXX="${CXX:-g++}"
FLAGS=(-std=c++17 -Wall -Wextra -pedantic)

echo "Checking Complex class..."
"$CXX" "${FLAGS[@]}" complex.cpp -o complex_test

output=$(printf '3 4\n1 2\n' | ./complex_test)

grep -Fq 'Sum: 4 + 6i' <<< "$output"
grep -Fq 'Difference: 2 + 2i' <<< "$output"

echo "PASS: Complex addition and subtraction"

echo "Checking Person class..."
"$CXX" "${FLAGS[@]}" person.cpp -o person_test

output=$(printf '2\nAlice\n20\nBob\n25\n' | ./person_test)

grep -Fq 'Name: Alice, Age: 20' <<< "$output"
grep -Fq 'Name: Bob, Age: 25' <<< "$output"

echo "PASS: Person population and display"

rm -f complex_test person_test

echo "All checks passed!"
