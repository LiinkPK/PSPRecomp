/* Entry 0x088FB934 | file offset 0x000F890C | FUN_088fb934 | bytes 136 */

int FUN_088fb934(int param_1,undefined4 param_2,undefined1 param_3)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = -1;
  if (0 < param_1) {
    psVar1 = (short *)FUN_088470dc(param_1,param_2,param_3);
    if (psVar1 == (short *)0x0) {
      psVar1 = (short *)FUN_088470dc(param_1,1,param_3);
      if (psVar1 != (short *)0x0) {
        iVar2 = (int)*psVar1;
      }
    }
    else {
      iVar2 = (int)*psVar1;
    }
  }
  return iVar2;
}

