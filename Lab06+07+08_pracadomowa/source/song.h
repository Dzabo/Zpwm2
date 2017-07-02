#ifndef ZPWM_SONG_H_
#define ZPWM_SONG_H_

const int size_smells = 10000;
const int size_imp = 18;

//NOTES
//C Cis D Dis E F Fis G Gis A Ais B
//C Z   D X   E F V   G N   A M   B

char note_imperial[size_imp] = { 'E','E','E','C','G','E','C','G','E','B','B','B','C','G','E','C','G','E' };
double time_imperial[size_imp] = { 8,8,8,4,2,8,4,2,8,8,8,8,4,2,8,4,2,8, };
int scale_imperial[size_imp] = { 4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4 };

char note_smells_verse[size_smells] = {
  'C','X','F','N','F','X','Z','C','Z','C',
  'M','N','M','C','M','N','G','P',
  'C','X','F','N','F','X','Z','C','Z','C',
  'M','N','M','C','M','N','G','P',
};
double time_smells_verse[size_smells] = {
  6,8,8,12,8,5,4,10,4,10,
  4,10,4,10,4,4,8,2,
  6,8,8,12,8,5,4,10,4,10,
  4,10,4,10,4,4,8,2
};
int scale_smells_verse[size_smells] = {
  4,4,4,3,4,4,4,4,4,4,
  3,3,3,4,3,3,3,3,
  4,4,4,3,4,4,4,4,4,4,
  3,3,3,4,3,3,3,3,
};
char note_smells_prechorus[size_smells] = {
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G'
};
double time_smells_prechorus[size_smells] = {
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,10,
};
int scale_smells_prechorus[size_smells] = {
  3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3
};

char note_smells_chorus[size_smells] = {
  'N','G','G','F','P','M','M','M','N','P','Z','Z','Z','C','P','M','M','M','N','P',
  'N','G','G','F','P','M','M','M','N','P','Z','Z','Z','C','P','M','M','M','N','P',
  'P','N','P','C','P','C','P'
};
double time_smells_chorus[size_smells] = {
  6,5,8,10,2,6,5,8,10,2,6,5,8,10,2,6,5,8,10,2,
  6,5,8,10,2,6,5,8,10,2,6,5,8,10,2,6,5,8,10,2,
  5,12,20,12,40,12,40
};
int scale_smells_chorus[size_smells] = {
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4
};

char note_smells_full[size_smells] = {
  'C','X','F','N','F','X','Z','C','Z','C',
  'M','N','M','C','M','N','G','P',
  'C','X','F','N','F','X','Z','C','Z','C',
  'M','N','M','C','M','N','G','P', // 1ZWR
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G', // 1 PREC
  'N','G','G','F','P','M','M','M','N','P','Z','Z','Z','C','P','M','M','M','N','P',
  'N','G','G','F','P','M','M','M','N','P','Z','Z','Z','C','P','M','M','M','N','P',
  'P','N','P','C','P','C','P', // 1 CHOR
  'C','X','F','N','F','X','Z','C','Z','C',
  'M','N','M','C','M','N','G','P',
  'C','X','F','N','F','X','Z','C','Z','C',
  'M','N','M','C','M','N','G','P', // 2ZWR
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G','P','N','G','G','F',
  'N','G','P','N','G','N','G', // 2 PREC
  'N','G','G','F','P','M','M','M','N','P','Z','Z','Z','C','P','M','M','M','N','P',
  'N','G','G','F','P','M','M','M','N','P','Z','Z','Z','C','P','M','M','M','N','P',
  'P','N','P','C','P','C','P' // 2 CHOR
};
double time_smells_full[size_smells] = {
  6,8,8,12,8,5,4,10,4,10,
  4,10,4,10,4,4,8,2,
  6,8,8,12,8,5,4,10,4,10,
  4,10,4,10,4,4,8,2, //1ZWR
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,10, // 1PREC
  6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,
  6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,
  5,12,20,12,40,12,40, // 1 CHOR
  6,8,8,12,8,5,4,10,4,10,
  4,10,4,10,4,4,8,2,
  6,8,8,12,8,5,4,10,4,10,
  4,10,4,10,4,4,8,2, //2ZWR
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,9,1,4,4,4,10,
  5,10,1,5,10,5,10, // 2PREC
  6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,
  6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,6,5,8,9,4,
  5,12,20,12,40,12,40 // 2 CHOR
};
int scale_smells_full[size_smells] = {
  5,5,5,4,5,5,5,5,5,5,
  4,4,4,5,4,4,4,4,
  5,5,5,4,5,5,5,5,5,5,
  4,4,4,5,4,4,4,4, // 1 ZWR
  4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4, //1 PREC
  5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
  5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
  5,5,5,5,5,5,5,//1 CHOR
  6,6,6,5,6,6,6,6,6,6,
  5,5,5,6,5,5,5,5,
  6,6,6,5,6,6,6,6,6,6,
  5,5,5,6,5,5,5,5, // 2 ZWR
  5,5,5,5,5,5,5,5,5,5,5,5,
  5,5,5,5,5,5,5,5,5,5,5,5,
  5,5,5,5,5,5,5,5,5,5,5,5,
  5,5,5,5,5,5,5, //2 PREC
  6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
  6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
  6,6,6,6,6,6,6//2 CHOR

};
#endif