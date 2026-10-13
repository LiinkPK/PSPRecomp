/* Entry 0x088AC760 | file offset 0x000A9738 | FUN_088ac760 | bytes 100 */

void FUN_088ac760(int param_1)

{
  FUN_08935bb4(param_1 + 0x21c,DAT_089d6010,0xd);
  FUN_088adf68(param_1,param_1 + 0x764,*(undefined4 *)(param_1 + 0xecc),
               *(undefined4 *)(param_1 + 0xec8));
  *(undefined4 *)(param_1 + 600) = 0x3ecc8;
  *(undefined4 *)(param_1 + 0x25c) = 0x3ecc8;
  *(int *)(param_1 + 0x254) = param_1 + 0xf08;
  *(undefined4 *)(param_1 + 0xef4) = 0;
  return;
}

