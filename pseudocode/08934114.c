/* Entry 0x08934114 | file offset 0x001310EC | FUN_08934114 | bytes 288 */

void FUN_08934114(int param_1,int param_2)

{
  int iVar1;
  
  if (((((*(uint *)(param_1 + 4) & 0x100) == 0) && ((*(byte *)(param_2 + 0x193) & 1) != 0)) &&
      ((*(byte *)(param_2 + 0x193) & 2) == 0)) &&
     ((iVar1 = FUN_0883739c(param_2), iVar1 != 0 && (iVar1 = func_0x08b33418(param_2), iVar1 != 0)))
     ) {
    iVar1 = FUN_088374b0(param_2);
    if (iVar1 == 0) {
      FUN_0882fa10(0x41000000,0,param_2 + 0x130,1,0);
      FUN_08834c10(param_2,0,0);
      return;
    }
    if ((*(uint *)(*(int *)(param_2 + 0x3a4) + 4) & 1) == 0) {
      FUN_08834934(param_2,0x65,0x66);
      FUN_08834948(param_2);
      return;
    }
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x4c))
            (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x48),param_2);
  return;
}

