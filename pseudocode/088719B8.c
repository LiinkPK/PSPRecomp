/* Entry 0x088719B8 | file offset 0x0006E990 | FUN_088719b8 | bytes 76 */

void FUN_088719b8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[1] + 0x154);
  (**(code **)(iVar1 + 0x4c))
            (param_1[1] + (int)*(short *)(iVar1 + 0x48),*param_1,param_1[0x18],param_1[0x19],
             FUN_08871ad4,param_1,0);
  return;
}

