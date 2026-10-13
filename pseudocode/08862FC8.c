/* Entry 0x08862FC8 | file offset 0x0005FFA0 | FUN_08862fc8 | bytes 68 */

void FUN_08862fc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar1 + 0xe4))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar1 + 0xe0),param_1,param_2,param_3);
  return;
}

