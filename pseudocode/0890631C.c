/* Entry 0x0890631C | file offset 0x001032F4 | FUN_0890631c | bytes 132 */

undefined4 * FUN_0890631c(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  *param_1 = &DAT_089cdc40;
  FUN_08905884(param_1 + 1);
  param_1[0xc] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined1 *)(param_1 + 1) = *param_2;
  uVar3 = param_2[3];
  *(undefined1 *)((int)param_1 + 5) = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)((int)param_1 + 6) = uVar2;
  uVar2 = param_2[5];
  *(undefined1 *)((int)param_1 + 7) = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = uVar2;
  return param_1;
}

