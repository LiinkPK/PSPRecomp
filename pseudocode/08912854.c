/* Entry 0x08912854 | file offset 0x0010F82C | FUN_08912854 | bytes 56 */

void FUN_08912854(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1b8);
  uVar2 = *(undefined4 *)(param_2 + 0x1bc);
  *param_1 = *(undefined4 *)(param_2 + 0x1b4);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0x3f800000;
  return;
}

