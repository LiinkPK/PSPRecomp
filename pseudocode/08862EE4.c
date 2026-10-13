/* Entry 0x08862EE4 | file offset 0x0005FEBC | FUN_08862ee4 | bytes 72 */

void FUN_08862ee4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar1 + 0x24))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar1 + 0x20),param_1,param_2,param_3,
             param_4);
  return;
}

