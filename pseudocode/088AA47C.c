/* Entry 0x088AA47C | file offset 0x000A7454 | FUN_088aa47c | bytes 60 */

bool FUN_088aa47c(int param_1,int param_2)

{
  bool bVar1;
  
  *(int *)(param_1 + 0x24) = param_2;
  bVar1 = *(int *)(param_2 + 4) == 0x20070422;
  if (bVar1) {
    *(int *)(param_1 + 0x28) = param_2 + 0x10;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
  }
  return bVar1;
}

