# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_test.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/07 12:17:34 by thabeck-          #+#    #+#              #
#    Updated: 2024/01/08 12:48:30 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Run tests for CPP-09-ex01
# Usage: make test -OU- make && ./run_tests.sh

# Compile program
# make --no-print-directory

# Colors
red='\033[31;1m'
green='\033[32;1m'
reset='\033[0m'

# Create Test folder
mkdir -p Test

# Create Test files_______________________________________________________________

echo -e "---------------- REVERSE POLISH NOTATION TEST -----------------"
echo "---------------------------------------------------------------"
echo "Creating test files..."
echo "---------------------------------------------------------------"
echo "subject1.result..."
echo "subject2.result..."
echo "subject3.result..."
echo "aleatory1.result..."
echo "aleatory2.result..."
echo "aleatory3.result..."
echo "noArgumentError.result..."
echo "outOfRangeError.result..."
echo "fewOperandsError.result..."
echo "invalidCharError.result..."
echo "invalidCharSubjectError.result..."
echo "divisionByZeroError.result..."
echo "invalidExpressionError.result..."
echo -e "---------------------------------------------------------------"

echo "[36;1m42[0m" > ./Test/subject1.result
echo "[36;1m42[0m" > ./Test/subject2.result
echo "[36;1m0[0m" > ./Test/subject3.result
echo "[36;1m9[0m" > ./Test/aleatory1.result
echo "[36;1m15[0m" > ./Test/aleatory2.result
echo "[36;1m-1[0m" > ./Test/aleatory3.result

echo "[31;1mError: invalid number of arguments.
Usage: ./RPN \"<expression>\"[0m" > ./Test/noArgumentError.result
echo "[36;1m[31;1mError: Number out of permitted range[0m" > ./Test/outOfRangeError.result
echo "[36;1m[31;1mError: Too few operands[0m" > ./Test/fewOperandsError.result
echo "[36;1m[31;1mError: Invalid character in expression[0m" > ./Test/invalidCharError.result
echo "[36;1m[31;1mError: Invalid character in expression[0m" > ./Test/invalidCharSubjectError.result
echo "[36;1m[31;1mError: Division by zero[0m" > ./Test/divisionByZeroError.result
echo "[36;1m[31;1mError: Invalid expression[0m" > ./Test/invalidExpressionError.result

# Run tests_______________________________________________________________________

echo -e "---------------------------------------------------------------"
echo -e "Running tests..."
echo -e "---------------------------------------------------------------"

# Test 1
echo -e "--------------------------- Test 1 ----------------------------"
echo -e "Test for valid expression, from subject..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\""
echo -e "---------------------------------------------------------------"
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +" > ./Test/subject1.output
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/subject1.result Test/subject1.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 2
echo -e "--------------------------- Test 2 ----------------------------"
echo -e "Test for valid expression, from subject..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"7 7 * 7 -\""
echo -e "---------------------------------------------------------------"
./RPN "7 7 * 7 -" > ./Test/subject2.output
./RPN "7 7 * 7 -"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/subject2.result Test/subject2.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 3
echo -e "--------------------------- Test 3 ----------------------------"
echo -e "Test for valid expression, from subject..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"1 2 * 2 / 2 * 2 4 - +\""
echo -e "---------------------------------------------------------------"
./RPN "1 2 * 2 / 2 * 2 4 - +" > ./Test/subject3.output
./RPN "1 2 * 2 / 2 * 2 4 - +"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/subject3.result Test/subject3.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 4
echo -e "--------------------------- Test 4 ----------------------------"
echo -e "Test for valid expression, aleatory..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"1 6 1 - + 2 / 1 2 + * \""
echo -e "---------------------------------------------------------------"
./RPN "1 6 1 - + 2 / 1 2 + * " > ./Test/aleatory1.output
./RPN "1 6 1 - + 2 / 1 2 + * "
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/aleatory1.result Test/aleatory1.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 5
echo -e "--------------------------- Test 5 ----------------------------"
echo -e "Test for valid expression, aleatory..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"5 9 * 3 /\""
echo -e "---------------------------------------------------------------"
./RPN "5 9 * 3 /" > ./Test/aleatory2.output
./RPN "5 9 * 3 /"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/aleatory2.result Test/aleatory2.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 6
echo -e "--------------------------- Test 6 ----------------------------"
echo -e "Test for valid expression, aleatory..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"2 3 -\""
echo -e "---------------------------------------------------------------"
./RPN "2 3 -" > ./Test/aleatory3.output
./RPN "2 3 -"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/aleatory3.result Test/aleatory3.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 7
echo -e "--------------------------- Test 7 ----------------------------"
echo -e "Test for invalid number of arguments (too few)..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN"
echo -e "---------------------------------------------------------------"
./RPN > ./Test/noArgumentError.output
./RPN
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/noArgumentError.result Test/noArgumentError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 8
echo -e "--------------------------- Test 8 ----------------------------"
echo -e "Test for number out of permitted range..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"2 11 +\""
echo -e "---------------------------------------------------------------"
./RPN "2 11 +" > ./Test/outOfRangeError.output
./RPN "2 11 +"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/outOfRangeError.result Test/outOfRangeError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 9
echo -e "--------------------------- Test 9 ----------------------------"
echo -e "Test for expression with too few operands..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"2 +\""
echo -e "---------------------------------------------------------------"
./RPN "2 +" > ./Test/fewOperandsError.output
./RPN "2 +"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/fewOperandsError.result Test/fewOperandsError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 10
echo -e "--------------------------- Test 10 ---------------------------"
echo -e "Test for expression with invalid character..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"2 2 %\""
echo -e "---------------------------------------------------------------"
./RPN "2 2 %" > ./Test/invalidCharError.output
./RPN "2 2 %"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/invalidCharError.result Test/invalidCharError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 11
echo -e "--------------------------- Test 11 ---------------------------"
echo -e "Test for expression with invalid character, from subject..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"(1 + 1)\""
echo -e "---------------------------------------------------------------"
./RPN "(1 + 1)" > ./Test/invalidCharSubjectError.output
./RPN "(1 + 1)"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/invalidCharSubjectError.result Test/invalidCharSubjectError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 12
echo -e "--------------------------- Test 12 ---------------------------"
echo -e "Test for division by zero..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"2 0 /\""
echo -e "---------------------------------------------------------------"
./RPN "2 0 /" > ./Test/divisionByZeroError.output
./RPN "2 0 /"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/divisionByZeroError.result Test/divisionByZeroError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"	
	fi
fi
echo -e "---------------------------------------------------------------"

# Test 13
echo -e "--------------------------- Test 13 ---------------------------"
echo -e "Test for invalid expression..."
echo -e "---------------------------------------------------------------"
echo -e "./RPN \"2 2 2 +\""
echo -e "---------------------------------------------------------------"
./RPN "2 2 2 +" > ./Test/invalidExpressionError.output
./RPN "2 2 2 +"
echo -e "---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/invalidExpressionError.result Test/invalidExpressionError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}Passed${reset}"
	else
		echo -e "${red}Failed${reset}"	
	fi
fi
echo -e "---------------------------------------------------------------"
echo -e "Tests finished..."
echo -e "---------------------------------------------------------------${reset}"
