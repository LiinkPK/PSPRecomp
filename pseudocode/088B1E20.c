/* Entry 0x088B1E20 | file offset 0x000AEDF8 | FUN_088b1e20 | bytes 280 */

void FUN_088b1e20(int *param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  undefined *local_40;
  uint local_3c;
  int local_38;
  int local_34;
  
  cVar1 = *(char *)(param_2 + 0x773);
  param_1[0xaa] = 0;
  uVar4 = 0;
  psVar5 = (short *)(param_2 + cVar1 * 0xc6 + 0xb2);
  local_34 = 1;
  piVar7 = param_1 + 1;
  piVar6 = param_1;
  do {
    local_40 = &DAT_089cb788;
    sVar2 = *psVar5;
    *piVar6 = (int)sVar2;
    local_3c = uVar4;
    local_38 = param_3;
    FUN_088beb84(piVar7,param_2,&local_40);
    iVar3 = FUN_088b29d8((int)sVar2);
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == param_3)) {
      param_1[0xaa] = param_1[0xaa] | local_34 << (uVar4 & 0x1f);
    }
    uVar4 = uVar4 + 1;
    psVar5 = psVar5 + 1;
    piVar6 = piVar6 + 0x11;
    piVar7 = piVar7 + 0x11;
  } while ((int)uVar4 < 10);
  return;
}

