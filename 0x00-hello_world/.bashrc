newfile(){
if [ -e $1 ]
then 
	echo "fie already exists"
else 
	echo "#!/bin/bash" > $1
	echo "#description" >> $1

fi

}
