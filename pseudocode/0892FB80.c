/* Entry 0x0892FB80 | file offset 0x0012CB58 | FUN_0892fb80 | bytes 144 */

void FUN_0892fb80(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088d0700(DAT_089d7830,param_2);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_088d0700(DAT_089d7830,param_2,param_5,param_6);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  (**(code **)(*(int *)(param_1 + 0x24) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10));
  return;
}

