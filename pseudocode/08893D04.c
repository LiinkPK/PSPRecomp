/* Entry 0x08893D04 | file offset 0x00090CDC | FUN_08893d04 | bytes 96 */

void FUN_08893d04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08893cf8();
  *(undefined4 *)(param_1 + 0x718) = param_2;
  *(undefined4 *)(param_1 + 0x71c) = param_3;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(param_1 + 0x724) = 1;
  *(undefined4 *)(param_1 + 0x728) = param_4;
  return;
}

