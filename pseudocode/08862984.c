/* Entry 0x08862984 | file offset 0x0005F95C | FUN_08862984 | bytes 88 */

void FUN_08862984(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar1 + 0x3c))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar1 + 0x38),param_1,param_2,param_3);
  return;
}

