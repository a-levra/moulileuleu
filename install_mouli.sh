rm ./moulileuleu
cp ./moulileuleu_template ./moulileuleu
sed -i "s|mouli_dir=|mouli_dir=${PWD}|g" moulileuleu
export MOULILEULEU_PATH=`echo $PATH | cut -d: -f1`;

rm "$MOULILEULEU_PATH"/moulileuleu
cp moulileuleu $MOULILEULEU_PATH
echo "✅The moulileuleu has been installed at $MOULILEULEU_PATH ✅"
