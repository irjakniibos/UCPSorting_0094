/*1.Jelaskan bagaimana algoritma InsertionSort membandingkan serta menukar elemen-elemen.?
Jawaban Insertion Sort bekerja seperti cara kita mengurutkan kartu di tangan. Awalnya, kita hanya memegang satu kartu, jadi kartu itu sudah terurut dengan sendirinya.
lalu,kita ambil satu kartu lagi dari tumpukan.kemudian bandingkan kartu baru itu dengan kartu yang sudah ada di tangan. Jika kartu baru lebih kecil nilainya, kita sisipkan kartu itu di depan kartu yang sudah ada di tangan. Jika kartu baru lebih besar, kita letakkan di belakang kartu yang ada di tangan.
selanjutnya, kita ambil satu kartu lagi dari tumpukan. Kali ini, kita bandingkan kartu baru dengan kartu-kartu yang sudah ada di tangan. Jika kartu baru lebih kecil dari kartu pertama, kita sisipkan kartu itu di paling depan. Jika kartu baru lebih besar dari kartu pertama tapi lebih kecil dari kartu kedua, kita sisipkan di antara kartu pertama dan kedua. Begitu seterusnya, kita cari posisi yang tepat untuk menyisipkan kartu baru di antara kartu-kartu yang sudah terurut di tangan.
proses ini terus berlanjut. Kita ambil satu kartu lagi dari tumpukan, bandingkan dengan kartu-kartu yang sudah terurut di tangan, lalu sisipkan kartu baru itu di posisi yang tepat.
*/

/*2.Jelaskan bagaimana algoritma SelectionSort membandingkan serta menukar elemen-elemen.?
pertama selection Sort membandingkan  degan cara mencari nilai minimum dalam array yang belum urut
pada setiap iterasinya ada algoritma yang mencari nilai minimum dalam bagian array yang belum urut kemudian dilakukan dengan membandingkan setiap elemen dalam bagian arrray yang belum terurut dengan nilai minimum sementaraa.
kemudiann menukar nilai minimum dengan elemen pertama dalam bagian array yang belum urut
setelah menemukan nilai minimum dalam bagian array yang belum terurut
algoritma akan menukar nilai minimum tersebut dengan elemen pertama dalam bagian array yang belum terurut.
dan kemudian mengulang proses untuk bagian array yang belum terurut berikutnya: Langkah 1 dan 2 diulang untuk bagian array yang belum terurut berikutnya, yaitu mulai dari elemen kedua hingga akhir array.
dan terakhir Iterasi berakhir ketika seluruh elemen terurut: Proses ini berlanjut hingga seluruh elemen dalam array terurut secara keseluruhan.*/

/*3. Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan.
jawabannya 
pertama menghitung jumlah perbandingan antara elemen yang terjadi selama proses pengurutan dengan menambahkan counter di dalam algoritma setiap kali dilakukan perbandingan.
kedua menghitung jumlah perpindahan/pertukaran elemen yang terjadi dengan menambahkan counter di dalam algoritma setiap kali perpindahan/pertukaran dilakukan.
kemudian menganalisis kompleksitas waktu algoritma untuk memperkirakan jumlah langkah.
dan yang terakhir mencetak/mencatat setiap langkah algoritma selama proses pengurutan untuk dihitung secara manual, meski tidak efisien untuk input besar. dengan n=n-1
*/



#include <iostream>
using namespace std;

int irza[94];//deklrasi variabel global
int n, i;

void input() { //prosedur untuk input

    while (true) {
        cout << "Masukan Banyaknya Elemen Pada Array : "; // Output ke layar
        cin >> n;    
        if (n <= 94)  
            break;  
        else {
            cout << "\nArray Bisa Mempunyai Maksimal 94 Elemen.\n"; // output 
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {            //looping dengan i dimulai dari 0 hingga n-1 
        cout << "Data ke-" << (i + 1) << ":";
        cin >> irza [i];                       
    }
}

void SelectionSort() {//membuat sebuah prosedur SelectionSort
    int j, pass;
    for (i = 0; i < n - 1; i++) {
        pass = i;
        for (j = i + 1; j < n; j++) {
            if (irza[j] < irza[pass])
                pass = j;
        }
        //swap posisi dengan membuat variabel sementara temp
        int temp = irza[pass];
        irza[pass] = irza[i];
        irza[i] = temp;

        //untuk menampilkan progres setiap kali pass 
        cout << "\nPass " << i + 1 << " = ";
        for (int k = 0; k < n; k++) {
            cout << irza[k] << " ";
        }
        cout << endl;
    }
}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array Yang Telah Tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << irza[j]; //output setiap element array pada garis baru
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}


int main()
{
    input();
    SelectionSort();
    display();

    system("pause");
    return 0;
}





































