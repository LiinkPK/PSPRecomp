/* Entry 0x088FCC70 | file offset 0x000F9C48 | FUN_088fcc70 | bytes 112 */

void FUN_088fcc70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar1 = FUN_0885c40c(param_2,param_3,"MAN::BUF",0x40);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  return;
}

