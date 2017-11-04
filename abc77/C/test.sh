if [ -e input1.txt ]; then
	./main < input1.txt > my_output.txt
	diff -u output1.txt my_output.txt
fi

if [ -e input2.txt ]; then
	./main < input2.txt > my_output.txt
	diff -u output2.txt my_output.txt
fi

if [ -e input3.txt ]; then
	./main < input3.txt > my_output.txt
	diff -u output3.txt my_output.txt
fi

if [ -e input4.txt ]; then
	./main < input4.txt > my_output.txt
	diff -u output4.txt my_output.txt
fi

if [ -e input5.txt ]; then
	./main < input5.txt > my_output.txt
	diff -u output5.txt my_output.txt
fi

if [ -e input6.txt ]; then
	./main < input6.txt > my_output.txt
	diff -u output6.txt my_output.txt
fi