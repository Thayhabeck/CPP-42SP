# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_test.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:40:26 by thabeck-          #+#    #+#              #
#    Updated: 2023/11/22 18:32:47 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Run tests for CPP-01-ex04
# Usage: make test -OU- make && ./run_tests.sh

# Avaliator name
AVAL="Fulano"

# Compile program
# make --no-print-directory

# Colors
red='\033[31;1m'
blue='\033[36;1m'
green='\033[32;1m'
reset='\033[0m'

# Create Test folder
mkdir -p Test

# Create Test files_______________________________________________________________

echo "${blue}------------------- SED IS FOR LOSERS TEST --------------------"
echo "---------------------------------------------------------------"
echo "Creating test files..."
echo "---------------------------------------------------------------"
echo "emptyFile.test..."
echo "aleatory.test..."
echo "multipleMatches.test..."
echo "noMatches.test..."
echo "oneMatchPerLine.test..."
echo "numbers.test..."
echo "specialChars.test..."
echo "---------------------------------------------------------------"

# Create empty file
touch ./Test/emptyFile.test

# Create aleatory file
echo "Eu sou Thayná
E você é o avaliador...
C++ é divertido...
weeeee..." > ./Test/aleatory.test

# Create aleatory sed file
sed "s/Thayná/${AVAL}/g" ./Test/aleatory.test > ./Test/aleatory.test.result

# Create multiple matches file
echo "tempo, tempo, tempo

tempo, dançarino das horas fugazes,
no tic-tac constante, tempo, tu te moves.
entre os dias e noites, tempo, traças fases,
em cada momento, tempo, tu nos proves.

tempo, nas memórias que guardas,
nos sorrisos e lágrimas, tempo, tu vives.
nas estações que mudas, tempo, nos aguardas,
em cada segundo, tempo, tu decides.

tempo, escultor de destinos,
nas marés da vida, tempo, tu ris e choras.
nos sonhos e planos, tempo, traças caminhos,
em cada amanhecer, tempo, renasces e devoras.

tempo, mestre do agora e do depois,
e o relógio da existência, tempo, és rei e servo.
em cada adeus, tempo, nos deixas a sós,
mas em cada olá, tempo, és novo e eterno.

tempo, tempo, tempo, em tua dança,
nos ensinas a valorizar cada instante.
pois em tua infinita expanse,
és o mestre do efêmero e do constante.
" > ./Test/multipleMatches.test

# Create multiple matches sed file
sed 's/tempo/amor/g' ./Test/multipleMatches.test > ./Test/multipleMatches.test.result

# Create no matches file
echo "Nas asas do vento, sussurros viajam,
Entre folhas dançantes, histórias gravam.
Sob céus de azul profundo e calmo,
Desenham sonhos, em silêncio, no asfalto.

Sob a luz da lua, segredos são revelados,
Em noites estreladas, desejos são semeados.
Nas marés da vida, corações navegam,
Em mares de esperança, destinos desbravam.
" > ./Test/noMatches.test

# Create no matches sed file
sed 's/tempo/amor/g' ./Test/noMatches.test > ./Test/noMatches.test.result

# Create one match per line file
echo "Amor nas palavras, suave melodia,
Amor no olhar, luz do dia.
Amor nos gestos, toque de magia,
Amor na alma, eterna alegria.

Amor nas estrelas, desenho no céu,
Amor nas ondas, carinho fiel.
Amor em cada amanhecer, um novo véu,
Amor na vida, o mais doce mel.
" > ./Test/oneMatchPerLine.test

# Create one match per line sed file
sed 's/Amor/Tempo/g' ./Test/oneMatchPerLine.test > ./Test/oneMatchPerLine.test.result

# Create numbers file
echo "586081531971244570312700063339
364715173976429798500203824266
290424467946038412833543191114
463584080110557127673230980960
491218804262672662037701840049
790802744957056819386902223236
239785984262495089859898053433
405387306522324932067284355157
426059986231455973412914129533
" > ./Test/numbers.test

# Create numbers sed file
sed 's/5/Z/g' ./Test/numbers.test > ./Test/numbers.test.result

# Create special chars file
echo "-*]~%&,\$^]\n#[=<{*-*}<;\$\$\n^\"%|>+.?'\n{;_^(>=$;\n]\\\\';\\\\&}=>'" > ./Test/specialChars.test

# Create special chars sed file
sed 's/</___\"\n*\n\"___/g' ./Test/specialChars.test > ./Test/specialChars.test.result

# Run tests_______________________________________________________________________

echo "Running tests..."
echo "---------------------------------------------------------------"

