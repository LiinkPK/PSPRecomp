/* Entry 0x0881478C | file offset 0x00011764 | FUN_0881478c | bytes 76 */

void FUN_0881478c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(iVar1 + 0x2cc);
  uVar3 = *(undefined4 *)(iVar1 + 0x2d0);
  *param_2 = *(undefined4 *)(iVar1 + 0x2c8);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return;
}

