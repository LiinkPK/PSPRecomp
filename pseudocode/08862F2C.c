/* Entry 0x08862F2C | file offset 0x0005FF04 | FUN_08862f2c | bytes 156 */

void FUN_08862f2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  
  FUN_088630c8();
  iVar1 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar1 + 0x4c))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar1 + 0x48),param_1,param_2,param_3,
             param_4,param_5,param_6);
  return;
}

