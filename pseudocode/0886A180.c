/* Entry 0x0886A180 | file offset 0x00067158 | FUN_0886a180 | bytes 204 */

void FUN_0886a180(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x8e);
  iVar6 = 0;
  if (uVar3 != 0) {
    iVar5 = 0;
    do {
      cVar1 = *(char *)(*(int *)(param_1 + 0x10c) + iVar5);
      if (cVar1 != -1) {
        uVar2 = FUN_089b0e78(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),cVar1);
        iVar4 = *(int *)(param_1 + 0x10c) + iVar5;
        if ((*(char *)(iVar4 + 1) == '\x01') && (*(char *)(iVar4 + 2) == -1)) {
          FUN_089b0fac(uVar2,1);
          uVar3 = (uint)*(byte *)(param_1 + 0x8e);
        }
        else {
          FUN_089b0fac(uVar2,0);
          uVar3 = (uint)*(byte *)(param_1 + 0x8e);
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 3;
    } while (iVar6 < (int)uVar3);
  }
  return;
}

