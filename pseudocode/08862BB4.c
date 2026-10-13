/* Entry 0x08862BB4 | file offset 0x0005FB8C | FUN_08862bb4 | bytes 140 */

void FUN_08862bb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  FUN_088630c8();
  iVar1 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar1 + 100))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar1 + 0x60),param_1,param_2,param_3,
             param_4,param_5);
  return;
}

