/* Entry 0x08833B80 | file offset 0x00030B58 | FUN_08833b80 | bytes 152 */

void FUN_08833b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x44c);
  uVar1 = *(uint *)(param_1 + 0x448);
  uVar3 = FUN_089985b0(1,0,param_3);
  *(uint *)(param_1 + 0x44c) = uVar2 | (uint)((ulonglong)uVar3 >> 0x20);
  *(uint *)(param_1 + 0x448) = uVar1 | (uint)uVar3;
  (**(code **)(*(int *)(param_1 + 0x544) + 0xbc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0xb8),param_2,param_3,param_1);
  return;
}

