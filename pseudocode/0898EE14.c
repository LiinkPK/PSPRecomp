/* Entry 0x0898EE14 | file offset 0x0018BDEC | FUN_0898ee14 | bytes 128 */

void FUN_0898ee14(int param_1,undefined4 param_2,undefined2 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_089a3868(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x50) = *param_3;
  *(undefined2 *)(param_1 + 0x52) = param_3[1];
  uVar1 = param_3[2];
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(undefined2 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = param_5;
  return;
}

