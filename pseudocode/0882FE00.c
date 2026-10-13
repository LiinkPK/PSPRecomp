/* Entry 0x0882FE00 | file offset 0x0002CDD8 | FUN_0882fe00 | bytes 40 */

void FUN_0882fe00(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0x160) = 0xffff;
    *(undefined2 *)(param_1 + 0x162) = 0xffff;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  return;
}

