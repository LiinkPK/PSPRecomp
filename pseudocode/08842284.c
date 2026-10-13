/* Entry 0x08842284 | file offset 0x0003F25C | FUN_08842284 | bytes 132 */

void FUN_08842284(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_08834c10(param_1,0,0);
    FUN_0882fa10(0,0,param_1 + 0x130,1,0);
    (**(code **)(*(int *)(param_1 + 0x544) + 0x164))
              (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x160));
    iVar1 = *(int *)(*(int *)(param_1 + 0x390) + 0x5c);
    if (iVar1 != 0) {
      FUN_088aa1a0(iVar1,param_1 + 0x4c8,0xffffffff);
    }
  }
  return;
}

