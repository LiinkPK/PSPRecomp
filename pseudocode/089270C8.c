/* Entry 0x089270C8 | file offset 0x001240A0 | FUN_089270c8 | bytes 332 */

void FUN_089270c8(int param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined1 auStack_130 [256];
  
  iVar5 = *(int *)(param_1 + 8);
  psVar7 = param_2 + 1;
  *param_2 = 0;
  iVar3 = 0;
  psVar2 = psVar7;
  do {
    *psVar2 = 0;
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 1;
  } while (iVar3 < 0x15);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = 0;
  if ('\0' < *(char *)(iVar3 + 0xb6)) {
    iVar6 = 0;
    iVar8 = 0;
    do {
      sVar1 = *(short *)(iVar3 + iVar6 + 0x8c);
      FUN_08935828(auStack_130,0,0x100);
      FUN_089291e4(auStack_130,0x80,iVar5 + 0x63d0 + sVar1 * 0x66,0x6a,0x19);
      FUN_08935524(*(int *)(*(int *)(param_1 + 0x20) + 8) + 0x2c + iVar8,auStack_130,0x6a);
      *psVar7 = (short)(iVar8 + 0x2aU >> 1);
      iVar4 = iVar4 + 1;
      *param_2 = *param_2 + 1;
      iVar3 = *(int *)(param_1 + 0x20);
      iVar6 = iVar6 + 2;
      psVar7 = psVar7 + 1;
      iVar8 = iVar8 + 0x6a;
    } while (iVar4 < *(char *)(iVar3 + 0xb6));
  }
  FUN_0887a6a0(*(undefined4 *)(iVar3 + 8));
  return;
}

