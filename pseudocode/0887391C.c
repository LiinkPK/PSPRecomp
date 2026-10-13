/* Entry 0x0887391C | file offset 0x000708F4 | FUN_0887391c | bytes 60 */

int FUN_0887391c(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x230) = param_2;
  *(undefined4 *)(param_1 + 0x228) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x22c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x234) = 1;
  *(undefined1 *)(param_1 + 0x238) = param_3;
  *(undefined1 *)(param_1 + 0x239) = 0;
  return param_1;
}

