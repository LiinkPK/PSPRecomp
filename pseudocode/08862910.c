/* Entry 0x08862910 | file offset 0x0005F8E8 | FUN_08862910 | bytes 116 */

void FUN_08862910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_08867984(param_1,0);
  iVar2 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar2 + 0x34))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar2 + 0x30),uVar1,param_2,param_3,
             param_4);
  return;
}

