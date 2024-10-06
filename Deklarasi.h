#ifndef DEKLARASI_H
#define DEKLARASI_H

#include <string>

class Hewan {
	private:
		int idx;
		std::string nama[5];
		std::string warna[5];
		int panjang[5];
	
	public:
		Hewan();
		void set_data(std::string nama_hewan, std::string warna_hewan, int panjang_hewan);
		void get_data_hewan();
};

class Benda {
	private:
		int idx;
		std::string nama[5];
		std::string fungsi[5];
		int jumlah[5];
	
	public:
		Benda();
		void set_data(std::string nama_benda, std::string fungsi_benda, int jumlah_benda);
		void get_data_benda();
};

#endif
