/* Entry 0x088876B8 | file offset 0x00084690 | FUN_088876b8 | bytes 120 */

undefined4 FUN_088876b8(undefined4 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 0;
  psVar3 = DAT_089d7354;
  if (0 < *(int *)(DAT_089d7350 + 8)) {
    do {
      iVar2 = 0;
      psVar1 = psVar3;
      do {
        if (*psVar1 == param_2) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (iVar2 < 3);
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 4;
    } while (iVar4 < *(int *)(DAT_089d7350 + 8));
  }
  return 0;
}

