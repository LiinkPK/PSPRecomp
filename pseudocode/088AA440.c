/* Entry 0x088AA440 | file offset 0x000A7418 | FUN_088aa440 | bytes 60 */

bool FUN_088aa440(int param_1,int param_2)

{
  bool bVar1;
  
  *(int *)(param_1 + 0x10) = param_2;
  bVar1 = *(int *)(param_2 + 4) == 0x20100205;
  if (bVar1) {
    *(int *)(param_1 + 0x14) = param_2 + 0x10;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  }
  return bVar1;
}

