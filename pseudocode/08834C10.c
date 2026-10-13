/* Entry 0x08834C10 | file offset 0x00031BE8 | FUN_08834c10 | bytes 136 */

void FUN_08834c10(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x380) & 0x400000) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
    (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x3a4) + (int)*(short *)(iVar1 + 0x18),param_1);
    FUN_08834bb8(param_1,param_2,param_3);
  }
  return;
}

