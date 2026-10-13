/* Entry 0x08926550 | file offset 0x00123528 | FUN_08926550 | bytes 104 */

int FUN_08926550(undefined4 param_1,int param_2,short param_3,short param_4)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)(*(int *)(param_2 + 0x480) + param_2);
  iVar1 = 0;
  if (*(byte *)(param_2 + 2) != 0) {
    do {
      if ((*psVar2 == param_3) && (psVar2[1] == param_4)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 2;
    } while (iVar1 < (int)(uint)*(byte *)(param_2 + 2));
  }
  return -1;
}

