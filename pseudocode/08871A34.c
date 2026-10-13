/* Entry 0x08871A34 | file offset 0x0006EA0C | FUN_08871a34 | bytes 76 */

void FUN_08871a34(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[1] + 0x154);
  (**(code **)(iVar1 + 0x4c))
            (param_1[1] + (int)*(short *)(iVar1 + 0x48),*param_1,param_1[0x18],param_1[0x19],
             FUN_08871b1c,param_1,0);
  return;
}

