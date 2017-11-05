rm -rf work
mkdir work
cd work
mkdir $1
cd $1
~/src/compro/compro.sh A
~/src/compro/compro.sh B
~/src/compro/compro.sh C
~/src/compro/compro.sh D

touch fetch.sh
chmod 777 fetch.sh
echo "cd A" >> fetch.sh
echo "ruby ../../atcoder.rb $1 A" >> fetch.sh
echo "cd ../B" >> fetch.sh
echo "ruby ../../atcoder.rb $1 B" >> fetch.sh
echo "cd ../C" >> fetch.sh
echo "ruby ../../atcoder.rb $1 C" >> fetch.sh
echo "cd ../D" >> fetch.sh
echo "ruby ../../atcoder.rb $1 D" >> fetch.sh
