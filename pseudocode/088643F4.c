/* Entry 0x088643F4 | file offset 0x000613CC | FUN_088643f4 | bytes 128 */

bool FUN_088643f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x149) = param_5;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xdc))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xd8),param_2,FUN_08863bac,
                     param_1);
  return -1 < iVar1;
}

