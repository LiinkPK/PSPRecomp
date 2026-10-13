/* Entry 0x088065EC | file offset 0x000035C4 | FUN_088065ec | bytes 100 */

void FUN_088065ec(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_2 & 0xff) != 0) {
      FUN_08806c8c(param_1 + 0x6bc,param_2 & 0xff);
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 >> 8;
  } while (iVar1 < 4);
  return;
}

