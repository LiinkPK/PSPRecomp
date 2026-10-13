/* Entry 0x08864134 | file offset 0x0006110C | FUN_08864134 | bytes 132 */

bool FUN_08864134(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x34) = param_5;
  *(undefined4 *)(param_1 + 0x38) = param_6;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x149) = param_7;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xdc))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xd8),param_2,FUN_08863a4c,
                     param_1,param_7);
  return -1 < iVar1;
}

