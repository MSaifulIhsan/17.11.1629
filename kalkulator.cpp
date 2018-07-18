class Barang {
	public:
		int harga;
		float diskon;
};

class Hitung:public Barang{
	int jml;

	public:
		void set_values (int jml, int harga);
		int smtr(){
			return jml * harga;
		}
};

void Hitung::set_values (int j, int h) {
	jml = j;
	harga = h;
}