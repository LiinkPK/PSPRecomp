/* Entry 0x0886CC8C | file offset 0x00069C64 | FUN_0886cc8c | bytes 180 */

void FUN_0886cc8c(int param_1,uint param_2,byte param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x8e);
  iVar3 = 0;
  if (uVar1 != 0) {
    pbVar2 = *(byte **)(param_1 + 0x10c);
    do {
      if (*pbVar2 == param_2) {
        pbVar2[2] = param_3;
        return;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 3;
    } while (iVar3 < (int)uVar1);
  }
  iVar3 = 0;
  if (uVar1 != 0) {
    pcVar4 = *(char **)(param_1 + 0x10c);
    iVar5 = 0;
    do {
      if (*pcVar4 == -1) {
        *pcVar4 = (char)param_2;
        *(byte *)(*(int *)(param_1 + 0x10c) + iVar5 + 2) = param_3;
        *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar5 + 1) = 1;
        return;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 3;
      pcVar4 = pcVar4 + 3;
    } while (iVar3 < (int)uVar1);
  }
  return;
}

