/* Entry 0x08907400 | file offset 0x001043D8 | FUN_08907400 | bytes 84 */

bool FUN_08907400(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1 = param_1 + param_2 * 0x80;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 < 5) {
    iVar2 = param_1 + 4 + iVar1 * 8;
    uVar3 = param_3[1];
    *(undefined4 *)(iVar2 + 8) = *param_3;
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  }
  return iVar1 < 5;
}

