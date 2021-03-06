#ifndef _INC_UNIT
#define _INC_UNIT

#include"443qmc.h"

typedef struct _unit{
  int num;
  UINT8** array; 
} unit;

//void unitFree(unit* u);
void unitSet(unit* u, int aidx, int d);
unit* unitMerge(unit* u1, unit* u2, int n);
int uintCmp(UINT8* a1, UINT8* a2, int num);
UINT32 udata2uint(UINT8* a, int n);
void uintSort(UINT8** array, int num, int b);
void uintCpy(UINT8* d, UINT8* s, int b);
unit* unitClone(unit* uin, int cnum);
int unitBitcount(UINT8* d, int cnum);
void unitFree(unit* u);

UINT8* uintMed3(UINT8* x, UINT8* y, UINT8* z, int b);
void uintQuicksort(UINT8** a, int left, int right, int b);

#endif

