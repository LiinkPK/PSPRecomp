/* Entry 0x088D8B58 | file offset 0x000D5B30 | FUN_088d8b58 | bytes 152 */

undefined4 FUN_088d8b58(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  FUN_088d8a54();
  if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) || (6 < param_5)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x2c) = param_2;
    *(int *)(param_1 + 0x30) = param_3;
    *(int *)(param_1 + 0x34) = param_4;
    *(uint *)(param_1 + 0x38) = param_5;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

