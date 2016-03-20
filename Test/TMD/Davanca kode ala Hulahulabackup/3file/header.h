//Tugas Masa Depan
/*	Nama:Fadhil Farras Haidar N
	NIM: 1501496
*/

/*Saya Fadhil Farras Haidar N tidak melakukan kecurangan seperti yang telah 
dispesifikasikan pada tugas masa depan Algoritma dan Pemrograman I pada saat mengerjakan Tugas Masa Depan Algoritma 
dan Pemrograman I. Jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. 
Aamiin.*/

/*Tugas Masa Depan IK - 310 Algoritma dan Pemrograman I 

Bentuk kecurangan:
1. mengetikkan kode program yang dikumpulkan dengan melihat kode program teman yang juga untuk kepentingan dikumpulkan- 
   pada even yang sama
2. mengetikkan kode program yang dikumpulkan berdasarkan petunjuk kode program dari omongan teman (dalam bentuk sudah kode program)
3. mengumpulkan kode program milik orang lain (walau sudah dimodifikasi) (termasuk kode program hasil copy paste bukan dari 
   kode program milik sendiri/mengetik sendiri)
4. memberikan instruksi untuk mengetikkan kode program terkait kode program yang dikumpulkan
5. memberikan kode program yang dikumpulkan ke orang lain untuk dilihat dan dicontek orang lain dalam kode program orang 
   lain yang juga dikumpulkan
6. memiliki alur program yang sama, bahkan memiliki lebih besar atau sama dengan 5 blok kode program yang sama

Jika terindikasi melakukan kecurangan di atas maka minimal akan mendapat sanksi pemotongan nilai minimal 50% dari nilai 
seharusnya, maksimal dianggap tidak mengerjakan tugas masa depan (jika sudah memiliki jejak rekam curang sebelumnya, 
dapat dikenakan sanksi nilai mata kuliah menjadi E). Keputusan dapat dilakukan secara sepihak oleh tim pengajar pemrograman 
(dosen dan asisten).*/

#include <stdio.h> //library standar input output
#include <string.h> //library fungsi string

//proses untuk memilih string
void erabaStr(int i, int sumString, char cmdString[sumString][64], int sumInt, int arrayInt[sumInt], char opushonStr[sumInt][64]);

//print string yang terpilih
void erabaPrint(int sumInt, char opushonStr[sumInt][64]);

//print pola string baris ke-1 
void gyo1(int theBold, int sumInt, char opushonStr[sumInt][64]);

//print pola string baris ke-2 
void gyo2(int theBold, int sumInt, char opushonStr[sumInt][64]);

//print pola string baris ke-3 
void gyo3(int theBold, int sumInt, char opushonStr[sumInt][64]);

//print pola string baris ke-4 
void gyo4(int theBold, int sumInt, char opushonStr[sumInt][64]);

//print pola string baris ke-5 
void gyo5(int theBold, int sumInt, char opushonStr[sumInt][64]);