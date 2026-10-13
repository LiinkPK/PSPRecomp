/* Entry 0x0886A090 | file offset 0x00067068 | FUN_0886a090 | bytes 176 */

void FUN_0886a090(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_089b0e50(*(undefined4 *)(param_1 + 0xc));
  *(undefined1 *)(param_1 + 0x8e) = uVar1;
  uVar2 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5f94 + 4),(uint)*(byte *)(param_1 + 0x8e) * 3,0,0,1,0
                      );
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x10c) = uVar2;
  if (*(char *)(param_1 + 0x8e) != '\0') {
    iVar3 = 0;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar3) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar3 + 1) = 1;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar3 + 2) = 0xff;
      iVar3 = iVar3 + 3;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x8e));
  }
  return;
}

