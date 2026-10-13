/* Entry 0x088972C4 | file offset 0x0009429C | FUN_088972c4 | bytes 104 */

void FUN_088972c4(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)(param_3 + 2);
  *param_2 = param_4;
  iVar3 = 0;
  puVar1 = param_2;
  do {
    param_2[0xb] = *param_3;
    if (*psVar2 < 0) {
      puVar1[7] = 0;
    }
    else {
      puVar1[7] = *(int *)(param_1 + 8) + *psVar2 * 0x10;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 4);
  param_2[6] = *(int *)(param_1 + 0xc) + *(short *)((int)param_3 + 6) * 0x10;
  return;
}

