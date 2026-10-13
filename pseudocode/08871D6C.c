/* Entry 0x08871D6C | file offset 0x0006ED44 | FUN_08871d6c | bytes 56 */

void FUN_08871d6c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return;
}

