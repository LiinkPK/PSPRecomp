/* Entry 0x088BA0AC | file offset 0x000B7084 | FUN_088ba0ac | bytes 192 */

void FUN_088ba0ac(short *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  
  FUN_088f4e3c();
  *param_1 = (short)*param_2;
  cVar1 = param_2[0x774];
  *(undefined1 *)((int)param_1 + 3) = 0;
  *(char *)(param_1 + 1) = cVar1;
  param_1[2] = (ushort)(byte)param_2[1];
  sVar3 = FUN_088cbb3c(param_2);
  param_1[3] = sVar3;
  psVar8 = (short *)(param_2 + param_2[0x773] * 0xc6 + 0x10);
  iVar7 = 0;
  iVar6 = 0x31;
  sVar3 = *psVar8;
  psVar4 = param_1 + 6;
  psVar5 = psVar8;
  do {
    sVar2 = psVar5[1];
    *psVar4 = sVar3;
    iVar7 = iVar7 + 4;
    psVar4[1] = sVar2;
    psVar5 = (short *)((int)psVar8 + iVar7);
    iVar6 = iVar6 + -1;
    sVar3 = *psVar5;
    psVar4 = (short *)((int)(param_1 + 6) + iVar7);
  } while (iVar6 != 0);
  *psVar4 = sVar3;
  return;
}

