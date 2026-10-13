/* Entry 0x088AC034 | file offset 0x000A900C | FUN_088ac034 | bytes 72 */

void FUN_088ac034(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x210) = 0xb;
  *(undefined4 *)(param_1 + 0xeb8) = param_2;
  FUN_08935bb4(param_1 + 0x22c,"GameData*",0x14);
  *(undefined4 *)(param_1 + 2000) = 1;
  return;
}

