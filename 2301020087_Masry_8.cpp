#include <iostream>
#include "Deklarasi.H"

int main() {
	Hewan hewan;
	hewan.set_data("Kucing", "Putih", 40);
	hewan.set_data("Ikan", "Merah", 20);
	hewan.set_data("Ayam", "Belang Hitam", 30);
	hewan.set_data("Kambing", "Hitam", 100);
	hewan.set_data("Sapi", "Coklat Kemerahan", 200);
	
	Benda benda;
	benda.set_data("Kursi", "Duduk", 4);
	benda.set_data("Meja", "Saji Makanan", 2);
	benda.set_data("Pintu", "Akses Keluar/Masuk", 3);
	benda.set_data("Jendela", "Akses Udara", 7);
	benda.set_data("Piring", "Tempat Makanan", 5);
	
	hewan.get_data_hewan();
	benda.get_data_benda();
	
	return 0;
}
