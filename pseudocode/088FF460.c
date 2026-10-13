/* Entry 0x088FF460 | file offset 0x000FC438 | FUN_088ff460 | bytes 72 */

int FUN_088ff460(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2 * 0x20 + 0x400;
  if (iVar1 < 0) {
    iVar1 = -0x7fffffde;
  }
  return iVar1;
}

