/* Entry 0x0889F18C | file offset 0x0009C164 | FUN_0889f18c | bytes 168 */

undefined4 FUN_0889f18c(int param_1,short param_2,short param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) - *(int *)(param_1 + 0x40);
  iVar3 = 0;
  if (0 < iVar2) {
    psVar1 = *(short **)(param_1 + 0x44);
    do {
      if ((*psVar1 == param_2) && (psVar1[1] == param_3)) {
        FUN_08935524(psVar1 + 2,param_4,0x7e);
        psVar1[0x41] = 0;
        return 1;
      }
      iVar3 = iVar3 + 1;
      psVar1 = psVar1 + 0x42;
    } while (iVar3 < iVar2);
  }
  return 0;
}

