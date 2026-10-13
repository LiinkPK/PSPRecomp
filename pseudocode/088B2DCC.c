/* Entry 0x088B2DCC | file offset 0x000AFDA4 | FUN_088b2dcc | bytes 128 */

/* WARNING: Removing unreachable block (ram,0x088b2e08) */
/* WARNING: Removing unreachable block (ram,0x088b2e24) */
/* WARNING: Removing unreachable block (ram,0x088b2e10) */
/* WARNING: Removing unreachable block (ram,0x088b2e14) */
/* WARNING: Removing unreachable block (ram,0x088b2e1c) */

void FUN_088b2dcc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = *param_1 + *param_2;
    if (999999999 < *param_1 + *param_2) {
      iVar2 = 999999999;
    }
    *param_1 = iVar2;
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return;
}

