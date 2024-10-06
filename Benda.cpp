#include "Deklarasi.h"
#include <iostream>

Benda::Benda() {
	idx = 0;
}

void Benda::set_data(std::string nama_benda, std::string fungsi_benda, int jumlah_benda) {
	nama[idx] = nama_benda;
	fungsi[idx] = fungsi_benda;
	jumlah[idx] = jumlah_benda;
	idx++;
}

void Benda::get_data_benda() {
	std::cout << "=============== Data Benda ===============\n";
	for (int i = 0; i < idx; i++) {
		std::cout << "| " << nama[i] << " | " << fungsi[i] << " | " << jumlah[i] << " |\n";
	}
	std::cout << "=============== Akhir Data Benda ===============\n";
}
