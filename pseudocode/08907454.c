/* Entry 0x08907454 | file offset 0x0010442C | FUN_08907454 | bytes 84 */

bool FUN_08907454(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1 = param_1 + param_2 * 0x80;
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 < 5) {
    iVar2 = param_1 + 4 + iVar1 * 8;
    uVar3 = param_3[1];
    *(undefined4 *)(iVar2 + 0x30) = *param_3;
    *(undefined4 *)(iVar2 + 0x34) = uVar3;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  return iVar1 < 5;
}

