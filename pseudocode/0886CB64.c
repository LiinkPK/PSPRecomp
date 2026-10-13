/* Entry 0x0886CB64 | file offset 0x00069B3C | FUN_0886cb64 | bytes 212 */

void FUN_0886cb64(int param_1,uint param_2,byte param_3)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x8e);
  iVar6 = 0;
  if (uVar2 != 0) {
    pbVar3 = *(byte **)(param_1 + 0x10c);
    iVar5 = 0;
    do {
      if (*pbVar3 == param_2) {
        pbVar3[1] = param_3;
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = 0xff;
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar5 + 2) = uVar1;
        return;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 3;
      pbVar3 = pbVar3 + 3;
    } while (iVar6 < (int)uVar2);
  }
  iVar6 = 0;
  if (uVar2 != 0) {
    pcVar4 = *(char **)(param_1 + 0x10c);
    iVar5 = 0;
    do {
      if (*pcVar4 == -1) {
        *pcVar4 = (char)param_2;
        uVar1 = 0;
        *(byte *)(*(int *)(param_1 + 0x10c) + iVar5 + 1) = param_3;
        if (param_3 != 0) {
          uVar1 = 0xff;
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar5 + 2) = uVar1;
        return;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 3;
      pcVar4 = pcVar4 + 3;
    } while (iVar6 < (int)uVar2);
  }
  return;
}

