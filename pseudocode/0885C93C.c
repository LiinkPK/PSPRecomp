/* Entry 0x0885C93C | file offset 0x00059914 | FUN_0885c93c | bytes 104 */

void FUN_0885c93c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 8) = param_1;
    uVar2 = *(uint *)(param_1 + 4);
    uVar3 = 0;
    iVar1 = param_1;
    if (uVar2 != 0) {
      do {
        if (*(int *)(iVar1 + 0x1c) == 0) {
          *(undefined4 *)(iVar1 + 0x18) = 0;
        }
        else {
          *(int *)(iVar1 + 0x18) = *(int *)(param_1 + 8) + *(int *)(iVar1 + 0x18);
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0x10;
      } while (uVar3 < uVar2);
    }
  }
  return;
}

