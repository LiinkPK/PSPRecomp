/* Entry 0x0882FE28 | file offset 0x0002CE00 | FUN_0882fe28 | bytes 84 */

int FUN_0882fe28(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)(param_1 + 0x160);
  iVar2 = 0;
  while( true ) {
    if (*psVar1 < 0) {
      return param_2;
    }
    if (*psVar1 == *(short *)(param_1 + 0x50)) break;
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 2;
    if (3 < iVar2) {
      return param_2;
    }
  }
  return (int)psVar1[1];
}

