/* Entry 0x08834BB8 | file offset 0x00031B90 | FUN_08834bb8 | bytes 88 */

void FUN_08834bb8(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = func_0x08a5d2b8(param_2);
  *(int *)(param_1 + 0x3a4) = iVar1;
  (**(code **)(*(int *)(iVar1 + 8) + 0x14))
            (iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0x10),param_1,param_3);
  return;
}

