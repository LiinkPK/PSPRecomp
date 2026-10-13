/* Entry 0x088DEA18 | file offset 0x000DB9F0 | FUN_088dea18 | bytes 128 */

undefined4 FUN_088dea18(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_088de9d8();
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0xc) = param_3;
    *(int *)(param_1 + 0x10) = param_4;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

