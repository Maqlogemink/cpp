#include "Deklarasi.h"
#include <iostream>

Hewan::Hewan() {
	idx = 0;
}

void Hewan::set_data(std::string nama_hewan, std::string warna_hewan, int panjang_hewan) {
	nama[idx] = nama_hewan;
	warna[idx] = warna_hewan;
	panjang[idx] = panjang_hewan;
	idx++;
}

void Hewan::get_data_hewan() {
	std::cout << "=============== Data Hewan ===============\n";
	for (int i = 0; i < idx; i++) {
		std::cout << "| " << nama[i] << " | " << warna[i] << " | " << panjang[i] << " |\n";
	}
	std::cout << "=============== Akhir Data Hewan ===============\n";
}
