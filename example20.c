//Ass:A town has population 80,000. From then 61% are Men and out of them 81% are literate.
//Total 15% womwn are illterrate.Calculate and show count of total men and women,total 
//litrate,illterate men and women and also print percentage of literacy and illteracy of 




void main()

{
	long popn=80000L;
	long tmen,lmen,imen,twomen,lwomen,iwomen;
	float lit,illit;
	
	printf("\n Total population=%ld",popn);
	
	tmen=popn*61/100;
	printf("\n Total men=%ld",tmen);
	
	lmen=tmen*81/100;
	printf("\n Literate men=%ld",lmen);
	
	imen=tmen-lmen;
	printf("\n Illiterate men=%ld",imen);
	
	twomen=popn-tmen;
	iwomen=twomen*15/100;
	lwomen=twomen-iwomen;
	
	printf("\n Total women=%ld",twomen);
	printf("\n Literate women=%ld",lwomen);
	printf("\n Illiterate womwn=%ld",iwomen);
	
	lit=(lmen+lwomen)*100.0/popn;
	illit=100.0-lit;
	
	printf("\n Total literacy of Town=%.2f",lit);
	printf("\n Total illteracy of Town=%.2f",illit);
	
	
	
}
