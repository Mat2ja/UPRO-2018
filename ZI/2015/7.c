/* Nadopuniti programski odsječak kojim se na zaslonu ispisuje veličina datoteke
mjerenja.txt izražena u broju
bajtova (iznad svake crte napisati jednu naredbu) :*/

... /* otvoren je tok podataka dmjerenja za čitanje iz datoteke mjerenja.txt */
    fseek(dmjerenja, 0L, SEEK_SET);
        printf("%lf", ftell(dmjerenja));
...
}