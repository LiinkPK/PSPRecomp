/* Entry 0x08863088 | file offset 0x00060060 | FUN_08863088 | bytes 64 */

void FUN_08863088(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_089d5ea0 + 4) + 0x154);
  (**(code **)(iVar1 + 0x104))
            (*(int *)(DAT_089d5ea0 + 4) + (int)*(short *)(iVar1 + 0x100),param_1,param_2);
  return;
}

