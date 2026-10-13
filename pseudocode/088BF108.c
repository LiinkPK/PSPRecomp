/* Entry 0x088BF108 | file offset 0x000BC0E0 | FUN_088bf108 | bytes 116 */

int FUN_088bf108(int param_1)

{
  FUN_088bd4e4();
  FUN_088bd4e4(param_1 + 0x40);
  FUN_08993560(param_1 + 0x80,10,0x44,FUN_088bf08c);
  FUN_08993560(param_1 + 0x32c,10,0x44,FUN_088bf08c);
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  *(undefined4 *)(param_1 + 0x5dc) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  return param_1;
}

