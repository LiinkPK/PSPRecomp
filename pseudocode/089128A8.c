/* Entry 0x089128A8 | file offset 0x0010F880 | FUN_089128a8 | bytes 52 */

void FUN_089128a8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0x1c4);
  uVar1 = *(undefined4 *)(param_2 + 0x1c8);
  *param_1 = *(undefined4 *)(param_2 + 0x1c0);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = 0;
  return;
}