# Test 1
echo "--------------------------- Test 1 ----------------------------"
echo "Test for file with no matches for <string_to_find>..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/noMatches.test tempo amor"
echo "---------------------------------------------------------------"
./sedIsForLosers Test/noMatches.test tempo amor
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/noMatches.test.result Test/noMatches.test.replace)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 2
echo "--------------------------- Test 2 ----------------------------"
echo "Test for file with one match per line..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/oneMatchPerLine.test Amor Tempo"
echo "---------------------------------------------------------------"
./sedIsForLosers Test/oneMatchPerLine.test Amor Tempo
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/oneMatchPerLine.test.result Test/oneMatchPerLine.test.replace)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 3
echo "--------------------------- Test 3 ----------------------------"
echo "Test for file with multiple matches for <string_to_find>..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/multipleMatches.test tempo amor"
echo "---------------------------------------------------------------"
./sedIsForLosers Test/multipleMatches.test tempo amor
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/multipleMatches.test.result Test/multipleMatches.test.replace)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 4
echo "--------------------------- Test 4 ----------------------------"
echo "Test for file with aleatory text..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/aleatory.test Thayná ${AVAL}"
echo "---------------------------------------------------------------"
./sedIsForLosers Test/aleatory.test Thayná "${AVAL}"
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/aleatory.test.result Test/aleatory.test.replace)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 5
echo "--------------------------- Test 5 ----------------------------"
echo "Test for file with numbers..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/numbers.test 5 Z"
./sedIsForLosers Test/numbers.test 5 Z
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/numbers.test.result Test/numbers.test.replace)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 6
echo "--------------------------- Test 6 ----------------------------"
echo "Test for file with special characters..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/specialChars.test \"<\" \"___\"
*
\"___\""
echo "---------------------------------------------------------------"
./sedIsForLosers Test/specialChars.test "<" "___\"
*
\"___"
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/specialChars.test.result Test/specialChars.test.replace)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 7
echo "--------------------------- Test 7 ----------------------------"
echo "Test for empty file..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/emptyFile.test 5 Z"
echo "---------------------------------------------------------------"
echo "[31;1mError: Input file is empty[0m" > ./Test/error1.test
./sedIsForLosers Test/emptyFile.test 5 Z > ./Test/error1.output
./sedIsForLosers Test/emptyFile.test 5 Z
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/error1.test Test/error1.output)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 8
echo "--------------------------- Test 8 ----------------------------"
echo "Test for invalid number of arguments (too few)..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/aleatory.test Thayná"
echo "---------------------------------------------------------------"
echo "[31;1mError: Invalid number of arguments
Usage: ./sedIsForLosers <filename> <string_to_find> <string_to_replace>[0m" > ./Test/error2.test
./sedIsForLosers Test/aleatory.test Thayná > ./Test/error2.output
./sedIsForLosers Test/aleatory.test Thayná
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/error2.test Test/error2.output)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 9
echo "--------------------------- Test 9 ----------------------------"
echo "Test for invalid number of arguments (too many)..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/aleatory.test Thayná ${AVAL} ${AVAL}"
echo "---------------------------------------------------------------"
echo "[31;1mError: Invalid number of arguments
Usage: ./sedIsForLosers <filename> <string_to_find> <string_to_replace>[0m" > ./Test/error3.test
./sedIsForLosers Test/aleatory.test Thayná $AVAL $AVAL > ./Test/error3.output
./sedIsForLosers Test/aleatory.test Thayná $AVAL $AVAL
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/error3.test Test/error3.output)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 10
echo "--------------------------- Test 10 ----------------------------"
echo "Test for invalid file..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/invalidFile.test Thayná ${AVAL}"
echo "---------------------------------------------------------------"
echo "[31;1mError: Input file not found[0m" > ./Test/error4.test
./sedIsForLosers Test/invalidFile.test Thayná $AVAL > ./Test/error4.output
./sedIsForLosers Test/invalidFile.test Thayná $AVAL
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/error4.test Test/error4.output)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"

# Test 11
echo "--------------------------- Test 11 ----------------------------"
echo "Test for empty <string_to_find>..."
echo "---------------------------------------------------------------"
echo "./sedIsForLosers Test/aleatory.test \"\" Thayná"
echo "---------------------------------------------------------------"
echo "[31;1mError: Empty string <string_to_find>.[0m" > ./Test/error5.test
./sedIsForLosers Test/aleatory.test "" Thayná > ./Test/error5.output
./sedIsForLosers Test/aleatory.test "" Thayná
echo "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/error5.test Test/error5.output)
	if [ -z "$diff_output" ]; then
		echo "${green}Passed${reset}"
	else
		echo "${red}Failed${reset}"
	fi
fi
echo "${blue}---------------------------------------------------------------"
echo "Tests finished..."
echo "---------------------------------------------------------------${reset}"
