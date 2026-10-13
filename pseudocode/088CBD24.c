/* Entry 0x088CBD24 | file offset 0x000C8CFC | FUN_088cbd24 | bytes 184 */

void FUN_088cbd24(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  short *psVar2;
  short local_c0;
  short local_be [80];
  short local_1e;
  
  psVar2 = &local_c0;
  if (*param_1 != -1) {
    FUN_088b6f48(&local_c0,(int)*param_1,param_2,param_3);
    iVar1 = 0;
    if (0 < local_c0) {
      do {
        FUN_088b7ed4(param_1 + 0x10,(int)*(short *)((int)psVar2 + 2));
        iVar1 = iVar1 + 1;
        psVar2 = (short *)((int)psVar2 + 2);
      } while (iVar1 < local_c0);
    }
    iVar1 = (int)param_1[0x775] + (int)local_1e;
    if (10 < iVar1) {
      iVar1 = 10;
    }
    param_1[0x775] = (char)iVar1;
  }
  return;
}

