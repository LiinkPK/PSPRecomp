/* Entry 0x08913B58 | file offset 0x00110B30 | FUN_08913b58 | bytes 204 */

void FUN_08913b58(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  switch(param_2) {
  case 1:
    *DAT_089d69e0 = 0;
    FUN_088cf6cc(DAT_089d7830,0xff);
    break;
  case 2:
    *DAT_089d69e0 = 1;
    FUN_088cf6cc(DAT_089d7830,2);
    FUN_088cf750(DAT_089d7830,0);
    break;
  case 4:
  case 8:
    *DAT_089d69e0 = 1;
    FUN_088cf6cc(DAT_089d7830,0xff);
  }
  return;
}

