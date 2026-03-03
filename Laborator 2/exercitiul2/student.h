#pragma once

class student {
private:
	char* nume;
	int nota_matematica;
	int nota_engleza;
	int nota_istorie;
	float nota_medie;
	
public:
	student();
	student( const char* nume);
	const char* GetNume();
	int GetMatematica();
	void SetMatematica( int m );
	int GetEngleza();
	void SetEngleza( int e );
	int GetIstorie();
	void SetIstorie( int i);
	float Medie();

};
