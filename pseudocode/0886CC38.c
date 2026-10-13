/* Entry 0x0886CC38 | file offset 0x00069C10 | FUN_0886cc38 | bytes 84 */

bool FUN_0886cc38(int param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x8e) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x10c);
    do {
      if (*pbVar1 == param_2) {
        return pbVar1[1] != 0;
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 3;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x8e));
  }
  return true;
}

