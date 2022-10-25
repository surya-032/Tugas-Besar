#include <stdio.h>
#define BIAYAADM 50.00
//cretae by : Komang Bayu Lobi Hartawan_2205551025
//create by : I Putu Gede Surya Pratama_2205551032
//Tugas Pembayaran Rekening Air 

int main(){
	int pilih;
	char kategori;
	float bpm;
	float biaya;
	float tarif1;
	float tarif2;
	float tarif3;
	float pemakaian_lalu;
	float pemakaian_ini;
	float besar_pemakaian;
	float denda;
	float total;
	char pilihan='y';
	int date;
	char nama[30];
	do{	
	system ("cls");
	printf ("\n\t====================================================================================================\n");
	printf ("\n\t\t\t\t\t\t| PEMBAYARAN REKENING AIR |\n");
	printf ("\n\t====================================================================================================\n\n");
	printf("\t\t\t\t\tSELAMAT DATANG DI PROGRAM PEMBAYARAN AIR\n\n");
	printf("\t\t\t--------------------------------------------------------------------------\n");
			printf ("\t\t\t\tBERIKUT PETUNJUK UNTUK MELAKUKAN PERHITUNGAN PEMBAYARAN\n");
			printf("\t\t\t--------------------------------------------------------------------------\n");
			printf("\t\t\t| 1  | Masukan Kelompok Anda                                            |\n");
			printf("\t\t\t| 2  | Masukan Nama Anda                                                |\n");
			printf("\t\t\t| 3  | Masukan Golongan Pemakai                                         |\n");
			printf("\t\t\t| 4  | Masukan Tanggal Pembayaran                                       |\n");
			printf("\t\t\t|    | (Catatan: Jika Pembayaran melewati Jatuh Tempo akan dikenakan    |\n");
			printf("\t\t\t|    | denda untuk >100 denda 20 dan <100 denda 10)                     |\n");
			printf("\t\t\t| 5  | Masukan Jumlah Pemakaian Bulan lalu                              |\n");
			printf("\t\t\t| 6  | Masukan Jumlah Pemakaian Bulan ini                               |\n");
			printf("\t\t\t| 7  | Maka Perhitungan akan diproses                                   |\n");
			printf("\t\t\t| 8  | Selesai                                                          |\n");
			printf("\t\t\t--------------------------------------------------------------------------\n\n");
			
			printf("\t\t\t--------------------------------------------------------------------------\n");
			printf("\t\t\t| NO |                            PILIH MENU                            |\n");
			printf("\t\t\t--------------------------------------------------------------------------\n");
			printf("\t\t\t| 1  | KELOMPOK 1 (NON NIAGA BERSUBSIDI)                                |\n");
			printf("\t\t\t| 2  | KELOMPOK 2 (NON NIAGA TANPA BERSUBSIDI)                          |\n");
			printf("\t\t\t| 3  | KELOMPOK 3 (NIAGA)                                               |\n");
			printf("\t\t\t--------------------------------------------------------------------------\n\n");
	
			printf("\t\t\t--------------------------------------------------------------------------\n");
			printf ("\t\t\tMASUKAN KELOMPOK ANDA :| ");
			scanf("%d", &pilih);
			printf("\t\t\t--------------------------------------------------------------------------\n");
	switch(pilih){
		case 1:
			
			printf("\n\n\n\t\t\t\t\t\t\tDATA KELOMPOK I\n\n");
			printf("\t\t\t--------------------------------------------------------------------------\n\n");
			printf("\t\t\t\t\t----------   NON NIAGA BERSUBSIDI   ----------\n");
			printf("\t\t\t\t\t----------------------------------------------\n\n\n");
			printf("\t=========================================================================================================\n");
			printf("\t| NO  |     KELOMPOK RUMAH      | GOLONGAN | TINGKAT PEMAKAIAN |  TARIF PER M3  | MAX PEMAKIAN PERBULAN |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  1  | Rumah Tangga A1 450 VA  |   D1-1   |      0-10 MP      |     1.780      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     2.060      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     5.880      |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  2  | Rumah Tangga A1 900 VA  |   D1-2   |      0-10 MP      |     2.060      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     2.340      |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     5.940      |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  3  | Rumah Tangga A2 450 VA  |   D2-1   |      0-10 MP      |     2.340      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     2.620      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     6.000      |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  4  | Rumah Tangga A2 900 VA  |   D2-2   |      0-10 MP      |     2.620      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     2.900      |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     6.060      |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  5  | Rumah Tangga A3 450 VA  |   D3-1   |      0-10 MP      |     2.900      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     3.180      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     6.120      |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  6  | Rumah Tangga A3 900 VA  |   D3-2   |      0-10 MP      |     3.180      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     3.460      |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     6.180      |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  7  | Rumah Tangga A4 450 VA  |   D4-1   |      0-10 MP      |     3.460      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     3.740      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     6.240      |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  8  | Rumah Tangga A4 900 VA  |   D4-2   |      0-10 MP      |     3.740      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     4.020      |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     6.300      |                       |\n");
			printf("\t=========================================================================================================\n\n\n");
			
			
			
			printf("\t---------------------------------------------------------------------------------------------------------\n");
			printf ("\tMasukan Nama Anda : ");
			scanf (" %s", &nama);	
			printf("\tMasukan Nomor Golongan Pemakai : ");
			scanf(" %c", &kategori);
			printf("\tPembayaran Jatuh Tempo Pada Tanggal 20\n");
			printf("\tMasukan Tanggal : ");
			scanf("%d", &date);

				if (kategori=='1'){
					bpm=10.00;
					printf("\tMulai Hitung Pembayaran Rekening Air \n\n" );
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=1.780*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=1.780*10;
					tarif2=2.060*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=1.780*10;
					tarif2=2.060*10;
					tarif3=5.880*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori=='2'){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : )");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=2.340*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=2.340*10;
					tarif2=2.620*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=2.340*10;
					tarif2=2.620*10;
					tarif3=5.940*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori=='3'){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : )");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : )");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=2.060*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=2.340*10;
					tarif2=2.620*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=2.340*10;
					tarif2=2.620*10;
					tarif3=6.000*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori=='4'){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : )");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : )");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=2.340*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=2.620*10;
					tarif2=2.900*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=2.620*10;
					tarif2=2.900*10;
					tarif3=6.060*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori=='5'){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3): ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3): ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=2.900*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=2.900*10;
					tarif2=3.180*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=2.900*10;
					tarif2=3.180*10;
					tarif3=6.120*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
						if (kategori=='6'){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=3.180*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=3.180*10;
					tarif2=3.460*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=3.180*10;
					tarif2=3.460*10;
					tarif3=6180*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori=='7'){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3 : )");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3 : )");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=3.460*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=3.460*10;
					tarif2=3.740*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=3.460*10;
					tarif2=3.740*10;
					tarif3=6.240*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
				    if (kategori=='8'){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=3.740*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=3.740*10;
					tarif2=4.020*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=3.740*10;
					tarif2=4.020*10;
					tarif3=6.300*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if(besar_pemakaian>20){
						denda=20.00;
						printf("\tDenda : %.2f\n", denda);
					}
					else if(besar_pemakaian<20){
						denda=10.00;
						printf("\tDenda : %.2f\n", denda);
					}
				
					
					printf("\tBPM : %.2f\n", bpm);
					printf("\tBiaya Administrasi : Rp %.2f\n", BIAYAADM);
					printf("\n\tTotal : Rp %.2f+%.2f+%.2f+%.2f = %.2f\n", biaya, denda, bpm, BIAYAADM, BIAYAADM+bpm+biaya+denda);
					printf("\tApakah Anda Ingin Memasukan Ulang?(y/t)\n");
					printf("\n\tPilihan Saya : ");
					scanf(" %c", &pilihan);
				    break;
			
		case 2:
			printf("\n\n\n\t\t\t\t\t\t\tDATA KELOMPOK II\n\n");
			printf("\t\t\t--------------------------------------------------------------------------\n\n");
			printf("\t\t\t\t\t---------- NON NIAGA TANPA BERSUBSIDI ---------\n");
			printf("\t\t\t\t\t----------------------------------------------\n\n\n");
			printf("\t=========================================================================================================\n");
			printf("\t| NO  |     KELOMPOK RUMAH      | GOLONGAN | TINGKAT PEMAKAIAN |  TARIF PER M3  | MAX PEMAKIAN PERBULAN |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  1  | Rumah Tangga A1 1300 VA |   D1-3   |      0-10 MP      |     6.340      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     9.200      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     9.600      |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  2  | Rumah Tangga A1>1300 VA |   D1-4   |      0-10 MP      |     6.420      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     9.350      |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     9.650      |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  3  | Rumah Tangga A2 1300 VA |   D2-3   |      0-10 MP      |     6.490      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     9.500      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     9.800      |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  4  | Rumah Tangga A2>1300 VA |   D2-4   |      0-10 MP      |     6.570      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     9.650      |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     9.950      |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  5  | Rumah Tangga A3 1300 VA |   D3-3   |      0-10 MP      |     6.640      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     9.800      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     10.100     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  6  | Rumah Tangga A3>1300 VA |   D3-4   |      0-10 MP      |     6.720      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     9.950      |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     10.250     |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  7  | Rumah Tangga A4 1300 VA |   D4-3   |      0-10 MP      |     6.790      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.100     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     10.400     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  8  | Rumah Tangga A4>1300 VA |   D4-4   |      0-10 MP      |     6.870      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.250     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     10.550     |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  9  | Rumah Tangga B 450 VA   |   D5-1   |      0-10 MP      |     6.940      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.400     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     10.700     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|     | Rumah Tangga B 900 VA   |   D5-2   |      0-10 MP      |     7.020      |          10           |\n");
			printf("\t|  10 |                         |          |      11-20 MP     |     10.550     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     10.850     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  11 | Rumah Tangga B 1300 VA  |   D5-3   |      0-10 MP      |     7.090      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.700     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     11.000     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  12 | Rumah Tangga B>1300 VA  |   D5-4   |      0-10 MP      |     7.170      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.850     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     11.150     |                       |\n");
			printf("\t=========================================================================================================\n\n\n");
			
			printf("\t---------------------------------------------------------------------------------------------------------\n");
			printf ("\tMasukan Nama Anda : ");
			scanf (" %s", &nama);	
			printf("\tMasukan Nomor Golongan Pemakai :");
			scanf(" %d", &kategori);
			printf("\tPembayaran Jatuh Tempo Pada Tanggal 20\n");
			printf("\tMasukan Tanggal : ");
			scanf("%d", &date);
				if (kategori==1){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.340*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.340*10;
					tarif2=9.200*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.340*10;
					tarif2=9.200*10;
					tarif3=9.600*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==2){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.420*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.420*10;
					tarif2=9.350*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.420*10;
					tarif2=9.350*10;
					tarif3=9.650*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==3){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.490*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.490*10;
					tarif2=9.500*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.490*10;
					tarif2=9.500*10;
					tarif3=9.800*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==4){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.570*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.570*10;
					tarif2=9.650*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.570*10;
					tarif2=9.650*10;
					tarif3=9.950*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==5){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.640*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.640*10;
					tarif2=9.800*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.640*10;
					tarif2=9.800*10;
					tarif3=10.100*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==6){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.720*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.720*10;
					tarif2=9.950*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.720*10;
					tarif2=9.950*10;
					tarif3=10.250*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==7){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.790*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.790*10;
					tarif2=10.100*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.790*10;
					tarif2=10.100*10;
					tarif3=10.400*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
				    if (kategori==8){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.870*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.870*10;
					tarif2=10.250*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.870*10;
					tarif2=10.250*10;
					tarif3=10.550*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==9){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=6.940*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=6.940*10;
					tarif2=10.400*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=6.940*10;
					tarif2=10.400*10;
					tarif3=10.700*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==10){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=7.020*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=7.020*10;
					tarif2=10.550*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=7.020*10;
					tarif2=10.550*10;
					tarif3=10.850*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==11){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=7.090*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=7.090*10;
					tarif2=10.700*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=7.090*10;
					tarif2=10.700*10;
					tarif3=11.000*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==12){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=7.170*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=7.170*10;
					tarif2=10.850*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=7.170*10;
					tarif2=10.850*10;
					tarif3=11.150*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %.3f\n", biaya);
					}
					}
				
					printf("\tBPM : %.2f\n", bpm);
					printf("\tBiaya Administrasi : Rp %.2f\n", BIAYAADM);
					printf("\n\tTotal : Rp %.2f+%.2f+%.2f+%.2f = %.2f\n", biaya, denda, bpm, BIAYAADM, BIAYAADM+bpm+biaya+denda);
					printf("\tApakah Anda Ingin Memasukan Ulang?(y/t)\n");
					printf("\n\tPilihan Saya : ");
					scanf(" %c", &pilihan);
					break;
			
		case 3:
			printf("\n\n\n\t\t\t\t\t\t\tDATA KELOMPOK III\n\n");
			printf("\t\t\t--------------------------------------------------------------------------\n\n");
			printf("\t\t\t\t\t\t----------   NIAGA   ---------\n");
			printf("\t\t\t\t\t----------------------------------------------\n\n\n");
			printf("\t=========================================================================================================\n");
			printf("\t| NO  |     KELOMPOK NIAGA      | GOLONGAN | TINGKAT PEMAKAIAN |  TARIF PER M3  | MAX PEMAKIAN PERBULAN |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  1  | Niaga Kecil 450 VA      |   E1-1   |      0-10 MP      |     9.200      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     9.850      |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     10.950     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  2  | Niaga Kecil 900 VA      |   E1-2   |      0-10 MP      |     9.500      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.150     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     11.250     |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  3  | Niaga Kecil 1300 VA     |   E1-3   |      0-10 MP      |     9.800      |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.450     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     11.550     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  4  | Niaga Kecil >1300 VA    |   E1-4   |      0-10 MP      |     10.100     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     10.750     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     11.850     |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  5  | Niaga Sedang 450 VA     |   E2-1   |      0-10 MP      |     10.400     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     11.050     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     12.150     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  6  | Niaga Sedang 900 VA     |   E2-2   |      0-10 MP      |     10.700     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     11.350     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     12.550     |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  7  | Niaga Sedang 1300 VA    |   E2-3   |      0-10 MP      |     11.000     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     11.650     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     13.150     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  8  | Niaga Sedang >1300 VA   |   E2-4   |      0-10 MP      |     11.300     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     11.950     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     13.950     |                       |\n");
			printf("\t=========================================================================================================\n");
			printf("\t|  9  | Niaga Besar 450 VA      |   E3-1   |      0-10 MP      |     11.600     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     12.250     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     14.750     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|     | Niaga Besar 900 VA      |   E3-2   |      0-10 MP      |     11.900     |          10           |\n");
			printf("\t|  10 |                         |          |      11-20 MP     |     12.550     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     15.050     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  11 | Niaga Besar 1300 VA     |   E3-3   |      0-10 MP      |     12.200     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     12.850     |                       |\n");
			printf("\t|     |                         |          |      >20 MP       |     15.850     |                       |\n");
			printf("\t|-------------------------------------------------------------------------------------------------------|\n");
			printf("\t|  12 | Niaga Besar >1300 VA    |   E3-4   |      0-10 MP      |     12.500     |          10           |\n");
			printf("\t|     |                         |          |      11-20 MP     |     13.150     |                       |\n");
			printf("\t|     |                         |          |      0-10 MP      |     16.650     |                       |\n");
			printf("\t=========================================================================================================\n\n\n");
			
			printf("\t---------------------------------------------------------------------------------------------------------\n");
			printf ("\tMasukan Nama Anda : ");
			scanf (" %s", &nama);
			printf("\tMasukan Golongan Pemakai :");
			scanf(" %d", &kategori);
			printf("\tPembayaran Jatuh Tempo Pada Tanggal 20\n");
			printf("\tMasukan Tanggal : ");
			scanf("%d", &date);
				if (kategori==1){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=9.200*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=9.200*10;
					tarif2=9.850*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=9.200*10;
					tarif2=9.850*10;
					tarif3=10.950*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==2){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=9.500*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=9.500*10;
					tarif2=10.150*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=9.500*10;
					tarif2=10.150*10;
					tarif3=11.250*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==3){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=9.800*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=9.800*10;
					tarif2=10.450*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=9.800*10;
					tarif2=10.450*10;
					tarif3=11.550*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==4){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=10.100*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=10.100*10;
					tarif2=10.750*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=10.100*10;
					tarif2=10.750*10;
					tarif3=11.850*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==5){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=10.400*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=10.400*10;
					tarif2=11.050*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=10.400*10;
					tarif2=11.050*10;
					tarif3=12.150*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==6){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=10.700*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=10.700*10;
					tarif2=11.350*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=10.700*10;
					tarif2=11.350*10;
					tarif3=12.550*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==7){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=11.000*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=11.000*10;
					tarif2=11.650*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=11.000*10;
					tarif2=11.650*10;
					tarif3=13.150*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
				    if (kategori==8){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=11.300*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=11.300*10;
					tarif2=11.950*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=11.300*10;
					tarif2=11.950*10;
					tarif3=13.950*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==9){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=11.600*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=11.600*10;
					tarif2=12.250*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=11.600*10;
					tarif2=12.250*10;
					tarif3=14.750*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==10){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=11.900*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=11.900*10;
					tarif2=12.550*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=11.900*10;
					tarif2=12.550*10;
					tarif3=15.050*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==11){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=12.200*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=12.200*10;
					tarif2=12.850*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=12.200*10;
					tarif2=12.850*10;
					tarif3=15.850*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %3f\n", biaya);
					}
					}
					if (kategori==12){
					bpm=10.00;
					printf("\tMasukan Jumlah Pemakaian Bulan Lalu(Dalam M3) : ");
					scanf("%f", &pemakaian_lalu);
					printf("\tMasukan Jumlah Pemakaian Bulan ini(Dalam M3) : ");
					scanf("%f", &pemakaian_ini);
					besar_pemakaian = pemakaian_ini-pemakaian_lalu;
					printf("\tJumlah Pemakaian Bulan Ini : %2.f m3\n", besar_pemakaian);
					if(besar_pemakaian>0 && besar_pemakaian<=10){
					biaya=12.500*besar_pemakaian;
					printf("\tBiaya Pemakaian Bulan Ini Untuk 10 m3 Kebawah : Rp %.3f\n", biaya);
					}
					else if(besar_pemakaian>=11 && besar_pemakaian<=20){
					tarif1=12.500*10;
					tarif2=13.150*(besar_pemakaian-10);
					printf("\tBiaya Pemakaian Minimum 10 Pertama : Rp %.3f\n", tarif1);
					printf("\tBiaya Pemakaian Minimum Selanjutnya : Rp %.3f\n", tarif2);
					biaya=tarif1+tarif2;
					}
					else if(besar_pemakaian>20){
					tarif1=12.500*10;
					tarif2=13.150*10;
					tarif3=16.650*(besar_pemakaian-20);
					biaya=tarif1+tarif2+tarif3;
					printf("\tBiaya Pemakaian Bulan Ini Jika Lebih Dari 20 m3: Rp %.3f\n", biaya);
					}
					}
					if(besar_pemakaian>20){
						denda=20.00;
						printf("\tDenda : %.2f\n", denda);
					}
					else if(besar_pemakaian<20){
						denda=10.00;
						printf("\tDenda : %.2f\n", denda);
					}
				
					
					printf("\tBPM : %.2f\n", bpm);
					printf("\tBiaya Administrasi : Rp %.2f\n", BIAYAADM);
					printf("\n\tTotal : Rp %.2f+%.2f+%.2f+%.2f = %.2f\n", biaya, denda, bpm, BIAYAADM, BIAYAADM+bpm+biaya+denda);
					printf("\tApakah Anda Ingin Memasukan Ulang?(y/t)\n");
					printf("\n\tPilihan Saya : ");
					scanf(" %c", &pilihan);
					break;	
		}
	
	}while(pilihan=='y');	
//					printf("\t+|=====================================================================================================|+\n\n");
//					printf("\t+|                     TERIMA KASIH TELAH MENGHITUNG PEMBAYARAN REKENING AIR                           |+\n\n");
//					printf("\t+|=====================================================================================================|+\n\n");	
}


