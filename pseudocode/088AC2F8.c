/* Entry 0x088AC2F8 | file offset 0x000A92D0 | FUN_088ac2f8 | bytes 132 */

void FUN_088ac2f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_08935bb4(param_1 + 0x21c,param_4,0xd);
  FUN_088adf68(param_1,param_1 + 0x764,0,0);
  *(undefined4 *)(param_1 + 600) = param_3;
  *(undefined4 *)(param_1 + 0x25c) = param_3;
  *(undefined4 *)(param_1 + 0x254) = param_2;
  *(undefined4 *)(param_1 + 0xef4) = param_5;
  FUN_088ac294(param_1,4);
  return;
}

