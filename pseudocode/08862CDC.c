/* Entry 0x08862CDC | file offset 0x0005FCB4 | FUN_08862cdc | bytes 84 */

void FUN_08862cdc(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_08867984(param_1,0);
  iVar2 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar2 + 0x7c))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar2 + 0x78),uVar1,param_2);
  return;
}

