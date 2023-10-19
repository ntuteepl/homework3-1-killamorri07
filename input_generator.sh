#!/bin/bash

random_generator()
{
        num=$1
        minimum=$2
        maximum=$3

        #Check the taken values are valid
        if [[ $maximum < $minimum ]]; then
        echo "Maximum value can't be lower than minimum value"
        exit 1
        fi

        #Find out the difference between the numbers
        diff=$(($maximum-$minimum))

        #Check the difference value
        if [[ $diff == 1 ]]; then
                echo "The range of numbers must be more than 1"
                exit 1
        fi

        for (( i=1; i<=num; i++ ))
        do
                #Generate the random number
                randomNumber[$i]=$(($minimum + $RANDOM % $maximum))
        done
}

case "$1" in	
	hw3-1)
       		random_generator 1 1 9999
		echo ${randomNumber[1]}
      		;;
	hw3-2)
		for i in {1..3}
		do
       			random_generator 2 1 24
			while [ ${randomNumber[2]} -le ${randomNumber[1]} ]
			do
				random_generator 2 1 24
			done
			echo -n "${randomNumber[1]} ${randomNumber[2]} "
		done
		echo ""
      		;;
	hw3-3)
       		random_generator 2 1 9999
		echo "${randomNumber[1]} ${randomNumber[2]}"
      		;;
	hw3-4)
		number=( '0' '1' '2' '3' '4' '5' '6' '7' '8' '9' )
		random_shuffle1=( $(shuf -e "${number[@]}") )
		random_shuffle2=( $(shuf -e "${number[@]}") )
		echo "${random_shuffle1[1]}${random_shuffle1[3]}${random_shuffle1[5]}${random_shuffle1[7]} ${random_shuffle2[2]}${random_shuffle2[4]}${random_shuffle2[6]}${random_shuffle2[8]} 0"
      		;;
esac
