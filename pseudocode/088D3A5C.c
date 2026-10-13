/* Entry 0x088D3A5C | file offset 0x000D0A34 | FUN_088d3a5c | bytes 140 */

void FUN_088d3a5c(int param_1,short *param_2,int param_3)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + param_3 * 4);
  sVar1 = *param_2;
  while (sVar1 != -1) {
    if ((*piVar2 != 0) && (*piVar2 != 0)) {
      FUN_088dab44();
      *piVar2 = 0;
    }
    param_2 = param_2 + 2;
    piVar2 = piVar2 + 1;
    sVar1 = *param_2;
  }
  return;
}

