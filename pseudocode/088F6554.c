/* Entry 0x088F6554 | file offset 0x000F352C | FUN_088f6554 | bytes 324 */

undefined4 FUN_088f6554(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar3 = (int)*(short *)(param_3 + 0xf4) - (int)*(short *)(param_3 + 0xf8);
  iVar1 = (int)*(short *)(param_3 + 0xf6) - (int)*(short *)(param_3 + 0xfa);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0 < iVar3) {
    iVar5 = 0;
    psVar2 = (short *)0x0;
    if (0 < *(short *)(DAT_089d77d0 + 0xc)) {
      do {
        psVar4 = (short *)(DAT_089d77dc + iVar5 * 0xc);
        if ((psVar4[4] == -1) ||
           ((*(uint *)(DAT_089d726c + ((uint)(int)psVar4[4] >> 5) * 4) &
            1 << ((int)psVar4[4] & 0x1fU)) != 0)) {
          psVar2 = psVar4;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)(DAT_089d77d0 + 0xc));
    }
    iVar3 = iVar3 - iVar1;
    if (psVar2 != (short *)0x0) {
      iVar5 = (iVar1 * 2 + iVar3) * (int)psVar2[1];
      if (psVar2[3] < iVar5) {
        iVar5 = (int)psVar2[3];
      }
      *param_2 = iVar5;
      iVar5 = (iVar1 * 2 + iVar3) * (int)*psVar2;
      if (psVar2[2] < iVar5) {
        iVar5 = (int)psVar2[2];
      }
      param_2[1] = iVar5;
      param_2[2] = iVar1;
      param_2[3] = iVar3;
      return 1;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return 0;
}

